#ifndef CARRIE_H
#define CARRIE_H

#include "module.h"
#include "gfx/model_info.h"
#include "player/player.h"

// ID 0x0074
typedef struct {
    ModuleHeader header;
    u8 padding1[4];
    model_info* model;
    playerData* data;
    struct_28* field_0x2C;
    u8 padding2[MODULE_SIZE - 0x30];
} Carrie;

#endif
