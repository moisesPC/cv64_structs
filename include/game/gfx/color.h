#ifndef COLOR_H
#define COLOR_H

#include <ultra64.h>

typedef struct {
    u8 R;
    u8 G;
    u8 B;
    u8 A;
} Color8;

typedef union {
    u32 color_u32;
    Color8 color_u8;
} color_union;

// This is part of of D_80383AB8,
// but for some reason some code accesses this variable
// directly, without having to reference D_80383AB8 first
extern color_union background_color;

#endif
