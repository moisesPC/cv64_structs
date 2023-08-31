#ifndef MODEL_INFO_H
#define MODEL_INFO_H

#include "gfx/color.h"
#include "math.h"
#include <ultra64.h>

typedef struct {
    s16 type;
    u16 flags;
    struct model_info* prev;
    struct model_info* sibling;
    struct model_info* next;
    struct model_info* parent;
    color_union primitive_color;
    color_union environment_color;
    color_union blend_color;
    color_union fog_color;
    u16 texture;
    u16 palette;
    u8 field24_0x28;
    u8 field25_0x29;
    u8 field26_0x2a;
    u8 field27_0x2b;
    u8 field28_0x2c;
    u8 field29_0x2d;
    u8 field30_0x2e;
    u8 field31_0x2f;
    u32 material_dlist;
    u32 dlist;
    u32 field34_0x38;
    s32 assets_file_ID;
    vec3f position;
    angle model_angle;
    angle field41_0x52;
    vec3f size;
    void* field45_0x64;          // map_actor_model*
    mf matrix;
} model_info;

extern void modelInfo_setPosVec3s(model_info* self, vec3s* position);
extern model_info* modelInfo_createRootNode(u32, void*);

#endif
