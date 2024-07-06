#pragma once

#include "_prelude.h"

#define MDI_CROP_SQUARE {24, 24, "crop-square", "M18,18H6V6H18M18,4H6A2,2 0 0,0 4,6V18A2,2 0 0,0 6,20H18A2,2 0 0,0 20,18V6C20,4.89 19.1,4 18,4Z"}

#ifdef __cplusplus
namespace Mdi
{
    constexpr Icon CROP_SQUARE = Icon(24, 24, "crop-square", "M18,18H6V6H18M18,4H6A2,2 0 0,0 4,6V18A2,2 0 0,0 6,20H18A2,2 0 0,0 20,18V6C20,4.89 19.1,4 18,4Z");
} // namespace Mdi
#endif

