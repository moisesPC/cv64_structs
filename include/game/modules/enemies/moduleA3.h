#ifndef MODULE_A3_H
#define MODULE_A3_H

#include "module.h"

// ID: 0x20A3
typedef struct {
    ModuleHeader header;
    u8 field_0x20[MODULE_SIZE - MODULE_HEADER_SIZE];
} moduleA3;

void moduleA3_entrypoint(moduleA3* self);    // 0x0F000000

#endif
