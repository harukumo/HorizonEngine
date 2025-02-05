#pragma once

#define NUM_QUEUE_FAMILIES 3

#define REMAINING_ARRAY_LAYERS (~0u)
#define REMAINING_MIP_LEVELS (~0u)

#define RENDER_BACKEND_DEVICES_MASK_ALL (0xffffffff)
#define RENDER_BACKEND_VERSION HE_MAKE_VERSION(1, 0, 0)

#include "RenderGraph/RenderGraphDefinitions.h"