#ifndef PLAYER_COLLISION_INFO_H
#define PLAYER_COLLISION_INFO_H

#include "collision/collision_triangle.h"
#include "actor/actor.h"
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
    u32 field_0x00;
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
} playerCollisionInfoFloor;

typedef union {
    collision_triangle* field_0x00;
    Actor* field_0x04;
} union_player_wall_related;

typedef struct {
    u32 field_0x00;
    collision_triangle* touching_wall_triangle;
    union_player_wall_related field_0x08;
    f32 player_wall_closeness;                      // How close the player is to the nearest wall
    f32 field_0x10;
    f32 field_0x14;
    collision_triangle* field_0x18;
    f32 field_0x1C;
    f32 field_0x20;
    f32 field_0x24;                                 // Related to falling off from an edge near a wall and a corner?
    f32 field_0x28;                                 // Related to falling off from an edge near a wall and a corner?
} playerCollisionInfoWall;

typedef struct {
    u32 field_0x00;
    collision_triangle* field_0x04;
    Actor* field_0x08;                              // Maybe "map_object_actor_collision_union"?
    f32 field_0x0C;
    u32 field_0x10;
    u32 field_0x14;
    f32 field_0x18;
} playerCollisionInfoCeiling;

extern playerCollisionInfoFloor   playerCollFloor;
extern playerCollisionInfoWall    playerCollWall;
extern playerCollisionInfoCeiling playerCollCeiling;

#endif
