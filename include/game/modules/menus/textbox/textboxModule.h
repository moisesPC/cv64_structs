#ifndef TEXTBOX_MODULE_H
#define TEXTBOX_MODULE_H

#include "module.h"
#include "menus/textbox/textboxAdvanceArrow.h"
#include "textbox.h"
#include <gbi.h>

// ID: 0x0127
// Officially called "obj_mfds"
typedef struct {
    ModuleHeader header;
    s16 field_0x20;
    s16 field_0x22;
    u8 field_0x24[4];
    model_info* model;
    u8 field_0x2C[8];
    Gfx** mfds_double;                           // TODO: Figure this out better
    void* field_0x38;
    void* field_0x3C;
    textboxAdvanceArrow* advanceArrow;
    void* field_0x44;
    void* field_0x48;
    void* field_0x4C;
    u16* mfds_menu_string__mfds_item_form;       // TODO: Figure this out better
    mfds_number_work* number_work;
    mfds_color_animation_state* color_anim_state;
    window_work* window;
    mfds_dl_size* dl_size;
    mfds_ltex_buffer* ltext_buffer;
    mfds_tex_buffer* tex_buffer;
    mfds_work* work;
    mfds_state* state;
} textboxModule;

#endif
