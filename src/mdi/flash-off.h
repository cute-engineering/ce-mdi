#pragma once

#include "_prelude.h"

#define MDI_FLASH_OFF {24, 24, "flash-off", "M17,10H13L17,2H7V4.18L15.46,12.64M3.27,3L2,4.27L7,9.27V13H10V22L13.58,15.86L17.73,20L19,18.73L3.27,3Z"}

#ifdef __cplusplus
namespace Mdi
{
    constexpr Icon FLASH_OFF = Icon(24, 24, "flash-off", "M17,10H13L17,2H7V4.18L15.46,12.64M3.27,3L2,4.27L7,9.27V13H10V22L13.58,15.86L17.73,20L19,18.73L3.27,3Z");
} // namespace Mdi
#endif

