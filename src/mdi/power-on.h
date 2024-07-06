#pragma once

#include "_prelude.h"

#define MDI_POWER_ON {24, 24, "power-on", "M11,3H13V21H11V3Z"}

#ifdef __cplusplus
namespace Mdi
{
    constexpr Icon POWER_ON = Icon(24, 24, "power-on", "M11,3H13V21H11V3Z");
} // namespace Mdi
#endif

