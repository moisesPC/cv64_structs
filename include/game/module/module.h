#ifndef MODULE_H
#define MODULE_H

#include <ultra64.h>

#define MODULE_SIZE 0x74

typedef struct {
    u8 timer;                      // Could also be "number of accesses to function"
    u8 function;                   // ID within the functions array
} functionInfo;                    // Size = 0x2

typedef struct {
    s16 ID;
    s16 flags;
    s16 field_0x04;
    s16 field_0x06;
    functionInfo current_function[3];
    s16 functionInfo_ID;
    void (*destroy)(void*);                // Officially called "OBJ_destruct"
    struct ModuleHeader* parent;
    struct ModuleHeader* next;
    struct ModuleHeader* child;
} ModuleHeader;                            // Size = 0x20

extern void goToNextFunc(u16 current_functionInfo[], s16* functionInfo_ID);
extern void goToFunc(u16 current_functionInfo[], s16* functionInfo_ID, s32 function);

// Mostly used inside entrypoint functions
// Comma in the 3rd line needed for matching
#define TRANSITION(self, functions_array)                                                  \
    s16 funcID;                                                                            \
    funcID = self->header.functionInfo_ID + 1;                                             \
    self->header.functionInfo_ID = funcID,                                                 \
    self->header.current_function[funcID].timer++;                                         \
    konamiLogo_functions[self->header.current_function[funcID].function](self);            \
    self->header.functionInfo_ID--;

#endif
