#ifndef MODULE_B7_H
#define MODULE_B7_H

#include "module.h"

// ID: 0x20B7
typedef struct {
    ModuleHeader header;
    u8 field_0x20[MODULE_SIZE - MODULE_HEADER_SIZE];
} moduleB7;

void moduleB7_entrypoint(moduleB7* self);    // 0x0F000000

#endif
