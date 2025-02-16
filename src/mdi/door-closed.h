#pragma once

#include "_prelude.h"

#define MDI_DOOR_CLOSED {24, 24, "door-closed", "M16,11H18V13H16V11M12,3H19C20.11,3 21,3.89 21,5V19H22V21H2V19H10V5C10,3.89 10.89,3 12,3M12,5V19H19V5H12Z"}

#ifdef __cplusplus
namespace Mdi
{
    constexpr Icon DOOR_CLOSED = Icon(24, 24, "door-closed", "M16,11H18V13H16V11M12,3H19C20.11,3 21,3.89 21,5V19H22V21H2V19H10V5C10,3.89 10.89,3 12,3M12,5V19H19V5H12Z");
} // namespace Mdi
#endif

