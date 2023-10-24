#ifndef MODULE_A5_H
#define MODULE_A5_H

#include "module.h"

// ID: 0x20A5
typedef struct {
    ModuleHeader header;
    u8 field_0x20[MODULE_SIZE - MODULE_HEADER_SIZE];
} moduleA5;

void moduleA5_entrypoint(moduleA5* self);    // 0x0F000000

#endif
