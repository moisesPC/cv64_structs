#ifndef COLLISION_TRIANGLE_H
#define COLLISION_TRIANGLE_H

#include "math.h"
#include <ultra64.h>

typedef struct {
    u8 type;
    u8 variable;        // For example, footstep_sfx. If 0x80, fall death. If 0xA2, lava death
    vec3s vertices_position[3];
} collision_triangle;

#endif
