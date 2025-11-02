#!/usr/bin/env python

import json
import os
import re

from cutekit import ensure

ensure((0, 10, 0))

from cutekit import shell, const, cli


@cli.command("mdi", "Manage Material Design Icons")
def _():
    pass


def getMeta(repoDir: str):
    with open(os.path.join(repoDir, "meta.json"), "r", encoding="utf8") as f:
        meta = json.load(f)

    for icon in meta:
        with open(
            os.path.join(repoDir, "svg", f"{icon['name']}.svg"),
            "r",
            encoding="utf8",
        ) as svgFile:
            icon["path"] = next(re.finditer(r' d="([^"]+)"', svgFile.read())).group(1)
    return meta


def toConstantName(name: str):
    return re.sub(r"[^a-zA-Z0-9]", "_", name).upper()


@cli.command("mdi/sync", "Sync Material Design Icons")
def _():
    dest = const.CACHE_DIR + "/MaterialDesign/src"
    if not os.path.exists(dest):
        shell.mkdir(dest)
        shell.exec(
            "git",
            "clone",
            "https://github.com/Templarian/MaterialDesign",
            dest,
            "--depth=1",
        )

    meta = getMeta(repoDir=dest)
    shell.mkdir("src/mdi/res")
    with open("src/mdi/res/icons.json", "w", encoding="utf8") as f:
        json.dump(meta, f, ensure_ascii=False, indent=2)

    with open("src/mdi/mod.cpp", "w", encoding="utf8") as f:
        f.write("""export module Mdi;

namespace Mdi {

export struct _Icon
{
    const char* name;
    const char* path;
    static constexpr int size = 24;

    constexpr _Icon(const char* name, const char* path)
    : name(name), path(path)
    {
    }
};
""")
        for icon in meta:
            f.write(
                f'    export _Icon {toConstantName(icon["name"])} = _Icon("{icon["name"]}", "{icon["path"]}");\n'
            )

        f.write("export constexpr _Icon* _ALL[] = {\n")
        for icon in meta:
            f.write(f"    &{toConstantName(icon['name'])},\n")
        f.write("nullptr};\n")

        f.write("} // namespace Mdi\n")

    shell.exec(
        "clang-format",
        "-i",
        "src/mdi/mod.cpp",
    )
