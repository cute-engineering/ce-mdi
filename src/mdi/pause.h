#pragma once

#include "_prelude.h"

#define MDI_PAUSE {24, 24, "pause", "M14,19H18V5H14M6,19H10V5H6V19Z"}

#ifdef __cplusplus
namespace Mdi
{
    constexpr Icon PAUSE = Icon(24, 24, "pause", "M14,19H18V5H14M6,19H10V5H6V19Z");
} // namespace Mdi
#endif

