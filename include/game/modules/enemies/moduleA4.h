#ifndef MODULE_A4_H
#define MODULE_A4_H

#include "module.h"

// ID: 0x20A4
typedef struct {
    ModuleHeader header;
    u8 field_0x20[MODULE_SIZE - MODULE_HEADER_SIZE];
} moduleA4;

void moduleA4_entrypoint(moduleA4* self);    // 0x0F000000

#endif
