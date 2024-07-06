#pragma once

#include "_prelude.h"

#define MDI_STOP_CIRCLE {24, 24, "stop-circle", "M12,2A10,10 0 0,0 2,12A10,10 0 0,0 12,22A10,10 0 0,0 22,12A10,10 0 0,0 12,2M9,9H15V15H9"}

#ifdef __cplusplus
namespace Mdi
{
    constexpr Icon STOP_CIRCLE = Icon(24, 24, "stop-circle", "M12,2A10,10 0 0,0 2,12A10,10 0 0,0 12,22A10,10 0 0,0 22,12A10,10 0 0,0 12,2M9,9H15V15H9");
} // namespace Mdi
#endif

