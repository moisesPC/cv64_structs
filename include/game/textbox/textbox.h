#ifndef TEXTBOX_H
#define TEXTBOX_H

#include "math.h"
#include "camera.h"

enum textbox_flags {
    SLOW_TEXT_TRANSITION = (1 << 20),
    FAST_TEXT_TRANSITION = (1 << 21),
    CLOSE_TEXTBOX        = (1 << 26),
    OPEN_TEXTBOX         = (1 << 27),
    TEXTBOX_IS_ACTIVE    = (1 << 30)
};

// TODO: Fill this
typedef struct {
    u8 field_0x00[0x1A];
} mfds_number_work;

typedef struct {
    u16 color;
    u16 time;
} struct_12;

typedef struct {
    u8 field0_0x0;
    u8 field1_0x1;
    u8 transition_time;
    u8 field3_0x3;
    u8 field4_0x4;
    u8 field5_0x5;
    u8 field6_0x6;
    u8 field7_0x7;
    u8 field8_0x8;
    u8 transition_point;
    u8 field10_0xa;
    u8 field11_0xb;
    u8 field12_0xc;
    u8 field13_0xd;
    u8 field14_0xe;
    u8 field15_0xf;
    struct_12* field16_0x10;
    void* field17_0x14;
    u8 field18_0x18;
    u8 field19_0x19;
    u8 field20_0x1a;
    u8 field21_0x1b;
    u8 field22_0x1c;
    u8 field23_0x1d;
    u8 field24_0x1e;
    u8 field25_0x1f;
    u8 max_transition_time;
    u8 field27_0x21;
    u8 field28_0x22;
    u8 field29_0x23;
} mfds_color_animation_state;

typedef struct {
    u32 field0_0x0;
    camera* field1_0x4;
    vec3f field2_0x8;
    f32 width;
    f32 field4_0x18;
    u8 field5_0x1c;
    u8 field6_0x1d;
    u8 field7_0x1e;
    u8 field8_0x1f;
    u8 field9_0x20;
    u8 field10_0x21;
    u8 field11_0x22;
    u8 field12_0x23;
    f32 textbox_frame_closing_speed;
    u8 field14_0x28;
    u8 field15_0x29;
    u8 field16_0x2a;
    u8 field17_0x2b;
    u8 field18_0x2c;
    u8 field19_0x2d;
    u8 field20_0x2e;
    u8 field21_0x2f;
    u8 field22_0x30;
    u8 field23_0x31;
    u8 field24_0x32;
    u8 field25_0x33;
    u8 field26_0x34;
    u8 field27_0x35;
    u8 field28_0x36;
    u8 field29_0x37;
    u8 field30_0x38;
    u8 field31_0x39;
    u8 field32_0x3a;
    u8 field33_0x3b;
    u8 field34_0x3c;
    u8 field35_0x3d;
    u8 field36_0x3e;
    u8 field37_0x3f;
    u8 field38_0x40;
    u8 field39_0x41;
    u8 field40_0x42;
    u8 field41_0x43;
} window_work;

typedef struct {
    u32 field0_0x0;
    u32 field1_0x4;
    u32 field2_0x8;
} mfds_dl_size;

// TODO: Fill this
typedef struct {
    u8 field_0x00[0x208];
} mfds_ltex_buffer;

// TODO: Fill this
typedef struct {
    u8 field_0x00[0x2B2];
} mfds_tex_buffer;

typedef struct {
    u16* text;
    u8 field1_0x4;
    u8 field2_0x5;
    s16 field3_0x6;
    s16 field4_0x8;
    u8 field5_0xa;
    u8 color_palette;
    u8 field7_0xc;
    u8 field8_0xd;
    s16 field9_0xe;
    u8 field10_0x10;
    u8 field11_0x11;
    vec2s position;
    vec2s field13_0x16;
    u8 field14_0x1a;
    u8 field15_0x1b;
    u8 field16_0x1c;
    u8 field17_0x1d;
    u8 field18_0x1e;
    u8 field19_0x1f;
    u8 field20_0x20;
    u8 field21_0x21;
    u8 field22_0x22;
    u8 field23_0x23;
    u8 field24_0x24;
    u8 field25_0x25;
    u8 field26_0x26;
    u8 field27_0x27;
    u8 field28_0x28;
    u8 field29_0x29;
    u8 field30_0x2a;
    u8 field31_0x2b;
    u8 field32_0x2c;
    u8 field33_0x2d;
    u8 field34_0x2e;
    u8 field35_0x2f;
    mfds_color_animation_state* color_anim_state;
} mfds_work;

typedef struct {
    u32 flags;
    camera* display_camera;                 // The camera that displays the text
    u16* text;                              // Officially knwon as "str1"
    s32 field3_0xc;
    s32 field4_0x10;
    vec2s position;
    f32 position_Z;
    vec2f scale;
    s32 number;
    s32 field9_0x28;
    u16 width;
    u8 field11_0x2e;
    u8 option;
    u8 line;
    u8 field14_0x31;
    u8 character_spacing;
    u8 field16_0x33;
    u8 color_palette;
    u8 menu_text_ID;                        // ID in the (pause only?) menu text pool that starts at 0x8016ceb8
    u8 field19_0x36;
    u8 field20_0x37;
    u8 field21_0x38;
    u8 field22_0x39;
    u8 number_of_chars_to_be_displayed;
    u8 display_time;
    s8 field25_0x3c;
    u8 field26_0x3d;
    u8 field27_0x3e;
    u8 field28_0x3f;
    s32 field29_0x40;
    u8 field30_0x44;
    u8 field31_0x45;
    u8 field32_0x46;
    u8 field33_0x47;
    u8 field34_0x48;
    u8 field35_0x49;
    u8 field36_0x4a;
    u8 field37_0x4b;
    u8 field38_0x4c;
    u8 field39_0x4d;
    u8 field40_0x4e;
    u8 field41_0x4f;
    u8 field42_0x50;
    u8 field43_0x51;
    u8 field44_0x52;
    u8 field45_0x53;
    u32 appearence_flags;
    f32 frame_closing_speed;
    void* selection_lens;                       // lens*
} mfds_state;

extern textbox* textbox_create(void* parent_module, void* param_2, u32 flags);              // 0x8012cb88
extern void textbox_setDimensions(textbox* this, s8 height, s16 width, u8 param_4, u8 character_spacing);       // 0x8012cd14
extern void textbox_setPos(textbox* this, u16 text_X_pos, u16 text_Y_pos, s32 unused);      // 0x8012ccfc
extern void textbox_setMessagePtr(textbox* this, u16* text, s32 param_3, s16 param_4);      // 0x8012cd38
extern void textbox_8012cda4(textbox* this, u32 param_2, f32 closing_speed);                // 0x8012cda4
extern void* text_getMessageFromPool(u16* message_pool_base_ptr, s32 id);                   // 0x8012ce7c

#endif