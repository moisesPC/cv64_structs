/* model_info.h */
modelInfo_setPosVec3s = 0x80009330;
modelInfo_createRootNode = 0x80004e68;
modelInfo_createNextNode = 0x80004ef4;
modelInfo_showModelAndItsChildren = 0x8000496c;
modelInfo_hideModelAndItsChildren = 0x80004838;

/* struct_47.h */
func_80004C40 = 0x80004C40;
func_80004CE8 = 0x80004CE8;

/* controller.h */
controllers = 0x80387d7c;
controller_player = 0x800d79b0;
controller_player_previous_frame = 0x800d79be;
controller_readData = 0x80016B6C;

/* module.h */
module_create = 0x800018ac;
module_createAndSetChild = 0x80001980;
goToNextFunc = 0x80001448;
goToFunc = 0x80001590;
module_allocEntryInList = 0x8000219C;
moduleList_findFirstModuleByID = 0x80001ad0;
func_8000E860 = 0x8000E860;

/* memory.h */
heaps = 0x80271000;
HEAP_MULTIPURPOSE_START = 0x80271060;
HEAP_MENU_DATA_START = 0x801CC000;
heap_init = 0x80000c28;
heap_free = 0x80000c78;
heap_writebackDCache = 0x80000c94;
initHeaps = 0x80000cf4;
heap_alloc = 0x80000d80;
heap_allocWithAlignment = 0x80000e58;
heapBlock_updateBlockMaxSize = 0x80000fb4;
heapBlock_free = 0x80001078;

/* unknown_struct.h */
D_80363AB8 = 0x80363AB8;
D_80383AB8 = 0x80383AB8;

/* endingMessageEasy.h */
endingMessage_fileBuffer = 0x803880A4;

/* textbox.h */
textbox_create = 0x8012cb88;
textbox_setDimensions = 0x8012cd14;
textbox_setPos = 0x8012ccfc;
textbox_setMessagePtr = 0x8012cd38;
textbox_8012cda4 = 0x8012CDA4;
textbox_printNumber = 0x8012ce3c;
text_getMessageFromPool = 0x8012ce7c;
textbox_setScaleAndSomethingElse = 0x8012cdc8;
text_convertIntNumberToText = 0x8012d6f4;
text_color_anim_data_table = 0x8016d0a0;
text_findCharInString = 0x80132404;
convertUTF16ToCustomTextFormat = 0x8001b3c0;

/* textboxAdvanceArrow.h */
TEXTBOX_ARROW_DLIST = 0x06001120;

/* camera.h */
common_cameras_array = 0x8009b430;

/* atari_work.h */
atari_work_table_init = 0x80040570;
atariBaseWork_create = 0x800405c4;
atariDataWork_create = 0x800406c8;
atariOnlyWork_create = 0x800407c8;
atariBaseWork_attachCollider = 0x800408e8;

/* sound.h */
play_sound = 0x80013EAC;
play_sound_in_position = 0x80013a48;

/* DMAMgr.h */
ptr_DMAMgr = 0x800a78c0;
DMAMgr_loadNisitenmaIchigoFile = 0x8000f83c;

/* actor.h */
actor_model_set_pos = 0x801681c0;
actor_model_set_pos_and_angle = 0x8016823c;
actor_checkSpawn = 0x801588ec;

/* player.h */
ptr_playerData = 0x800d7af8;
checkIfOutsideEntityIsInsideMainEntityRadius = 0x8015870c;
Player_calcPhysics = 0x80023d88;

/* gamestate.h */
createGameState = 0x80000460;
changeGameState = 0x80000510;
gameState_init  = 0x800005dc;

/* konamiLogo.h */
KONAMI_LOGO_DL = 0x0600C650;
KCEK_LOGO_DL   = 0x06015CA0;

/* HUD.h */
HUD_updateClockMarkersAngle = 0x80138c54;
HUD_updateGameplayHUDPos = 0x80138fac;
HUD_updateClockDayNightGraphic = 0x80138d20;
HUD_updateClockDisplay = 0x80138b68;
HUD_updateHealthBar = 0x80138224;
HUD_updateSubweaponGraphic = 0x801386ac;
HUD_updateBossBar = 0x801386e0;

/* fade.h */
fade_setAllFlags = 0x8000e590;
fade_setFlag = 0x8000e5a8;
fade_removeFlag = 0x8000e5cc;
fade_setColor = 0x8000e5f4;
fade_setSettings = 0x8000e618;
fade_isFading = 0x8000e67c;
fade_calc = 0x8000e6c4;

/* playerCollisionInfo.h */
playerCollFloor = 0x800d7b58;
playerCollWall = 0x800d7ba0;
playerCollCeiling = 0x800d7bd0;