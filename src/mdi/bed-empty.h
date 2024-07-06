#pragma once

#include "_prelude.h"

#define MDI_BED_EMPTY {24, 24, "bed-empty", "M19,7H5V14H3V5H1V20H3V17H21V20H23V11A4,4 0 0,0 19,7"}

#ifdef __cplusplus
namespace Mdi
{
    constexpr Icon BED_EMPTY = Icon(24, 24, "bed-empty", "M19,7H5V14H3V5H1V20H3V17H21V20H23V11A4,4 0 0,0 19,7");
} // namespace Mdi
#endif

