#ifndef SOUND_H
#define SOUND_H

#include "math.h"
#include <ultra64.h>

extern u8 play_sound(u16 sound_ID);
extern u8 play_sound_in_position(s16, vec3f*);

#endif
