#ifndef MODULE_ID_H
#define MODULE_ID_H

#define MODULE_ID(FLAG, ID) ((FLAG << 8) | ID)

// The flags that are part of the "ID" field of ModuleHeader, NOT field 0x02
enum module_flags {
    NO_FLAG      = 0x00,
    STAGE_OBJECT = 0x10,        // Non-enemy map actors. Sometimes 0x18 is used as well.
    MAP_OVERLAY  = 0x20,
    DESTROY      = 0x80
};

enum module_raw_ID {
    ID_CUTSCENE_MGR = 0x002A,
    ID_CUTSCENE_CREDITS = 0x0068
};

enum module_ID {
    CUTSCENE__CUTSCENE_MGR = MODULE_ID(NO_FLAG, ID_CUTSCENE_MGR),
    CUTSCENE__CUTSCENE_CREDITS = MODULE_ID(MAP_OVERLAY, ID_CUTSCENE_CREDITS)
};

#endif
