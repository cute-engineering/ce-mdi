#pragma once

#include "_prelude.h"

#define MDI_STOP {24, 24, "stop", "M18,18H6V6H18V18Z"}

#ifdef __cplusplus
namespace Mdi
{
    constexpr Icon STOP = Icon(24, 24, "stop", "M18,18H6V6H18V18Z");
} // namespace Mdi
#endif

