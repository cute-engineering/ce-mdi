#pragma once

#include "_prelude.h"

#define MDI_CIRCLE {24, 24, "circle", "M12,2A10,10 0 0,0 2,12A10,10 0 0,0 12,22A10,10 0 0,0 22,12A10,10 0 0,0 12,2Z"}

#ifdef __cplusplus
namespace Mdi
{
    constexpr Icon CIRCLE = Icon(24, 24, "circle", "M12,2A10,10 0 0,0 2,12A10,10 0 0,0 12,22A10,10 0 0,0 22,12A10,10 0 0,0 12,2Z");
} // namespace Mdi
#endif

