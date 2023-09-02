#ifndef MODULE_13F
#define MODULE_13F

#include "module.h"

// ID: 0x213F
typedef struct {
    ModuleHeader header;
    u8 field_0x20[MODULE_SIZE - MODULE_HEADER_SIZE];
} module13F;

void module13F_entrypoint(module13F* self);                     // 0x0F000000
void module13F_isDraculaCutsceneWatched(module13F* self);       // 0x0F000070
void module13F_isPlayerDroppingDown(module13F* self);           // 0x0F0000DC
void module13F_playSound(module13F* self);                      // 0x0F000130
void module13F_destroy(module13F* self);                        // 0x0F000174

// 0x0F0001A0
void (*module13F_functions[])(module13F* self) = 
{
    module13F_isDraculaCutsceneWatched,
    module13F_isPlayerDroppingDown,
    module13F_playSound,
    module13F_destroy
};

#endif
