#pragma once

#include "_prelude.h"

#define MDI_PLAY_PAUSE {24, 24, "play-pause", "M3,5V19L11,12M13,19H16V5H13M18,5V19H21V5"}

#ifdef __cplusplus
namespace Mdi
{
    constexpr Icon PLAY_PAUSE = Icon(24, 24, "play-pause", "M3,5V19L11,12M13,19H16V5H13M18,5V19H21V5");
} // namespace Mdi
#endif

