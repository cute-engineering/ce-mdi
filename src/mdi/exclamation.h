#pragma once

#include "_prelude.h"

#define MDI_EXCLAMATION {24, 24, "exclamation", "M 11,4L 13,4L 13,15L 11,15L 11,4 Z M 13,18L 13,20L 11,20L 11,18L 13,18 Z"}

#ifdef __cplusplus
namespace Mdi
{
    constexpr Icon EXCLAMATION = Icon(24, 24, "exclamation", "M 11,4L 13,4L 13,15L 11,15L 11,4 Z M 13,18L 13,20L 11,20L 11,18L 13,18 Z");
} // namespace Mdi
#endif

