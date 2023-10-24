#ifndef TEXTBOX_ADVANCE_ARROW_H
#define TEXTBOX_ADVANCE_ARROW_H

#include "module.h"
#include "gfx/struct_47.h"

// ID: 0x2138
typedef struct {
    ModuleHeader header;
    u8 field1_0x20;
    u8 field2_0x21;
    u8 field3_0x22;
    u8 field4_0x23;
    model_info* model;
    struct_47* field6_0x28;         // struct_47*
    u8 field7_0x2c;
    u8 field8_0x2d;
    u8 field9_0x2e;
    u8 field10_0x2f;
    u8 field11_0x30;
    u8 field12_0x31;
    u8 field13_0x32;
    u8 field14_0x33;
    u8 field15_0x34;
    u8 field16_0x35;
    u8 field17_0x36;
    u8 field18_0x37;
    u32 fade_timer;
    u8 field20_0x3c;
    u8 field21_0x3d;
    u8 field22_0x3e;
    u8 field23_0x3f;
    u8 field24_0x40;
    u8 field25_0x41;
    u8 field26_0x42;
    u8 field27_0x43;
    u8 field28_0x44;
    u8 field29_0x45;
    u8 field30_0x46;
    u8 field31_0x47;
    u8 field32_0x48;
    u8 field33_0x49;
    u8 field34_0x4a;
    u8 field35_0x4b;
    u8 field36_0x4c;
    u8 field37_0x4d;
    u8 field38_0x4e;
    u8 field39_0x4f;
    u8 field40_0x50;
    u8 field41_0x51;
    u8 field42_0x52;
    u8 field43_0x53;
    u8 field44_0x54;
    u8 field45_0x55;
    u8 field46_0x56;
    u8 field47_0x57;
    u32 disable_arrow;
    u8 field49_0x5c;
    u8 field50_0x5d;
    u8 field51_0x5e;
    u8 field52_0x5f;
    u8 field53_0x60;
    u8 field54_0x61;
    u8 field55_0x62;
    u8 field56_0x63;
    u8 field57_0x64;
    u8 field58_0x65;
    u8 field59_0x66;
    u8 field60_0x67;
    u8 field61_0x68;
    u8 field62_0x69;
    u8 field63_0x6a;
    u8 field64_0x6b;
    u8 field65_0x6c;
    u8 field66_0x6d;
    u8 field67_0x6e;
    u8 field68_0x6f;
    u8 field69_0x70;
    u8 field70_0x71;
    u8 field71_0x72;
    u8 field72_0x73;
} textboxAdvanceArrow;

void textboxAdvanceArrow_entrypoint(textboxAdvanceArrow* self);     // 0x0F000000
void textboxAdvanceArrow_init(textboxAdvanceArrow* self);           // 0x0F000070
void textboxAdvanceArrow_loop(textboxAdvanceArrow* self);           // 0x0F000190
void textboxAdvanceArrow_destroy(textboxAdvanceArrow* self);        // 0x0F00037C

// 0x0F0003A0
void (*textboxAdvanceArrow_functions[])(textboxAdvanceArrow* self) = 
{
    textboxAdvanceArrow_init,
    textboxAdvanceArrow_destroy,
    textboxAdvanceArrow_destroy
};

extern const u32 TEXTBOX_ARROW_DLIST;

#endif
