#pragma once

#include "_prelude.h"

#define MDI_WINDOW_MINIMIZE {24, 24, "window-minimize", "M20,14H4V10H20"}

#ifdef __cplusplus
namespace Mdi
{
    constexpr Icon WINDOW_MINIMIZE = Icon(24, 24, "window-minimize", "M20,14H4V10H20");
} // namespace Mdi
#endif

