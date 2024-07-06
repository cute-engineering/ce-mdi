
#pragma once

namespace Mdi {
    struct Icon
    {
        int width;
        int height;
        const char* name;
        const char* path;

        constexpr Icon(int width, int height, const char* name, const char* path)
            : width(width), height(height), name(name), path(path)
        {
        }
    };
} // namespace Mdi
