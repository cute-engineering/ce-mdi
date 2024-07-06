#pragma once

#include "_prelude.h"

#define MDI_EJECT {24, 24, "eject", "M12,5L5.33,15H18.67M5,17H19V19H5V17Z"}

#ifdef __cplusplus
namespace Mdi
{
    constexpr Icon EJECT = Icon(24, 24, "eject", "M12,5L5.33,15H18.67M5,17H19V19H5V17Z");
} // namespace Mdi
#endif

