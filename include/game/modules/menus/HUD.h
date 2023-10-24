#ifndef HUD_H
#define HUD_H

#include "module.h"
#include "gfx/model_info.h"
#include "HUD_params.h"

// ID: 0x0129
typedef struct {
    ModuleHeader header;
    s16 field_0x20;
    u8 field_0x22[2];
    model_info* clock_and_health;
    model_info* boss_bar;
    model_info* status_and_subweapon;
    model_info* GOLD_graphic;
    model_info* day_graphic_above_clock;
    model_info* clock_minute_marker;
    model_info* clock_hour_marker;
    model_info* health_bar_overlay;
    model_info* health_bar_fill;
    model_info* health_bar_fill_damage;
    model_info* boss_bar_fill;
    model_info* boss_bar_fill_damage;
    model_info* status_text;
    model_info* subweapon;
    model_info* subweapon_icon;
    f32 day_and_night_switching_alpha;
    f32 field_0x64;
    f32 field_0x68;
    u8 field_0x6C;      // Some timer related to the HUD pos. Changes to 10 when pausing the game.
    u8 boss_bar_is_filling_up;
    s16 health_depletion_rate_while_poisoned;
    HUD_parameters* params;
} HUD;

extern void HUD_updateClockMarkersAngle(HUD*);
extern void HUD_updateGameplayHUDPos(HUD* self, s32 isInit);
extern void HUD_updateClockDayNightGraphic(HUD* self, s32 isInit);
extern void HUD_updateClockDisplay(HUD* self);
extern void HUD_updateHealthBar(HUD* self);
extern void HUD_updateSubweaponGraphic(HUD* self);
extern void HUD_updateBossBar(HUD* self);

#endif
