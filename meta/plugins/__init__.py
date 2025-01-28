#!/usr/bin/env python

import json
import os
import re

from cutekit import ensure

ensure((0, 8, 0))

from cutekit import shell, const, cli


@cli.command(None, "mdi", "Manage Material Design Icons")
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


@cli.command(None, "mdi/sync", "Sync Material Design Icons")
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

    # create a header file for each icons
    for icon in meta:
        with open("src/mdi/" + icon["name"] + ".h", "w", encoding="utf8") as f:
            f.write(f"#pragma once\n\n")
            f.write(f'#include "_prelude.h"\n\n')
            f.write(
                f"#define MDI_{toConstantName(icon['name'])} {{24, 24, \"{icon['name']}\", \"{icon['path']}\"}}\n\n"
            )
            f.write(f"#ifdef __cplusplus\n")
            f.write(f"namespace Mdi\n")
            f.write("{\n")
            f.write(
                f"    constexpr Icon {toConstantName(icon['name'])} = Icon(24, 24, \"{icon['name']}\", \"{icon['path']}\");\n"
            )
            f.write(f"}} // namespace Mdi\n")
            f.write(f"#endif\n")
            f.write(f"\n")

    # create _prelude.h
    with open("src/mdi/_prelude.h", "w", encoding="utf8") as f:
        f.write(f"""
#pragma once

#ifdef __cplusplus
namespace Mdi {{
    struct Icon
    {{
        int width;
        int height;
        const char* name;
        const char* path;

        constexpr Icon(int width, int height, const char* name, const char* path)
            : width(width), height(height), name(name), path(path)
        {{
        }}
    }};
}} // namespace Mdi
#endif

""")

    with open("src/mdi/_mod.h", "w", encoding="utf8") as f:
        f.write(f"""
#pragma once
#include "_prelude.h"
""")
