#ifndef MEMORY_H
#define MEMORY_H

#include <ultra64.h>

extern void* malloc(s32 index, u32 size);
extern void allocatedBlock_resetFlags(void* ptr);

#endif
