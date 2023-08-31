#ifndef ACTOR_H
#define ACTOR_H

#include "module.h"
#include "gfx/model_info.h"
#include "actor/actor_settings.h"
#include <ultra64.h>

// Generic actor struct
typedef struct {
    ModuleHeader header;
    u8 padding1[4];
    model_info* model;
    u8 field_0x28[MODULE_SIZE - 0x28];
    actor_settings* settings;
} Actor;

// Maybe put this in another header
typedef union {
    void* on_map_object_currently_stepping_triangle;       // struct_74*
    Actor* actor;
} map_object_actor_collision_union;

extern void actor_model_set_pos(void* actor, model_info* actor_model);

#endif
