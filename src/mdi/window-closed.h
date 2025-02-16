#pragma once

#include "_prelude.h"

#define MDI_WINDOW_CLOSED {24, 24, "window-closed", "M6,11H10V9H14V11H18V4H6V11M18,13H6V20H18V13M6,2H18A2,2 0 0,1 20,4V20A2,2 0 0,1 18,22H6A2,2 0 0,1 4,20V4A2,2 0 0,1 6,2Z"}

#ifdef __cplusplus
namespace Mdi
{
    constexpr Icon WINDOW_CLOSED = Icon(24, 24, "window-closed", "M6,11H10V9H14V11H18V4H6V11M18,13H6V20H18V13M6,2H18A2,2 0 0,1 20,4V20A2,2 0 0,1 18,22H6A2,2 0 0,1 4,20V4A2,2 0 0,1 6,2Z");
} // namespace Mdi
#endif

