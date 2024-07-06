#pragma once

#include "_prelude.h"

#define MDI_LED_OFF {24, 24, "led-off", "M12,6A4,4 0 0,0 8,10V16H6V18H9V23H11V18H13V23H15V18H18V16H16V10A4,4 0 0,0 12,6Z"}

#ifdef __cplusplus
namespace Mdi
{
    constexpr Icon LED_OFF = Icon(24, 24, "led-off", "M12,6A4,4 0 0,0 8,10V16H6V18H9V23H11V18H13V23H15V18H18V16H16V10A4,4 0 0,0 12,6Z");
} // namespace Mdi
#endif

