#ifndef HUD_PARAMS_H
#define HUD_PARAMS_H

#include "textbox.h"
#include <ultra64.h>

enum HUD_flags {
    SHOW_BOSS_BAR             = 0x00000004,
    UPDATE_HUD_GOLD_AND_JEWEL = 0x00000008,
    CLOSE_CLOCK_UNUSED        = 0x00000020,
    DESTROY                   = 0x00000080
};

enum HUD_clockDayNight_enum {
    HUD_CLOCK_NIGHT = 0x01,
    HUD_CLOCK_DAY   = 0x10
};

typedef struct {
    u8 flags;
    u8 field1_0x1;
    s16 damage_received;
    f32 health_bar_damage_length;
    u8 field4_0x8;
    u8 field5_0x9;
    s16 life_lost_before_entering_loading_zone;
    f32 amount_of_life_lost;
    s16 hour_marker_angle;
    s16 minute_marker_angle;
    u8 clockDayNightGraphic_timeOfDay;
    s8 field11_0x15;
    u8 field12_0x16;
    u8 field13_0x17;
    s16* boss_current_life;
    s16 boss_bar_health_max;
    s16 boss_bar_health_left;
    s16 boss_bar_damage;
    u8 field18_0x22;
    u8 field19_0x23;
    f32 boss_bar_damage_length;
    mfds_state* money_amount_textbox;
    mfds_state* item_amount_textbox;
    u8 field23_0x30;
    u8 field24_0x31;
    u8 field25_0x32;
    u8 field26_0x33;
    u16* money_amount_text;
    u16* item_amount_text;
    u8 field29_0x3c;
    u8 field30_0x3d;
    u8 field31_0x3e;
    u8 field32_0x3f;
} HUD_parameters;

#endif
