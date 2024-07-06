#pragma once

#include "_prelude.h"

#define MDI_WINDOW_MAXIMIZE {24, 24, "window-maximize", "M4,4H20V20H4V4M6,8V18H18V8H6Z"}

#ifdef __cplusplus
namespace Mdi
{
    constexpr Icon WINDOW_MAXIMIZE = Icon(24, 24, "window-maximize", "M4,4H20V20H4V4M6,8V18H18V8H6Z");
} // namespace Mdi
#endif

