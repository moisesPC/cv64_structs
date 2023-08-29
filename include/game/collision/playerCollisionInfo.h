#ifndef PLAYER_COLLISION_INFO_H
#define PLAYER_COLLISION_INFO_H

#include "collision_triangle.h"
#include "actor.h"
#include "math.h"
#include <ultra64.h>

typedef struct {
    u32 field_0x00;
    u32 field_0x04;
    Actor* field_0x08;
    f32 field_0x0C;
    collision_triangle* field_0x10;
    Actor* field_0x14;
    f32 player_height_with_respect_to_the_closest_floor;
} struct_8;

typedef struct {
    s32 field_0x00;
    // The current triangle from the collision model the Player is stepping
    collision_triangle* map_currently_stepping_collision_triangle;
    map_object_actor_collision_union map_object_actor;
    map_object_actor_collision_union field_0x0C;
    f32 negative_player_Y_pos;
    vec3f steepness_of_floor_under_player;
    u8 field_0x20;
    u8 field_0x21;
    u8 field_0x22;
    u8 field_0x23;
    // How close the player is to certain damage sources, like the Forest of Silence river
    f32 damage_source_closeness;
    struct_8 field_0x28;
} playerCollisionInfo;

#endif
