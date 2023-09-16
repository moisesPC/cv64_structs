#ifndef DECOMPME_CONTEXT_H
#define DECOMPME_CONTEXT_H

/**************************************************************************
 					        N64 SDK + gbi.h stuff
 **************************************************************************/

#define SR_CE 0x00020000
#define SR_CH 0x00040000
#define ICON_badge_FireShield_disabled_palette 0x173E0
#define ICON_key_snowman_scarf_palette 0xE960
#define ICON_key_map_palette 0x2400
#define gsSPSetGeometryMode(word) gsSPGeometryMode(0,(word))
#define SR_DE 0x00010000
#define VI_H_VIDEO_REG VI_H_START_REG
#define ICON_unused_02D_disabled_palette 0x8940
#define SR_FR 0x04000000
#define ICON_badge_SpikeShield_palette 0x15B00
#define _OS_THREAD_H_ 
#define ERR_OSPROFILEINIT_SIZ 65
#define ICON_food_ShroomSteak_disabled_raster 0x3620
#define gDPLoadTextureBlock(pkt,timg,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, siz ##_LOAD_BLOCK, 1, timg); gDPSetTile(pkt, fmt, siz ##_LOAD_BLOCK, 0, 0, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT) -1, CALC_DXT(width, siz ##_BYTES)); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, siz, (((width) * siz ##_LINE_BYTES)+7)>>3, 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define SR_IE 0x00000001
#define _OS_SYSTEM_H_ 
#define SR_KX 0x00000080
#define ICON_food_SuperSoda_disabled_raster 0x24540
#define MAX_SCRIPTS 128
#define ICON_key_key_peach_palette 0xFEE0
#define EXC_FPE EXC_CODE(15)
#define ICON_badge_PrettyLucky_disabled_raster 0x18600
#define gsDPFullSync() gsDPNoParam(G_RDPFULLSYNC)
#define ERR_OSPROFILEINIT_STR 61
#define M_VIDTASK 3
#define SR_RE 0x02000000
#define SR_RP 0x08000000
#define ERR_OSTHPROFILEREADCOUNTTH_FLAG 141
#define SR_SR 0x00100000
#define SR_SX 0x00000040
#define VOICE_STATUS_START 1
#define SR_TS 0x00200000
#define ICON_battle_13F_disabled_raster 0x14B80
#define OS_TV_MPAL 2
#define SR_UX 0x00000020
#define CONT_ADDR_CRC_ER 0x04
#define G_RM_RA_ZB_OPA_DECAL2 RM_RA_ZB_OPA_DECAL(2)
#define gsDPSetOtherMode(mode0,mode1) {{ _SHIFTL(G_RDPSETOTHERMODE,24,8)|_SHIFTL(mode0,0,24), (unsigned int)(mode1) }}
#define CONFIG_SB_SHFT 22
#define ICON_key_koot_photo_raster 0x12580
#define ICON_food_BoiledEgg_disabled_palette 0x8040
#define IO_WRITE(addr,data) (*(vu32 *)PHYS_TO_K1(addr)=(u32)(data))
#define G_TL_TILE (0 << G_MDSFT_TEXTLOD)
#define ICON_anim_sp_5_raster 0x31460
#define ERR_OSTHPROFILEREADTIME_LAR 144
#define G_RM_RA_ZB_OPA_INTER2 RM_RA_ZB_OPA_INTER(2)
#define MQ_IS_FULL(mq) (MQ_GET_COUNT(mq) >= (mq)->msgCount)
#define G_RM_CLD_SURF2 RM_CLD_SURF(2)
#define A_SETBUFF 8
#define ERR_ALSNDP_NO_VOICE 105
#define DPC_CLR_FLUSH 0x0010
#define __RSEQ_N() 63,62,61,60, 59,58,57,56,55,54,53,52,51,50, 49,48,47,46,45,44,43,42,41,40, 39,38,37,36,35,34,33,32,31,30, 29,28,27,26,25,24,23,22,21,20, 19,18,17,16,15,14,13,12,11,10, 9,8,7,6,5,4,3,2,1,0
#define ICON_food_PotatoSalad_palette 0x7960
#define gsDPSetTextureFilter(type) gsSPSetOtherMode(G_SETOTHERMODE_H, G_MDSFT_TEXTFILT, 2, type)
#define ICON_unused_030_disabled_palette 0x9000
#define ICON_anim_heart_0_raster 0x30A60
#define GU_PARSE_GBI_TYPE 1
#define gDPSetTextureFilter(pkt,type) gSPSetOtherMode(pkt, G_SETOTHERMODE_H, G_MDSFT_TEXTFILT, 2, type)
#define G_MVO_L0 (2*24)
#define G_MVO_L1 (3*24)
#define G_MVO_L2 (4*24)
#define G_MVO_L3 (5*24)
#define G_MVO_L4 (6*24)
#define G_MVO_L5 (7*24)
#define G_MVO_L6 (8*24)
#define G_MVO_L7 (9*24)
#define NPC_GROUP1(npcs) { sizeof(npcs) / sizeof(StaticNpc), (StaticNpc*) &npcs, 0, 0 }
#define NPC_GROUP2(npcs,battle) { sizeof(npcs) / sizeof(StaticNpc), (StaticNpc*) &npcs, battle, 0 }
#define NPC_GROUP3(npcs,battle,stage) { sizeof(npcs) / sizeof(StaticNpc), (StaticNpc*) &npcs, battle, stage + 1 }
#define RM_ZB_OPA_SURF(clk) Z_CMP | Z_UPD | CVG_DST_FULL | ALPHA_CVG_SEL | ZMODE_OPA | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define ICON_key_mailbag_raster 0xF660
#define AI_MIN_DAC_RATE 132
#define gDPSetTexturePersp(pkt,type) gSPSetOtherMode(pkt, G_SETOTHERMODE_H, G_MDSFT_TEXTPERSP, 1, type)
#define hs_ClearFlags(arg0) HUD_ELEMENT_OP_ClearFlags, arg0,
#define OS_PM_1M 0x01fe000
#define ERR_ALSNDPSETPAR 112
#define C_CDX 0xc
#define OS_TASK_LOADABLE 0x0004
#define gdSPDefLights0(ar,ag,ab) { {{ {ar,ag,ab},0,{ar,ag,ab},0}}, {{{ { 0, 0, 0},0,{ 0, 0, 0},0,{ 0, 0, 0},0}}} }
#define EVT_PLAY_EFFECT1(effect) EVT_CALL(PlayEffect, effect, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define EVT_PLAY_EFFECT2(effect,subtype) EVT_CALL(PlayEffect, effect, subtype, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define EVT_PLAY_EFFECT4(effect,subtype,a,b) EVT_CALL(PlayEffect, effect, subtype, a, b, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define EVT_PLAY_EFFECT5(effect,subtype,a,b,c) EVT_CALL(PlayEffect, effect, subtype, a, b, c, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define EVT_PLAY_EFFECT6(effect,subtype,a,b,c,d) EVT_CALL(PlayEffect, effect, subtype, a, b, c, d, 0, 0, 0, 0, 0, 0, 0, 0)
#define EVT_PLAY_EFFECT7(effect,subtype,a,b,c,d,e) EVT_CALL(PlayEffect, effect, subtype, a, b, c, d, e, 0, 0, 0, 0, 0, 0, 0)
#define EVT_PLAY_EFFECT8(effect,subtype,a,b,c,d,e,f) EVT_CALL(PlayEffect, effect, subtype, a, b, c, d, e, f, 0, 0, 0, 0, 0, 0)
#define OS_PM_4K 0x0000000
#define OS_PM_4M 0x07fe000
#define TWEETSER_PATH_LOOP 0x80000001
#define ITEM_NUM_KEYS (ITEM_LAST_KEY - ITEM_FIRST_KEY + 1)
#define SP_Z 0x00000008
#define ICON_food_HealthyJuice_palette 0x3EE0
#define ERR_OSAISETNEXTBUFFER_SIZE 16
#define ICON_battle_FireFlower_disabled_raster 0x2A3C0
#define L_JPAD CONT_LEFT
#define alCSPSetPan alCSPSetChlPan
#define ICON_anim_hand_2_palette 0x2CB60
#define NO_OVERRIDE_MOVEMENT_SPEED OVERRIDE_MOVEMENT_SPEED(-1.0f)
#define gSPDmaWrite(pkt,dmem,dram,size) gSPDma_io((pkt),1,(dmem),(dram),(size))
#define gsDPLoadMultiBlock_4b(timg,tmem,rtile,fmt,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, G_IM_SIZ_16b, 1, timg), gsDPSetTile(fmt, G_IM_SIZ_16b, 0, tmem, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadBlock(G_TX_LOADTILE, 0, 0, (((width)*(height)+3)>>2)-1, CALC_DXT_4b(width)), gsDPPipeSync(), gsDPSetTile(fmt, G_IM_SIZ_4b, ((((width)>>1)+7)>>3), tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(rtile, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC)
#define EVT_DIVF(VAR,FLOAT_VALUE) EVT_CMD(EVT_OP_DIVF, VAR, FLOAT_VALUE),
#define ICON_unused_08D_disabled_raster 0x13500
#define ICON_unused_0F2_disabled_palette 0x22C60
#define ICON_badge_PowerQuake_raster 0x16440
#define OS_APP_NMI_BUFSIZE 64
#define gDPSetTextureDetail(pkt,type) gSPSetOtherMode(pkt, G_SETOTHERMODE_H, G_MDSFT_TEXTDETAIL, 2, type)
#define ICON_battle_ShootingStar_disabled_palette 0x2AEE0
#define SI_STATUS_RD_BUSY 0x0002
#define SI_STATUS_DMA_ERROR 0x0008
#define TLBCTXT_BASESHIFT 23
#define SR_CU0 0x10000000
#define SR_CU1 0x20000000
#define SR_CU2 0x40000000
#define SR_CU3 0x80000000
#define EVT_SET_CONST(VAR,CONST) EVT_CMD(EVT_OP_SET_CONST, VAR, (Bytecode) CONST),
#define G_CC_MODULATEIDECALA TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0
#define gsDPLoadTLUT_pal16(pal,dram) gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, dram), gsDPTileSync(), gsDPSetTile(0, 0, 0, (256+(((pal)&0xf)*16)), G_TX_LOADTILE, 0 , 0, 0, 0, 0, 0, 0), gsDPLoadSync(), gsDPLoadTLUTCmd(G_TX_LOADTILE, 15), gsDPPipeSync()
#define ERR_ALSYN_NO_UPDATE 106
#define G_RM_RA_ZB_OPA_INTER RM_RA_ZB_OPA_INTER(1)
#define PIF_RAM_START 0x1FC007C0
#define ITEM_NUM_CONSUMABLES (ITEM_LAST_CONSUMABLE - ITEM_FIRST_CONSUMABLE + 1)
#define _COMMON_H_ 
#define OS_VI_BIT_PAL 0x0800
#define ICON_unused_08E_disabled_raster 0x13740
#define FPCSR_CE 0x00020000
#define FPCSR_CI 0x00001000
#define FPCSR_CO 0x00004000
#define FPCSR_CU 0x00002000
#define FPCSR_CV 0x00010000
#define alHeapAlloc(hp,elem,size) alHeapDBAlloc(0, 0,(hp),(elem),(size))
#define FPCSR_CZ 0x00008000
#define ICON_food_HoneyUltra_palette 0x2AA0
#define RM_AA_DEC_LINE(clk) AA_EN | IM_RD | CVG_DST_FULL | CVG_X_ALPHA | ALPHA_CVG_SEL | FORCE_BL | ZMODE_OPA | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define FPCSR_EI 0x00000080
#define FPCSR_EO 0x00000200
#define FPCSR_EU 0x00000100
#define FPCSR_EV 0x00000800
#define FPCSR_EZ 0x00000400
#define G_BL_CLR_IN 0
#define G_RDP_TRI_FILL_MASK 0x08
#define OS_EVENT_SP_BREAK 11
#define FPCSR_FI 0x00000004
#define __gsSPLine3D_w1f(v0,v1,wd,flag) (((flag) == 0) ? __gsSPLine3D_w1(v0, v1, wd): __gsSPLine3D_w1(v1, v0, wd))
#define FPCSR_FO 0x00000010
#define FPCSR_FS 0x01000000
#define FPCSR_FU 0x00000008
#define FPCSR_FV 0x00000040
#define FPCSR_FZ 0x00000020
#define ICON_food_HoneyCandy_disabled_palette 0x6300
#define ICON_badge_AttackFXF_disabled_raster 0x22140
#define STANDARD_FLOWER_DROPS(attempts) { { F16(20), F16(50), attempts, F16(40) }, { F16(30), F16(40), attempts, F16(40) }, { F16(50), F16(40), attempts, F16(40) }, { F16(80), F16(40), attempts, F16(40) }, { F16(100), F16(30), attempts, F16(40) }, }
#define EVT_CHILD_THREAD EVT_CMD(EVT_OP_CHILD_THREAD),
#define RAMROM_PRINTF_ADDR (RAMROM_MSG_ADDR + (4*RAMROM_BUF_SIZE))
#define gsSPBranchLessZraw(dl,vtx,zval) {{ _SHIFTL(G_RDPHALF_1,24,8), (unsigned int)(dl), }}, {{ _SHIFTL(G_BRANCH_Z,24,8)|_SHIFTL((vtx)*5,12,12)|_SHIFTL((vtx)*2,0,12), (unsigned int)(zval), }}
#define OS_VI_BIT_32PIXEL 0x0080
#define FLAGS_MINUS 4
#define EVT_LOCAL_FLAG_OFFSET 70000000
#define gDPLoadMultiTile(pkt,timg,tmem,rtile,fmt,siz,width,height,uls,ult,lrs,lrt,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, siz, width, timg); gDPSetTile(pkt, fmt, siz, (((((lrs)-(uls)+1) * siz ##_TILE_BYTES)+7)>>3), tmem, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadTile( pkt, G_TX_LOADTILE, (uls)<<G_TEXTURE_IMAGE_FRAC, (ult)<<G_TEXTURE_IMAGE_FRAC, (lrs)<<G_TEXTURE_IMAGE_FRAC, (lrt)<<G_TEXTURE_IMAGE_FRAC); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, siz, (((((lrs)-(uls)+1) * siz ##_LINE_BYTES)+7)>>3), tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, rtile, (uls)<<G_TEXTURE_IMAGE_FRAC, (ult)<<G_TEXTURE_IMAGE_FRAC, (lrs)<<G_TEXTURE_IMAGE_FRAC, (lrt)<<G_TEXTURE_IMAGE_FRAC) }
#define G_RM_AA_XLU_SURF RM_AA_XLU_SURF(1)
#define ENTITY_H 
#define ICON_key_Postcard_raster 0x13080
#define ICON_badge_MegaQuake_raster 0x16680
#define gSPFogPosition(pkt,min,max) gMoveWd(pkt, G_MW_FOG, G_MWO_FOG, (_SHIFTL((128000/((max)-(min))),16,16) | _SHIFTL(((500-(min))*256/((max)-(min))),0,16)))
#define gsSP2Triangles(v00,v01,v02,flag0,v10,v11,v12,flag1) {{ (_SHIFTL(G_TRI2, 24, 8)| __gsSP1Triangle_w1f(v00, v01, v02, flag0)), __gsSP1Triangle_w1f(v10, v11, v12, flag1) }}
#define OS_GBPAK_GBCART_ON 0x80
#define SCLEANEXCL 0x00001000
#define NUMLIGHTS_0 1
#define NUMLIGHTS_1 1
#define NUMLIGHTS_2 2
#define NUMLIGHTS_3 3
#define NUMLIGHTS_5 5
#define NUMLIGHTS_6 6
#define NUMLIGHTS_7 7
#define G_CC_BLENDRGBA TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, SHADE
#define gsDPLoadTextureBlock(timg,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, siz ##_LOAD_BLOCK, 1, timg), gsDPSetTile(fmt, siz ##_LOAD_BLOCK, 0, 0, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadBlock(G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT)-1, CALC_DXT(width, siz ##_BYTES)), gsDPPipeSync(), gsDPSetTile(fmt, siz, ((((width) * siz ##_LINE_BYTES)+7)>>3), 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC)
#define ERR_OSVISWAPBUFFER_VIMGR 48
#define gsSPGeometryMode(c,s) {{ (_SHIFTL(G_GEOMETRYMODE,24,8)|_SHIFTL(~(u32)(c),0,24)),(u32)(s) }}
#define PFS_MAX_BANKS 62
#define ICON_food_EggMissile_raster 0x5A20
#define RM_AA_ZB_PCL_SURF(clk) AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | G_AC_DITHER | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define G_BZ_ORTHO 1
#define ICON_unused_0D5_disabled_raster 0x1E900
#define UNK_RET void
#define G_IM_SIZ_16b_TILE_BYTES G_IM_SIZ_16b_BYTES
#define CONT_ERR_DEVICE PFS_ERR_DEVICE
#define G_CV_K0 175
#define G_CV_K1 -43
#define G_CV_K2 -89
#define G_CV_K3 222
#define G_CV_K4 114
#define G_CV_K5 42
#define EVT_WAIT_SECS(NUM_SECONDS) EVT_CMD(EVT_OP_WAIT_SECS, NUM_SECONDS),
#define G_CC_CHROMA_KEY2 TEXEL0, CENTER, SCALE, 0, 0, 0, 0, 0
#define _G_CC_BLENDPEDECALA ENVIRONMENT, PRIMITIVE, TEXEL0, PRIMITIVE, 0, 0, 0, TEXEL0
#define G_SETFILLCOLOR 0xf7
#define ICON_anim_coin_7_raster 0x2FE80
#define MI_INTR_MASK_CLR_DP 0x0400
#define ICON_badge_DizzyStomp_disabled_raster 0x17F40
#define G_CC_DECALRGB 0, 0, 0, TEXEL0, 0, 0, 0, SHADE
#define ERR_OSSPTASKLOAD_OUTSIZE 59
#define ICON_peach_BakingSugar_disabled_raster 0x27B40
#define OS_VI_BIT_POINTSAMPLE 0x0020
#define ITEM_VIS_GROUP(itemID,visGroupID) ((visGroupID) << 16 | (itemID))
#define ICON_battle_SleepySheep_palette 0x293C0
#define ICON_badge_DefendPlus_raster 0x19C80
#define ICON_key_book_melody_raster 0xF220
#define hs_RandomDelay(arg0,arg1) HUD_ELEMENT_OP_RandomDelay, arg0, arg1,
#define ICON_battle_DustyHammer_disabled_palette 0x2B120
#define AI_VAR_HITNPC_2 varTable[2]
#define ICON_unused_0F7_disabled_palette 0x237A0
#define ICON_unused_08D_disabled_palette 0x13720
#define ICON_key_calculator_palette 0xDEC0
#define SR_IMASK 0x0000ff00
#define AI_MPAL_MAX_FREQ 368000
#define ICON_badge_DodgeMaster_palette 0x15680
#define G_SETPRIMDEPTH 0xee
#define ICON_key_mystic_key_raster 0xB660
#define gDPSetCycleType(pkt,type) gSPSetOtherMode(pkt, G_SETOTHERMODE_H, G_MDSFT_CYCLETYPE, 2, type)
#define es_ClearFlags(flags) ENTITY_SCRIPT_OP_ClearFlags, flags,
#define AI_PATROL_GOAL_INDEX functionTemp[2]
#define PFS_ERR_NOPACK 1
#define MI_INTR_MASK_CLR_PI 0x0100
#define MAX_TEX_PANNERS 16
#define PFS_ID_2AREA 4
#define _UCODE_H_ 
#define ICON_key_ultra_stone_palette 0xDA60
#define OS_VI_NTSC_LPF1 1
#define OS_VI_NTSC_LPF2 5
#define ICON_key_jade_raven_palette 0xE520
#define MI_INTR_MASK_CLR_SI 0x0004
#define MI_INTR_MASK_CLR_SP 0x0001
#define aMix(pkt,f,g,i,o) { Acmd *_a = (Acmd *)pkt; _a->words.w0 = (_SHIFTL(A_MIXER, 24, 8) | _SHIFTL(f, 16, 8) | _SHIFTL(g, 0, 16)); _a->words.w1 = _SHIFTL(i,16, 16) | _SHIFTL(o, 0, 16); }
#define NO_VOICE_ERR_MASK 0x04
#define G_MWO_bLIGHT_1 0x04
#define G_MWO_bLIGHT_2 0x1c
#define G_MWO_bLIGHT_3 0x34
#define G_MWO_bLIGHT_4 0x4c
#define G_MWO_bLIGHT_5 0x64
#define G_MWO_bLIGHT_6 0x7c
#define G_MWO_bLIGHT_7 0x94
#define G_MWO_bLIGHT_8 0xac
#define ICON_food_UltraShroom_palette 0x23E40
#define MI_INTR_MASK_CLR_VI 0x0040
#define PACK_FILL_DEPTH(z,dz) (GPACK_ZDZ(z, dz) << 0x10) | GPACK_ZDZ(z, dz)
#define IMG_PTR u8*
#define _OS_H_ 
#define EXC_BREAK EXC_CODE(9)
#define ICON_unused_0D7_disabled_raster 0x1ED80
#define ICON_food_HoneyUltra_disabled_palette 0x2AC0
#define G_RDP_TRI_ZBUFF_MASK 0x01
#define PI_STATUS_REG (PI_BASE_REG+0x10)
#define OS_VI_NTSC_LPN1 0
#define OS_VI_NTSC_LPN2 4
#define G_TF_AVERAGE (3 << G_MDSFT_TEXTFILT)
#define ICON_key_card_gold_palette 0x11660
#define OS_VI_MPAL_LPF1 29
#define ICON_battle_13F_disabled_palette 0x14DA0
#define ICON_badge_AttackFXB_disabled_palette 0x21CA0
#define ICON_battle_ThunderBolt_raster 0x2AA80
#define OS_GBPAK_RSTB_DETECTION 0x04
#define ICON_food_EggMissile_palette 0x5C20
#define ICON_food_DriedPasta_disabled_raster 0x25500
#define ICON_key_seed_4_raster 0xCBA0
#define SP_CLR_RSPSIGNAL SP_CLR_SIG3
#define ICON_food_LimeCandy_disabled_palette 0x69C0
#define EVT_SET_VEC2(baseVar,x,y,z) EVT_SET(baseVar + 0, x) EVT_SET(baseVar + 1, y)
#define EVT_SET_VEC3(baseVar,x,y,z) EVT_SET(baseVar + 0, x) EVT_SET(baseVar + 1, y) EVT_SET(baseVar + 2, z)
#define ICACHE_LINEMASK (ICACHE_LINESIZE-1)
#define gSPForceMatrix(pkt,mptr) { gDma2p((pkt),G_MOVEMEM,(mptr),sizeof(Mtx),G_MV_MATRIX,0); gMoveWd((pkt), G_MW_FORCEMTX,0,0x00010000); }
#define ICON_anim_sp_2_palette 0x311C0
#define ICON_key_boo_record_raster 0xB000
#define MAX_MAPVARS 16
#define OS_VI_MPAL_LPN1 28
#define OS_VI_MPAL_LPN2 32
#define ICON_food_SweetShroom_disabled_palette 0x3CC0
#define EEPROM_BLOCK_SIZE 8
#define ICON_battle_DizzyDial_raster 0x29D00
#define ICON_food_IcedPotato_disabled_raster 0x26B80
#define SP_FRACPOS 0x00000100
#define ICON_badge_HappyFlower_raster 0x1FB00
#define gSPClearGeometryMode(pkt,word) gSPGeometryMode((pkt),(word),0)
#define ems_DrawImage(raster,palette,width,height,holdTime) ENTITY_MODEL_SCRIPT_OP_DrawImage, holdTime, (s32)raster, (s32)palette, width, height,
#define CACH_PD 0x1
#define CACH_PI 0x0
#define EVT_EXEC_WAIT(EVT_SOURCE) EVT_CMD(EVT_OP_EXEC_WAIT, (Bytecode) EVT_SOURCE),
#define ICON_key_water_stone_palette 0xD1E0
#define ICON_key_koot_autograph_merluvlee_raster 0x12140
#define G_BL_CLR_FOG 3
#define AI_NTSC_MAX_FREQ 368000
#define CACH_SD 0x3
#define ERR_ALSNDPPLAY 109
#define CACH_SI 0x2
#define ICON_badge_FirstAttack_palette 0x15D40
#define ICON_food_Mushroom_disabled_raster 0x237C0
#define OS_VI_PAL_LAF2 21
#define _gDPLoadTextureBlock_4b(pkt,timg,tmem,fmt,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, G_IM_SIZ_16b, 1, timg); gDPSetTile(pkt, fmt, G_IM_SIZ_16b, 0, tmem, G_TX_LOADTILE, 0, cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height)+3)>>2)-1, CALC_DXT_4b(width)); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, G_IM_SIZ_4b, ((((width)>>1)+7)>>3), tmem, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define ERR_OSPIREADIO 26
#define Z_CMP 0x10
#define ICON_peach_BakingStrawberry_disabled_palette 0x28420
#define ICON_food_ElectroPop_palette 0x6520
#define ICON_battle_RepelGel_disabled_palette 0x146E0
#define _RMON_H_ 
#define ERR_OSMAPTLB_ASID 11
#define G_TRI_FILL 0xc8
#define ICON_food_JellyUltra_raster 0x2D20
#define ICON_badge_DDownJump_disabled_palette 0x1F660
#define AL_SUSTAIN 63
#define ICON_food_HealthyJuice_disabled_palette 0x3F00
#define hs_SetScale(scale) HUD_ELEMENT_OP_SetScale, (s32)(scale * 65536.0f),
#define G_PM_NPRIMITIVE (0 << G_MDSFT_PIPELINE)
#define G_RM_AA_ZB_OPA_INTER RM_AA_ZB_OPA_INTER(1)
#define ICON_badge_Multibounce_palette 0x15200
#define EVT_ABORT 1
#define gsDPFillRectangle(ulx,uly,lrx,lry) {{ (_SHIFTL(G_FILLRECT, 24, 8) | _SHIFTL((lrx), 14, 10) | _SHIFTL((lry), 2, 10)), (_SHIFTL((ulx), 14, 10) | _SHIFTL((uly), 2, 10)) }}
#define SP_STATUS_SSTEP 0x020
#define _OS_VERSION_H_ 
#define ICON_key_map_raster 0x2200
#define AL_CMIDI_CNTRL_LOOPCOUNT_SM 104
#define EVT_RETURN EVT_CMD(EVT_OP_RETURN),
#define gDPSetTextureLOD(pkt,type) gSPSetOtherMode(pkt, G_SETOTHERMODE_H, G_MDSFT_TEXTLOD, 1, type)
#define ERR_OSAISETNEXTBUFFER_ENDADDR 132
#define RM_OPA_CI(clk) CVG_DST_CLAMP | ZMODE_OPA | GBL_c ##clk(G_BL_CLR_IN, G_BL_0, G_BL_CLR_IN, G_BL_1)
#define ICON_anim_star_piece_0_palette 0x30600
#define OS_EVENT_FAULT 12
#define _LANGUAGE_C 1
#define RDRAM_DEVICE_TYPE_REG (RDRAM_BASE_REG+0x00)
#define OS_MESG_NOBLOCK 0
#define G_MWO_aLIGHT_1 0x00
#define G_MWO_aLIGHT_2 0x18
#define G_MWO_aLIGHT_3 0x30
#define G_MWO_aLIGHT_4 0x48
#define G_MWO_aLIGHT_5 0x60
#define G_MWO_aLIGHT_6 0x78
#define G_MWO_aLIGHT_7 0x90
#define G_MWO_aLIGHT_8 0xa8
#define ICON_food_MapleSuper_palette 0x5560
#define A_POLEF 14
#define _OS_ERROR_H_ 
#define G_RM_AA_ZB_SUB_SURF RM_AA_ZB_SUB_SURF(1)
#define EVT_END_SWITCH EVT_CMD(EVT_OP_END_SWITCH),
#define ERR_ALSEQMETA 120
#define ICON_anim_coin_5_palette 0x2FD20
#define ICON_food_JellyPop_raster 0x6E60
#define G_DMA_IO 0xd6
#define EVT_END_IF EVT_CMD(EVT_OP_END_IF),
#define G_CC_MODULATERGBA_PRIM G_CC_MODULATEIA_PRIM
#define SR_IBIT1 0x00000100
#define SR_IBIT2 0x00000200
#define SR_IBIT3 0x00000400
#define SR_IBIT4 0x00000800
#define SR_IBIT5 0x00001000
#define SR_IBIT6 0x00002000
#define SR_IBIT7 0x00004000
#define SR_IBIT8 0x00008000
#define DPS_TBIST_FAILED 0x7F8
#define A_INIT 0x01
#define PFS_ERR_NEW_PACK 2
#define A_SEGMENT 7
#define gDPFullSync(pkt) gDPNoParam(pkt, G_RDPFULLSYNC)
#define G_AD_PATTERN (0 << G_MDSFT_ALPHADITHER)
#define OS_TASK_USR0 0x0010
#define OS_TASK_USR1 0x0020
#define OS_TASK_USR2 0x0040
#define OS_TASK_USR3 0x0080
#define ICON_key_book_lyrics_raster 0xF440
#define ICON_badge_HappyHeart_disabled_raster 0x1A580
#define C_HWBINV 0x14
#define GAME_DBG_DATA_SEND 3
#define ICON_food_FriedShroom_raster 0x31A0
#define EVT_SETUP_CAMERA_MINIMAL() EVT_CALL(SetCamPerspective, CAM_DEFAULT, 3, 25, 16, 4096)
#define ICON_battle_XBandage_palette 0x29600
#define RM_ZB_PCL_SURF(clk) Z_CMP | Z_UPD | CVG_DST_FULL | ZMODE_OPA | G_AC_DITHER | GBL_c ##clk(G_BL_CLR_IN, G_BL_0, G_BL_CLR_IN, G_BL_1)
#define EVT_MULF(VAR,FLOAT_VALUE) EVT_CMD(EVT_OP_MULF, VAR, FLOAT_VALUE),
#define ArrayFlag(INDEX) ((INDEX) - EVT_ARRAY_FLAG_OFFSET)
#define ICON_food_HoneyUltra_disabled_raster 0x28A0
#define OS_VI_BIT_LORES 0x0100
#define gsDPSetDepthImage(i) gsSetImage(G_SETZIMG, 0, 0, 1, i)
#define ERR_OSSETTLBASID 13
#define AL_PHASE_SUSTAIN 2
#define va_end(AP) ((void)0)
#define DPS_BASE_REG 0x04200000
#define gsDPNoOp() gsDPNoParam(G_NOOP)
#define GU_PARSEGBI_ALLMTX 16
#define OS_VI_FPAL_HAF1 53
#define G_CC_MODULATEIA_PRIM2 COMBINED, 0, PRIMITIVE, 0, COMBINED, 0, PRIMITIVE, 0
#define _VA_LIST_DEFINED 
#define ICON_peach_BakingCream_raster 0x27FC0
#define LVar1 LocalVar(1)
#define LVar2 LocalVar(2)
#define LVar4 LocalVar(4)
#define LVar5 LocalVar(5)
#define LVar6 LocalVar(6)
#define LVar7 LocalVar(7)
#define LVar8 LocalVar(8)
#define LVar9 LocalVar(9)
#define LVarA LocalVar(10)
#define LVarB LocalVar(11)
#define LVarC LocalVar(12)
#define LVarD LocalVar(13)
#define LVarE LocalVar(14)
#define LVarF LocalVar(15)
#define ICON_key_dojo_card_5_raster 0x11020
#define G_RM_AA_ZB_DEC_LINE2 RM_AA_ZB_DEC_LINE(2)
#define SI_STATUS_DMA_BUSY 0x0001
#define ICON_unused_0E6_raster 0x20F40
#define MakeTexRect(xh,yh,flip,tile,xl,yl,s,t,dsdx,dtdy) G_TEXRECT, xh, yh, 0, flip, 0, tile, xl, yl, s, t, dsdx, dtdy
#define ICON_battle_Mystery_disabled_raster 0x14280
#define RDRAM_GLOBAL_CONFIG 0x80000
#define ICON_anim_hand_0_palette 0x2C8E0
#define AI_VAR_HITNPC_DIST varTable[1]
#define ICON_badge_ChillOut_raster 0x1A340
#define OS_MESG_PRI_NORMAL 0
#define FLAGS_SPACE 1
#define gsDPSetCycleType(type) gsSPSetOtherMode(G_SETOTHERMODE_H, G_MDSFT_CYCLETYPE, 2, type)
#define ICON_battle_136_disabled_raster 0x29F40
#define OS_VI_FPAL_HAN1 52
#define ICON_unused_0E6_disabled_palette 0x21160
#define ICON_food_Mistake_disabled_palette 0x4EC0
#define L_CBUTTONS CONT_C
#define ICON_badge_MegaSmash_disabled_palette 0x1C720
#define MI_MODE_EBUS 0x0100
#define ICON_badge_AttackFXF_palette 0x22340
#define G_RM_RA_ZB_OPA_DECAL RM_RA_ZB_OPA_DECAL(1)
#define ERR_ALSEQPUNMAP 123
#define EVT_GAME_FLAG_CUTOFF -120000000
#define G_FOG 0x00010000
#define MAX_SHADOWS 60
#define ICON_food_ElectroPop_disabled_raster 0x6320
#define ICON_food_DriedPasta_raster 0x25500
#define ICON_unused_12E_disabled_raster 0x2C340
#define F3DEX_GBI 
#define ICON_unused_0F7_palette 0x23780
#define G_MDSFT_BLENDER 16
#define IO_READ(addr) (*(vu32 *)PHYS_TO_K1(addr))
#define ICON_battle_InsecticideHerb_disabled_palette 0x14920
#define MI_CLR_INIT 0x0080
#define RAMROM_GAME_OFFSET 0x1000
#define G_ACMUX_PRIM_LOD_FRAC 6
#define osMotorStart(x) __osMotorAccess((x), MOTOR_START)
#define SR_ERL 0x00000004
#define ICON_key_screwdriver_palette 0xE0E0
#define G_RM_AA_ZB_XLU_INTER RM_AA_ZB_XLU_INTER(1)
#define G_RDPSETOTHERMODE 0xef
#define G_RM_OPA_CI RM_OPA_CI(1)
#define G_CCMUX_0 31
#define G_CCMUX_1 6
#define ICON_Hammer3_palette 0x2DFC0
#define ICON_battle_13E_palette 0x14B40
#define DPS_BUFTEST_DATA_REG (DPS_BASE_REG+0x0C)
#define VI_CTRL_TYPE_32 0x00003
#define ERR_OSSETTHREADPRI 4
#define ICON_food_PotatoSalad_disabled_raster 0x7760
#define G_RM_TEX_EDGE2 RM_TEX_EDGE(2)
#define _SCRIPT_API_COMMON_H_ 
#define ICON_badge_SpinAttack_raster 0x1DB80
#define ICON_battle_FireFlower_raster 0x2A3C0
#define GU_PARSERDP_PRHISTO 4
#define G_RM_AA_ZB_OPA_SURF RM_AA_ZB_OPA_SURF(1)
#define SR_EXL 0x00000002
#define G_IM_SIZ_32b_SHIFT 0
#define PACK_FILL_COLOR(r,g,b,a) (GPACK_RGBA5551(r, g, b, a) << 0x10) | GPACK_RGBA5551(r, g, b, a)
#define HOST_PROF_REQ 11
#define ICON_key_1DC870_raster 0x10560
#define G_TD_SHARPEN (1 << G_MDSFT_TEXTDETAIL)
#define EVT_ARRAY_VAR_CUTOFF -180000000
#define gSPLoadUcodeEx(pkt,uc_start,uc_dstart,uc_dsize) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_RDPHALF_1,24,8); _g->words.w1 = (unsigned int)(uc_dstart); _g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_LOAD_UCODE,24,8)| _SHIFTL((int)(uc_dsize)-1,0,16)); _g->words.w1 = (unsigned int)(uc_start); }
#define RAMROM_PIF2BOOTSTRAP_OFFSET 0x1000
#define GU_PARSEGBI_SHOWDMA 8
#define NTLBENTRIES 31
#define FIX32TOF(x) ((float)(x) * (1.0f / (float)0x00010000))
#define AL_FX_CUSTOM 6
#define GDMACMD(x) (x)
#define EXC_IBE EXC_CODE(6)
#define AL_FX_BUFFER_SIZE 8192
#define CLR_ON_CVG 0x80
#define ICACHE_LINESIZE 32
#define gsDPSetColorDither(mode) gsSPSetOtherMode(G_SETOTHERMODE_H, G_MDSFT_RGBDITHER, 2, mode)
#define CONT_JOYPORT 0x0004
#define hs_UseIA8 HUD_ELEMENT_OP_UseIA8,
#define ICON_badge_EarthquakeJump_disabled_palette 0x1FAE0
#define DL_BM_OVERHEAD (12)
#define ICON_anim_star_piece_2_palette 0x30A40
#define ITEM_LAST_KEY ITEM_PRISON_KEY4
#define ICON_unused_0F4_palette 0x230C0
#define ICON_badge_EarthquakeJump_raster 0x1F8C0
#define ICON_food_NuttyCake_disabled_raster 0x79A0
#define OS_PHYSICAL_TO_K0(x) (void *)(((u32)(x)+0x80000000))
#define OS_PHYSICAL_TO_K1(x) (void *)(((u32)(x)+0xa0000000))
#define ERR_OSREADHOST_SIZE 71
#define ICON_battle_Pebble_disabled_raster 0x2B140
#define ICON_unused_08F_palette 0x13B80
#define ICON_badge_SmashCharge0_disabled_palette 0x185E0
#define _OS_MOTOR_H_ 
#define TXL2WORDS(txls,b_txl) MAX(1, ((txls)*(b_txl)/8))
#define G_DEPTOZS(zval,near,far,flag) G_DEPTOZSrg(zval, near, far, flag, 0, G_MAXZ)
#define gDPLoadMultiBlock_4b(pkt,timg,tmem,rtile,fmt,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, G_IM_SIZ_16b, 1, timg); gDPSetTile(pkt, fmt, G_IM_SIZ_16b, 0, tmem, G_TX_LOADTILE, 0, cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height)+3)>>2)-1, CALC_DXT_4b(width)); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, G_IM_SIZ_4b, ((((width)>>1)+7)>>3), tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, rtile, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define G_CC_MODULATERGB G_CC_MODULATEI
#define EXC_INT EXC_CODE(0)
#define EVT_SUSPEND_GROUP(GROUP) EVT_CMD(EVT_OP_SUSPEND_GROUP, GROUP),
#define ICON_key_koot_package_palette 0xEFE0
#define ERR_OSVISETXSCALE_VALUE 39
#define G_MDSFT_TEXTLOD 16
#define ICON_unused_0E5_raster 0x20D00
#define G_CC_INTERFERENCE TEXEL0, 0, TEXEL1, 0, TEXEL0, 0, TEXEL1, 0
#define ERR_ALHEAPNOFREE 125
#define AI_TEMP_STATE functionTemp[0]
#define ICON_food_Lime_disabled_raster 0x25740
#define gSPLoadUcode(pkt,uc_start,uc_dstart) gSPLoadUcodeEx((pkt), (uc_start), (uc_dstart), SP_UCODE_DATA_SIZE)
#define VI_V_BURST_REG (VI_BASE_REG+0x2C)
#define X10(f) (s32)(f * 1024.0f)
#define ICON_badge_PUpDDown_raster 0x1CE00
#define G_SETPRIMCOLOR 0xfa
#define G_CC_1CYUV2RGB TEXEL0, K4, K5, TEXEL0, 0, 0, 0, SHADE
#define ICON_key_miracle_water_raster 0xD640
#define IS_KSEG1(x) ((u32)(x) >= K1BASE && (u32)(x) < K2BASE)
#define IS_KSEG2(x) ((u32)(x) >= K2BASE && (u32)(x) < KPTE_SHDUBASE)
#define EVT_EXIT_SPLIT_SINGLE_DOOR(exitIdx,map,entryIdx,colliderID,topModelID,bottomModelID,swingDir) { EVT_SET_GROUP(EVT_GROUP_1B) EVT_CALL(DisablePlayerInput, TRUE) EVT_SET(LVar0, exitIdx) EVT_SET(LVar1, colliderID) EVT_SET(LVar2, topModelID) EVT_SET(LVar4, bottomModelID) EVT_SET(LVar3, swingDir) EVT_EXEC(ExitSplitSingleDoor) EVT_WAIT(17) EVT_CALL(GotoMap, EVT_PTR(map), entryIdx) EVT_WAIT(100) EVT_RETURN EVT_END }
#define G_MDSFT_TEXTLUT 14
#define DPC_SET_FLUSH 0x0020
#define EVT_GOTO(LABEL_ID) EVT_CMD(EVT_OP_GOTO, LABEL_ID),
#define A_LOADADPCM 11
#define ICON_badge_EarthquakeJump_disabled_raster 0x1F8C0
#define MI_MODE_RDRAM 0x0200
#define ICON_food_Cake_disabled_raster 0x4A60
#define MAX_MAPFLAGS 3
#define ICON_food_JellySuper_palette 0x57A0
#define RM_AA_ZB_SUB_SURF(clk) AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_FULL | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define AREA_SPECIFIC_ENTITY_VRAM 0x802BAE00
#define gsSPEndDisplayList() {{ _SHIFTL(G_ENDDL, 24, 8), 0 }}
#define ICON_badge_BumpAttack_palette 0x1CDC0
#define OS_MESG_TYPE_DMAREAD (OS_MESG_TYPE_BASE+1)
#define ICON_food_Coconut_palette 0x266C0
#define EVT_MAP_FLAG_CUTOFF -80000000
#define ICON_peach_BakingSalt_palette 0x27B00
#define VOICE_WARN_TOO_NOISY 0x8000
#define _OS_LIBC_H_ 
#define ICON_key_kooper_shell_palette 0x9EE0
#define _VFUNC_(name,n) name ##n
#define C0_ENTRYLO0 2
#define C0_ENTRYLO1 3
#define ICON_unused_0D6_raster 0x1EB40
#define G_ZBUFFER 0x00000001
#define ICON_badge_SuperJump_raster 0x1BC00
#define EVT_ENTITY_ID_BIT 0x4000
#define gDPLoadTLUT_pal256(pkt,dram) { gDPSetTextureImage(pkt, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, dram); gDPTileSync(pkt); gDPSetTile(pkt, 0, 0, 0, 256, G_TX_LOADTILE, 0 , 0, 0, 0, 0, 0, 0); gDPLoadSync(pkt); gDPLoadTLUTCmd(pkt, G_TX_LOADTILE, 255); gDPPipeSync(pkt) }
#define ICON_food_DriedShroom_raster 0x240C0
#define ICON_anim_star_piece_1_raster 0x30620
#define hs_SetCI_Explicit(time,raster,palette) HUD_ELEMENT_OP_SetCI, time, (s32)raster ##_png, (s32)palette ##_pal,
#define ICON_badge_Kaiden_disabled_palette 0x20860
#define ICON_anim_sp_0_palette 0x30F40
#define G_MTX_LOAD 0x02
#define gsDPLoadTLUTCmd(tile,count) {{ _SHIFTL(G_LOADTLUT, 24, 8), _SHIFTL((tile), 24, 3) | _SHIFTL((count), 14, 10) }}
#define ICON_badge_IcePower_raster 0x19A40
#define C0_PAGEMASK 5
#define VI_V_INTR_REG VI_INTR_REG
#define ApiStatus_BLOCK 0
#define ICON_key_artifact_palette 0xA320
#define spSetZ spX2SetZ
#define ICON_key_seed_1_raster 0xC540
#define G_MV_MATRIX 14
#define gsDPSetCombineLERP(a0,b0,c0,d0,Aa0,Ab0,Ac0,Ad0,a1,b1,c1,d1,Aa1,Ab1,Ac1,Ad1) {{ _SHIFTL(G_SETCOMBINE, 24, 8) | _SHIFTL(GCCc0w0(G_CCMUX_ ##a0, G_CCMUX_ ##c0, G_ACMUX_ ##Aa0, G_ACMUX_ ##Ac0) | GCCc1w0(G_CCMUX_ ##a1, G_CCMUX_ ##c1), 0, 24), (unsigned int)(GCCc0w1(G_CCMUX_ ##b0, G_CCMUX_ ##d0, G_ACMUX_ ##Ab0, G_ACMUX_ ##Ad0) | GCCc1w1(G_CCMUX_ ##b1, G_ACMUX_ ##Aa1, G_ACMUX_ ##Ac1, G_CCMUX_ ##d1, G_ACMUX_ ##Ab1, G_ACMUX_ ##Ad1)) }}
#define ICON_badge_DDownJump_palette 0x1F640
#define ICON_key_ruins_stone_moon_palette 0xABA0
#define ERR_ALSEQP_MAP_VOICE 102
#define ICON_anim_sp_small_0_palette 0x31CC0
#define FLAGS_PLUS 2
#define ICON_anim_heart_piece_palette 0x30E00
#define gDPLoadMultiBlock_4bS(pkt,timg,tmem,rtile,fmt,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, G_IM_SIZ_16b, 1, timg); gDPSetTile(pkt, fmt, G_IM_SIZ_16b, 0, tmem, G_TX_LOADTILE, 0, cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height)+3)>>2)-1, 0 ); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, G_IM_SIZ_4b, ((((width)>>1)+7)>>3), tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, rtile, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define EVT_CASE_AND_EQ(RVAR) EVT_CMD(EVT_OP_CASE_AND_EQ, RVAR),
#define G_RM_AA_ZB_OPA_DECAL RM_AA_ZB_OPA_DECAL(1)
#define G_MWO_CLIP_RNY 0x0c
#define AL_PHASE_DECAY 1
#define MOTOR_START 1
#define K0BASE 0x80000000
#define G_MWO_CLIP_RPY 0x1c
#define SP_STATUS_CPUSIGNAL SP_STATUS_SIG4
#define alSeqpGetFXMix alSeqpGetChlFXMix
#define ICON_food_YoshiCookie_disabled_raster 0x8060
#define gsDPLoadTextureBlockS(timg,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, siz ##_LOAD_BLOCK, 1, timg), gsDPSetTile(fmt, siz ##_LOAD_BLOCK, 0, 0, G_TX_LOADTILE, 0 , cmt, maskt,shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadBlock(G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT)-1, 0 ), gsDPPipeSync(), gsDPSetTile(fmt, siz, ((((width) * siz ##_LINE_BYTES)+7)>>3), 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC)
#define ERR_ALSNDPDEALLOCATE 107
#define SP_STATUS_DMA_BUSY 0x004
#define ICON_unused_0D6_disabled_raster 0x1EB40
#define ICON_badge_PowerBounce_palette 0x158C0
#define SP_SCALE 0x00000010
#define ICON_anim_shimmer_6_raster 0x303C0
#define ICON_unused_0E7_raster 0x21180
#define ICON_badge_AutoSmash_raster 0x16F80
#define ICON_unused_0E4_raster 0x20AC0
#define CONT_ERR_NOT_READY 12
#define G_TL_LOD (1 << G_MDSFT_TEXTLOD)
#define DPC_STATUS_XBUS_DMEM_DMA 0x001
#define G_CC_BLENDRGBDECALA TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, TEXEL0
#define PFS_READ 0
#define ICON_battle_13F_palette 0x14D80
#define MSG_BIN u8
#define ICON_key_ruins_stone_pyramid_raster 0xA560
#define ICON_key_key_ice_palace_palette 0x9880
#define gDPSetScissor(pkt,mode,ulx,uly,lrx,lry) { Gfx *_g = (Gfx *)pkt; _g->words.w0 = _SHIFTL(G_SETSCISSOR, 24, 8) | _SHIFTL((int)((float)(ulx)*4.0F), 12, 12) | _SHIFTL((int)((float)(uly)*4.0F), 0, 12); _g->words.w1 = _SHIFTL(mode, 24, 2) | _SHIFTL((int)((float)(lrx)*4.0F), 12, 12) | _SHIFTL((int)((float)(lry)*4.0F), 0, 12); }
#define EVT_IS_THREAD_RUNNING(TID,OUTVAR) EVT_CMD(EVT_OP_IS_THREAD_RUNNING, TID, OUTVAR),
#define OS_ERROR_MAGIC 0x6b617479
#define aSegment(pkt,s,b) { Acmd *_a = (Acmd *)pkt; _a->words.w0 = _SHIFTL(A_SEGMENT, 24, 8); _a->words.w1 = _SHIFTL(s, 24, 8) | _SHIFTL(b, 0, 24); }
#define ICON_battle_PleaseComeBack_disabled_palette 0x13DE0
#define ICON_unused_0F3_disabled_palette 0x22EA0
#define ERR_OSVIEXTENDVSTART_VALUE 135
#define VI_Y_SCALE_REG (VI_BASE_REG+0x34)
#define OS_VI_BIT_NTSC 0x0400
#define EVT_EXIT_WALK(walkDistance,exitIdx,map,entryIdx) { EVT_SET_GROUP(EVT_GROUP_1B) EVT_CALL(UseExitHeading, walkDistance, exitIdx) EVT_EXEC(ExitWalk) EVT_CALL(GotoMap, EVT_PTR(map), entryIdx) EVT_WAIT(100) EVT_RETURN EVT_END }
#define ICON_food_TastyTonic_disabled_palette 0x24520
#define BLOCK_GRID_SIZE 25
#define ICON_battle_MagicMirror_disabled_raster 0x2BEC0
#define C0_SR 12
#define ICON_peach_BakingCleanser_disabled_raster 0x28680
#define G_IMMCMDSIZ 64
#define ENTRY_COUNT(entryList) (sizeof(entryList) / sizeof(Vec4f))
#define ICON_food_SuperShroom_disabled_raster 0x23A00
#define ICON_badge_MegaQuake_disabled_palette 0x168A0
#define ICON_badge_AttackFXA_disabled_raster 0x18A80
#define EVT_PLAY_EFFECT11(effect,subtype,a,b,c,d,e,f,g,h,i) EVT_CALL(PlayEffect, effect, subtype, a, b, c, d, e, f, g, h, i, 0, 0, 0)
#define ICON_food_Cake_disabled_palette 0x4C80
#define ICON_battle_PleaseComeBack_raster 0x13BC0
#define ITEM_FIRST_BADGE ITEM_SPIN_SMASH
#define ICON_anim_sp_small_2_palette 0x31D40
#define ICON_food_CocoPop_palette 0x6BE0
#define ICON_key_key_blue_palette 0xEDC0
#define EVT_RESUME_OTHERS(GROUP) EVT_CMD(EVT_OP_RESUME_OTHERS, GROUP),
#define RM_ZB_OVL_SURF(clk) Z_CMP | IM_RD | CVG_DST_SAVE | FORCE_BL | ZMODE_DEC | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define ICON_anim_star_piece_0_raster 0x30400
#define ICON_badge_SuperSmash_disabled_raster 0x1C2C0
#define PI_DOMAIN1 0
#define PI_DOMAIN2 1
#define ICON_badge_AttackFXB_disabled_raster 0x21A80
#define ICON_badge_SpeedySpin_disabled_raster 0x1D940
#define G_CC_REFLECTRGB ENVIRONMENT, 0, TEXEL0, SHADE, 0, 0, 0, SHADE
#define ICON_food_HoneySyrup_raster 0x26DC0
#define EVT_WAIT(NUM_FRAMES) EVT_CMD(EVT_OP_WAIT_FRAMES, NUM_FRAMES),
#define __INCLUDE_ASM_H__ 
#define gsDPSetKeyR(cR,sR,wR) {{ _SHIFTL(G_SETKEYR, 24, 8), _SHIFTL(wR, 16, 12) | _SHIFTL(cR, 8, 8) | _SHIFTL(sR, 0, 8) }}
#define G_IM_SIZ_32b_LOAD_BLOCK G_IM_SIZ_32b
#define ICON_food_LifeShroom_disabled_palette 0x240A0
#define ICON_peach_BakingSalt_raster 0x27900
#define ICON_anim_hp_2_raster 0x2ED40
#define ICON_badge_HealthyHealthy_disabled_raster 0x225C0
#define ICON_badge_MegaHPDrain_disabled_raster 0x1C980
#define gDPSetTile(pkt,fmt,siz,line,tmem,tile,palette,cmt,maskt,shiftt,cms,masks,shifts) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_SETTILE, 24, 8) | _SHIFTL(fmt, 21, 3) | _SHIFTL(siz, 19, 2) | _SHIFTL(line, 9, 9) | _SHIFTL(tmem, 0, 9); _g->words.w1 = _SHIFTL(tile, 24, 3) | _SHIFTL(palette, 20, 4) | _SHIFTL(cmt, 18, 2) | _SHIFTL(maskt, 14, 4) | _SHIFTL(shiftt, 10, 4) |_SHIFTL(cms, 8, 2) | _SHIFTL(masks, 4, 4) | _SHIFTL(shifts, 0, 4); }
#define G_IM_SIZ_4b_SHIFT 2
#define CAUSE_IP3 0x00000400
#define ICON_badge_MegaJump_palette 0x1C040
#define ICON_unused_0F6_disabled_palette 0x23560
#define ICON_key_TealLetter_palette 0x13040
#define aPan(pkt,f,d,s) { Acmd *_a = (Acmd *)pkt; _a->words.w0 = (_SHIFTL(A_PAN, 24, 8) | _SHIFTL(f, 16, 8) | _SHIFTL(d, 0, 16)); _a->words.w1 = (unsigned int)(s); }
#define VOICE_WARN_TOO_SMALL 0x0400
#define gSP2Triangles(pkt,v00,v01,v02,flag0,v10,v11,v12,flag1) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_TRI2, 24, 8)| __gsSP1Triangle_w1f(v00, v01, v02, flag0)); _g->words.w1 = __gsSP1Triangle_w1f(v10, v11, v12, flag1); }
#define G_CK_NONE (0 << G_MDSFT_COMBKEY)
#define ICON_badge_PowerJump_disabled_raster 0x1B9C0
#define G_CC_YUV2RGB TEXEL1, K4, K5, TEXEL1, 0, 0, 0, 0
#define VIS_GROUP_PAIR(group1,group2) ((group1) << 12 | (group2))
#define EVT_ADD(VAR,INT_VALUE) EVT_CMD(EVT_OP_ADD, VAR, INT_VALUE),
#define OS_TASK_SP_ONLY 0x0008
#define ICON_badge_SuperJump_disabled_raster 0x1BC00
#define C0_RFE 0x10
#define RDRAM_ACTIVE_MODE 1
#define _OS_MESSAGE_H_ 
#define MI_INTR_MASK_REG (MI_BASE_REG+0x0C)
#define ICON_peach_BakingMilk_disabled_palette 0x28F60
#define E_VEC (K0BASE+0x180)
#define ICON_badge_SpikeShield_disabled_raster 0x15900
#define gsDPSetConvert(k0,k1,k2,k3,k4,k5) {{ (_SHIFTL(G_SETCONVERT, 24, 8) | _SHIFTL(k0, 13, 9) | _SHIFTL(k1, 4, 9) | _SHIFTR(k2, 5, 4)), (_SHIFTL(k2, 27, 5) | _SHIFTL(k3, 18, 9) | _SHIFTL(k4, 9, 9) | _SHIFTL(k5, 0, 9)) }}
#define GU_PARSE_ABI_TYPE 5
#define G_TC_FILT (6 << G_MDSFT_TEXTCONV)
#define ICON_key_snowman_bucket_raster 0xE540
#define PI_D 3.141592
#define G_RM_AA_ZB_XLU_DECAL RM_AA_ZB_XLU_DECAL(1)
#define K1SIZE 0x20000000
#define CONT_ERR_CONTRFAIL CONT_OVERRUN_ERROR
#define ICON_badge_FlowerFanatic_palette 0x1B980
#define _XSTDIO_H 
#define G_RM_AA_ZB_XLU_INTER2 RM_AA_ZB_XLU_INTER(2)
#define ICON_unused_0F5_palette 0x23300
#define BOOT_ADDRESS_ULTRA 0x80000400
#define ICON_key_ultra_stone_raster 0xD860
#define ICON_food_FrozenFries_palette 0x7720
#define ICON_badge_FirstAttack_raster 0x15B40
#define RDRAM_1_END 0x003FFFFF
#define ICON_key_suspicious_note_palette 0xC520
#define ICON_badge_FlowerFinder_palette 0x1D6C0
#define ICON_Hammer1_palette 0x2DB40
#define ICON_battle_POWBlock_disabled_raster 0x29640
#define ICON_food_BlandMeal_palette 0x4120
#define hs_AddTexelOffsetY(y) HUD_ELEMENT_OP_AddTexelOffsetY, y,
#define OS_MIN_STACKSIZE 72
#define ICON_anim_hand_9_raster 0x2D300
#define gDPLoadTextureBlockYuv(pkt,timg,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, siz ##_LOAD_BLOCK, 1, timg); gDPSetTile(pkt, fmt, siz ##_LOAD_BLOCK, 0, 0, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT) -1, CALC_DXT(width, siz ##_BYTES)); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, siz, (((width) * 1)+7)>>3, 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define G_RM_AA_ZB_PCL_SURF RM_AA_ZB_PCL_SURF(1)
#define ARRAY_COUNT(arr) (s32)(sizeof(arr) / sizeof(arr[0]))
#define ICON_badge_LuckyDay_raster 0x1C740
#define SP_CLR_SIG0 0x00200
#define SP_CLR_SIG1 0x00800
#define SP_CLR_SIG2 0x02000
#define SP_CLR_SIG3 0x08000
#define SP_CLR_SIG4 0x20000
#define SP_CLR_SIG5 0x80000
#define SP_CLR_SIG6 0x200000
#define SP_CLR_SIG7 0x800000
#define ICON_badge_SmashCharge0_disabled_raster 0x183C0
#define ICON_battle_VoltShroom_disabled_raster 0x2B800
#define AI_MPAL_MIN_FREQ 3000
#define ICON_battle_ShootingStar_palette 0x2AEC0
#define ICON_food_Apple_raster 0x276C0
#define M_GFXTASK 1
#define ICON_food_FirePop_disabled_palette 0x6780
#define ICON_badge_QuickChange_palette 0x20A80
#define ICON_badge_SSmashChg_disabled_raster 0x16D40
#define ICON_food_LemonCandy_disabled_palette 0x6E40
#define ICON_badge_DeepFocus_raster 0x201C0
#define G_MOVEMEM 0xdc
#define PFS_BANKS_256K 1
#define BTL_STAGE_DEFAULT -1
#define PFS_DATA_FULL 7
#define ICON_food_FriedShroom_disabled_palette 0x33C0
#define RDRAM_END RDRAM_1_END
#define OS_YIELD_DATA_SIZE 0xc00
#define gDPLoadTextureBlockYuvS(pkt,timg,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, siz ##_LOAD_BLOCK, 1, timg); gDPSetTile(pkt, fmt, siz ##_LOAD_BLOCK, 0, 0, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT)-1,0); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, siz, (((width) * 1)+7)>>3, 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define STRINGIFY(x) STRINGIFY_(x)
#define G_IM_SIZ_16b_INCR 0
#define ECC_VEC (K0BASE+0x100)
#define DEVICE_TYPE_64DD 2
#define ICON_unused_08D_palette 0x13700
#define VI_X_SCALE_REG (VI_BASE_REG+0x30)
#define RMON_DBG_BUF_SIZE 2048
#define G_CYC_1CYCLE (0 << G_MDSFT_CYCLETYPE)
#define G_CLIPPING 0x00800000
#define SP_STATUS_SIG0 0x080
#define SP_STATUS_SIG1 0x100
#define SP_STATUS_SIG2 0x200
#define SP_STATUS_SIG3 0x400
#define SP_STATUS_SIG4 0x800
#define SP_STATUS_SIG5 0x1000
#define SP_STATUS_SIG6 0x2000
#define SP_STATUS_SIG7 0x4000
#define SP_TRANSPARENT 0x00000001
#define _OS_VOICE_H_ 
#define VI_CTRL_PIXEL_ADV_1 0x01000
#define VI_CTRL_PIXEL_ADV_2 0x02000
#define VI_CTRL_PIXEL_ADV_3 0x03000
#define ICON_peach_BakingCream_palette 0x281C0
#define G_RM_ZB_CLD_SURF RM_ZB_CLD_SURF(1)
#define ICON_badge_PowerJump_raster 0x1B9C0
#define A_LOADBUFF 4
#define ICON_badge_GroupFocus_palette 0x21800
#define MAX_MODEL_TRANSFORM_GROUPS 4
#define ERR_ALHEAPCORRUPT 126
#define CVG_X_ALPHA 0x1000
#define STANDARD_ENTITY_MODEL_SCRIPT(gfx,renderMode) { ems_SetRenderMode(renderMode) ems_Draw(gfx, 60) ems_Restart ems_End }
#define OS_RG_ALIGN_16B 16
#define _ENTRANCES_H_ 
#define G_MW_SEGMENT 0x06
#define hs_AddTexelOffsetX(x) HUD_ELEMENT_OP_AddTexelOffsetX, x,
#define ICON_anim_shimmer_4_raster 0x30340
#define ICON_food_HoneySuper_raster 0x5120
#define M2CTX 1
#define gsDPLoadMultiBlockS(timg,tmem,rtile,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, siz ##_LOAD_BLOCK, 1, timg), gsDPSetTile(fmt, siz ##_LOAD_BLOCK, 0, tmem, G_TX_LOADTILE, 0 , cmt, maskt,shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadBlock(G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT)-1, 0 ), gsDPPipeSync(), gsDPSetTile(fmt, siz, ((((width) * siz ##_LINE_BYTES)+7)>>3), tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(rtile, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC)
#define GIO_CART_INTR_REG (GIO_BASE_REG+0x800)
#define ICON_battle_POWBlock_disabled_palette 0x29860
#define RAMROM_BOOTSTRAP_OFFSET 0x40
#define ICON_anim_sp_7_raster 0x316E0
#define _gDPLoadTextureBlock(pkt,timg,tmem,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, siz ##_LOAD_BLOCK, 1, timg); gDPSetTile(pkt, fmt, siz ##_LOAD_BLOCK, 0, tmem, G_TX_LOADTILE, 0, cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT)-1, CALC_DXT(width, siz ##_BYTES)); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, siz, (((width) * siz ##_LINE_BYTES)+7)>>3, tmem, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define BTL_DEFAULT_STAGE -1
#define gDPLoadTileGeneric(pkt,c,tile,uls,ult,lrs,lrt) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(c, 24, 8) | _SHIFTL(uls, 12, 12) | _SHIFTL(ult, 0, 12); _g->words.w1 = _SHIFTL(tile, 24, 3) | _SHIFTL(lrs, 12, 12) | _SHIFTL(lrt, 0, 12); }
#define LIGHT_5 5
#define gSPNoOp(pkt) gDma0p(pkt, G_SPNOOP, 0, 0)
#define ICON_food_BlueBerry_disabled_raster 0x24780
#define _OS_TIME_H_ 
#define ICON_food_ShroomCake_disabled_raster 0x33E0
#define gSPSetGeometryMode(pkt,word) gSPGeometryMode((pkt),0,(word))
#define RM_OPA_SURF(clk) CVG_DST_CLAMP | FORCE_BL | ZMODE_OPA | GBL_c ##clk(G_BL_CLR_IN, G_BL_0, G_BL_CLR_IN, G_BL_1)
#define ICON_key_gear_boots_2_palette 0x1740
#define gSPScisTextureRectangle(pkt,xl,yl,xh,yh,tile,s,t,dsdx,dtdy) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_TEXRECT, 24, 8) | _SHIFTL(MAX((s16)(xh),0), 12, 12) | _SHIFTL(MAX((s16)(yh),0), 0, 12)); _g->words.w1 = (_SHIFTL((tile), 24, 3) | _SHIFTL(MAX((s16)(xl),0), 12, 12) | _SHIFTL(MAX((s16)(yl),0), 0, 12)); gImmp1(pkt, G_RDPHALF_1, (_SHIFTL(((s) - (((s16)(xl) < 0) ? (((s16)(dsdx) < 0) ? (MAX((((s16)(xl)*(s16)(dsdx))>>7),0)) : (MIN((((s16)(xl)*(s16)(dsdx))>>7),0))) : 0)), 16, 16) | _SHIFTL(((t) - (((yl) < 0) ? (((s16)(dtdy) < 0) ? (MAX((((s16)(yl)*(s16)(dtdy))>>7),0)) : (MIN((((s16)(yl)*(s16)(dtdy))>>7),0))) : 0)), 0, 16))); gImmp1(pkt, G_RDPHALF_2, (_SHIFTL((dsdx), 16, 16) | _SHIFTL((dtdy), 0, 16))); }
#define ICON_peach_BakingCleanser_palette 0x28880
#define G_CCMUX_SHADE_ALPHA 11
#define EVT_SUSPEND_OTHERS(GROUP) EVT_CMD(EVT_OP_SUSPEND_OTHERS, GROUP),
#define ICON_badge_QuakeHammer_raster 0x15FC0
#define spScissor spX2Scissor
#define ICON_battle_FrightJar_palette 0x14240
#define ERR_OSWRITEHOST_ADDR 72
#define _RAMROM_H 
#define ICON_badge_PDownDUp_raster 0x1D040
#define ICON_badge_RightOn_raster 0x1AC40
#define ICON_anim_hand_8_raster 0x2D1C0
#define ICON_food_JamminJelly_disabled_raster 0x27240
#define C_IINV 0x0
#define SP_DMA_IMEM 0x1000
#define RI_MODE_REG (RI_BASE_REG+0x00)
#define G_SPECIAL_1 0xd5
#define G_SPECIAL_2 0xd4
#define G_SPECIAL_3 0xd3
#define SP_CLR_BROKE 0x00004
#define ICON_badge_LastStand_palette 0x1E440
#define CONFIG_BE 0x00008000
#define ERR_OSPIRAWSTARTDMA_SIZE 24
#define _OS_DEBUG_H_ 
#define CONFIG_CM 0x80000000
#define CONFIG_CU 0x00000008
#define ICON_key_key_storeroom_palette 0xBA80
#define ICON_food_BlueBerry_raster 0x24780
#define CONFIG_DB 0x00000010
#define CONFIG_DC 0x000001c0
#define ICON_key_frying_pan_palette 0xBEC0
#define SI_PIF_ADDR_RD64B_REG (SI_BASE_REG+0x04)
#define RMON_STACKSIZE 0x1000
#define CONFIG_EB 0x00002000
#define CONFIG_EC 0x70000000
#define ICON_key_seed_4_palette 0xCDA0
#define CONFIG_EM 0x00004000
#define CONFIG_EP 0x0f000000
#define CONFIG_EW 0x000c0000
#define ICON_unused_12E_disabled_palette 0x2C560
#define gDPParam(pkt,cmd,param) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(cmd, 24, 8); _g->words.w1 = (param); }
#define RI_COUNT_REG RI_REFRESH_REG
#define CONFIG_IB 0x00000020
#define CONFIG_IC 0x00000e00
#define ICON_badge_MoneyMoney_palette 0x1A300
#define gDPFillRectangle(pkt,ulx,uly,lrx,lry) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_FILLRECT, 24, 8) | _SHIFTL((lrx), 14, 10) | _SHIFTL((lry), 2, 10)); _g->words.w1 = (_SHIFTL((ulx), 14, 10) | _SHIFTL((uly), 2, 10));}
#define CONT_A 0x8000
#define CONT_B 0x4000
#define CONT_C 0x0002
#define CONT_D 0x0004
#define CONT_E 0x0008
#define CONT_F 0x0001
#define CONT_G 0x2000
#define G_CC_HILITERGBDECALA PRIMITIVE, SHADE, TEXEL0, SHADE, 0, 0, 0, TEXEL0
#define CONT_L 0x0020
#define CONT_R 0x0010
#define ICON_key_ruins_stone_star_palette 0xA980
#define aResample(pkt,f,p,s) { Acmd *_a = (Acmd *)pkt; _a->words.w0 = (_SHIFTL(A_RESAMPLE, 24, 8) | _SHIFTL(f, 16, 8) | _SHIFTL(p, 0, 16)); _a->words.w1 = (unsigned int)(s); }
#define G_CCMUX_TEXEL1_ALPHA 9
#define ICON_badge_AttackFXE_palette 0x21EC0
#define G_CC_MODULATERGBA_PRIM2 G_CC_MODULATEIA_PRIM2
#define gsDPSetColorImage(f,s,w,i) gsSetImage(G_SETCIMG, f, s, w, i)
#define DPS_TBIST_CHECK 0x01
#define DPC_TMEM_REG (DPC_BASE_REG+0x1C)
#define ICON_unused_0F5_disabled_palette 0x23320
#define ICON_key_boo_portrait_raster 0xB440
#define ICON_food_HoneySuper_disabled_raster 0x5120
#define ICON_badge_PowerSmash_palette 0x1C280
#define ICON_food_LifeShroom_raster 0x23E80
#define A_VOL 0x04
#define ICON_battle_139_raster 0x13E00
#define CONFIG_SB 0x00c00000
#define CONFIG_SM 0x00010000
#define CONFIG_SS 0x00200000
#define ICON_food_HealthyJuice_raster 0x3CE0
#define ICON_badge_LuckyDay_disabled_palette 0x1C960
#define ICON_key_dolly_raster 0x9AC0
#define ICON_key_LongLetter_disabled_raster 0x12C00
#define ICON_food_DriedPasta_palette 0x25700
#define ICON_food_NuttyCake_raster 0x79A0
#define es_Restart ENTITY_SCRIPT_OP_Goto, 0,
#define G_CC_HILITERGBPASSA2 ENVIRONMENT, COMBINED, TEXEL0, COMBINED, 0, 0, 0, COMBINED
#define ICON_unused_02E_palette 0x8B60
#define ICON_battle_FrightJar_disabled_palette 0x14260
#define ICON_anim_coin_7_palette 0x2FFA0
#define C_HSV 0x1c
#define ICON_badge_ISpy_palette 0x1DFC0
#define EVT_JUMP(EVT_SOURCE) EVT_CMD(EVT_OP_JUMP, (Bytecode) EVT_SOURCE),
#define MI_SET_INIT 0x0100
#define ICON_Boots2_palette 0x2E440
#define ENTITY_ROM(name) { entity_model_ ##name ##_ROM_START, entity_model_ ##name ##_ROM_END }
#define EVT_BITWISE_AND_CONST(VAR,CONST) EVT_CMD(EVT_OP_BITWISE_AND_CONST, VAR, CONST),
#define ICON_anim_shimmer_3_raster 0x30300
#define C_HWB 0x18
#define BADGE_MENU_PAGE(index) (&gPauseBadgesPages[index])
#define ERR_OSUNMAPTLB 12
#define ICON_battle_StopWatch_disabled_palette 0x29CE0
#define OS_PM_16K 0x0006000
#define OS_PM_16M 0x1ffe000
#define OS_MESG_TYPE_EDMAWRITE (OS_MESG_TYPE_BASE+6)
#define DPC_STATUS_END_VALID 0x200
#define ICON_anim_coin_0_raster 0x2F5C0
#define ICON_battle_Mystery_palette 0x14480
#define PI_DOM_RLS_OFS 0x0C
#define ENTITY_ADDR(entity,type,data) (type)((s32)(entity->gfxBaseAddr) + ((s32)(data) & 0xFFFF))
#define ICON_anim_coin_1_palette 0x2F820
#define ERR_ALSEQNOTMIDI 114
#define OS_ERROR_FMT "/usr/lib/PR/error.fmt"
#define ICON_battle_137_disabled_raster 0x2A180
#define alCSPGetPan alCSPGetChlPan
#define OS_LOG_FLOAT(x) (*(int *) &(x))
#define RAND(x) (guRandom()%x)
#define gsDPSetMaskImage(i) gsDPSetDepthImage(i)
#define ICON_battle_DustyHammer_raster 0x2AF00
#define AI_VAR_ATTACK_STATE varTable[0]
#define HUD_ELEMENT_BATTLE_ID_MASK 0x800
#define ICON_unused_12F_disabled_raster 0x2C580
#define SI_PIF_ADDR_WR64B_REG (SI_BASE_REG+0x10)
#define ICON_key_dojo_card_1_palette 0x10980
#define gDPLoadBlock(pkt,tile,uls,ult,lrs,dxt) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_LOADBLOCK, 24, 8) | _SHIFTL(uls, 12, 12) | _SHIFTL(ult, 0, 12)); _g->words.w1 = (_SHIFTL(tile, 24, 3) | _SHIFTL((MIN(lrs,G_TX_LDBLK_MAX_TXL)), 12, 12) | _SHIFTL(dxt, 0, 12)); }
#define G_TC_FILTCONV (5 << G_MDSFT_TEXTCONV)
#define ERR_OSVIGETNEXTFRAMEBUFFER 38
#define ICON_badge_FlowerSaver_disabled_raster 0x1B300
#define ICON_unused_12E_raster 0x2C340
#define HOST_APP_CMD_READY 9
#define G_AC_THRESHOLD (1 << G_MDSFT_ALPHACOMPARE)
#define EVT_FINISH 255
#define C0_PROBE 0x8
#define ICON_badge_DoubleDip_disabled_raster 0x16200
#define SP_CLR_TASKDONE SP_CLR_SIG2
#define G_CCMUX_SCALE 6
#define EVT_SETUP_CAMERA_NO_LEAD() EVT_CALL(SetCamPerspective, CAM_DEFAULT, 3, 25, 16, 4096) EVT_CALL(SetCamBGColor, CAM_DEFAULT, 0, 0, 0) EVT_CALL(SetCamEnabled, CAM_DEFAULT, TRUE) EVT_CALL(SetCamLeadPlayer, CAM_DEFAULT, FALSE)
#define CONT_RELATIVE 0x0002
#define gDPLoadTLUT_pal16(pkt,pal,dram) { gDPSetTextureImage(pkt, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, dram); gDPTileSync(pkt); gDPSetTile(pkt, 0, 0, 0, (256+(((pal)&0xf)*16)), G_TX_LOADTILE, 0 , 0, 0, 0, 0, 0, 0); gDPLoadSync(pkt); gDPLoadTLUTCmd(pkt, G_TX_LOADTILE, 15); gDPPipeSync(pkt) }
#define SP_SET_CPUSIGNAL SP_SET_SIG4
#define UNITY_PITCH 0x8000
#define ICON_key_book_melody_palette 0xF420
#define OS_VI_BIT_16PIXEL 0x0040
#define ICON_food_SpecialShake_palette 0x47E0
#define gsDPLoadMultiTile_4b(timg,tmem,rtile,fmt,width,height,uls,ult,lrs,lrt,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, G_IM_SIZ_8b, ((width)>>1), timg), gsDPSetTile(fmt, G_IM_SIZ_8b, (((((lrs)-(uls)+1)>>1)+7)>>3), tmem, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadTile( G_TX_LOADTILE, (uls)<<(G_TEXTURE_IMAGE_FRAC-1), (ult)<<(G_TEXTURE_IMAGE_FRAC), (lrs)<<(G_TEXTURE_IMAGE_FRAC-1), (lrt)<<(G_TEXTURE_IMAGE_FRAC)), gsDPPipeSync(), gsDPSetTile(fmt, G_IM_SIZ_4b, (((((lrs)-(uls)+1)>>1)+7)>>3), tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(rtile, (uls)<<G_TEXTURE_IMAGE_FRAC, (ult)<<G_TEXTURE_IMAGE_FRAC, (lrs)<<G_TEXTURE_IMAGE_FRAC, (lrt)<<G_TEXTURE_IMAGE_FRAC)
#define VAR_PROJECTILE_HITBOX_STATE varTable[0]
#define AI_CONTROL_REG (AI_BASE_REG+0x08)
#define gDPLoadTextureBlockS(pkt,timg,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, siz ##_LOAD_BLOCK, 1, timg); gDPSetTile(pkt, fmt, siz ##_LOAD_BLOCK, 0, 0, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT)-1,0); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, siz, (((width) * siz ##_LINE_BYTES)+7)>>3, 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define ICON_food_FriedEgg_palette 0x5E60
#define ICON_food_Apple_palette 0x278C0
#define FR_NEG_FRUSTRATIO_1 0x00000001
#define OS_RG_ALIGN_2B 2
#define ICON_food_BoiledEgg_disabled_raster 0x7E20
#define gDPLoadMultiTile_4b(pkt,timg,tmem,rtile,fmt,width,height,uls,ult,lrs,lrt,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, G_IM_SIZ_8b, ((width)>>1), timg); gDPSetTile(pkt, fmt, G_IM_SIZ_8b, (((((lrs)-(uls)+1)>>1)+7)>>3), tmem, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadTile( pkt, G_TX_LOADTILE, (uls)<<(G_TEXTURE_IMAGE_FRAC-1), (ult)<<(G_TEXTURE_IMAGE_FRAC), (lrs)<<(G_TEXTURE_IMAGE_FRAC-1), (lrt)<<(G_TEXTURE_IMAGE_FRAC)); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, G_IM_SIZ_4b, (((((lrs)-(uls)+1)>>1)+7)>>3), tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, rtile, (uls)<<G_TEXTURE_IMAGE_FRAC, (ult)<<G_TEXTURE_IMAGE_FRAC, (lrs)<<G_TEXTURE_IMAGE_FRAC, (lrt)<<G_TEXTURE_IMAGE_FRAC) }
#define VI_CONTROL_REG VI_STATUS_REG
#define ICON_badge_Berserker_raster 0x1AA00
#define OS_RG_ALIGN_4B 4
#define OS_STATE_STOPPED 1
#define ICON_badge_SpeedySpin_palette 0x1DB40
#define ICON_food_JellyShroom_disabled_raster 0x82A0
#define G_LOADTILE 0xf4
#define DPC_CLR_FREEZE 0x0004
#define ICON_badge_MegaRush_palette 0x19A00
#define ICON_food_Cake_raster 0x4A60
#define G_CC_MODULATERGB_PRIM G_CC_MODULATEI_PRIM
#define gSPBranchLessZraw(pkt,dl,vtx,zval) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_RDPHALF_1,24,8); _g->words.w1 = (unsigned int)(dl); _g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_BRANCH_Z,24,8)| _SHIFTL((vtx)*5,12,12)|_SHIFTL((vtx)*2,0,12)); _g->words.w1 = (unsigned int)(zval); }
#define G_RM_ADD RM_ADD(1)
#define TLBWIRED_WIREDMASK 0x3f
#define CHNL_ERR_OVERRUN 0x40
#define FORCE_BL 0x4000
#define ICON_battle_POWBlock_palette 0x29840
#define ICON_Hammer3_raster 0x2DDC0
#define ICON_badge_AttackFXB_palette 0x21C80
#define ICON_anim_coin_3_palette 0x2FAA0
#define ICON_key_card_silver_palette 0x11880
#define DPC_CLR_CMD_CTR 0x0100
#define ICON_food_KoopaLeaf_disabled_palette 0x254E0
#define RM_AA_ZB_XLU_LINE(clk) AA_EN | Z_CMP | IM_RD | CVG_DST_CLAMP | CVG_X_ALPHA | ALPHA_CVG_SEL | FORCE_BL | ZMODE_XLU | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define ICON_peach_BakingCream_disabled_raster 0x27FC0
#define ICON_unused_0F3_palette 0x22E80
#define PI_BSD_DOM1_PGS_REG (PI_BASE_REG+0x1C)
#define G_RM_AA_SUB_SURF RM_AA_SUB_SURF(1)
#define ICON_battle_PowerStar_disabled_raster 0x2BA40
#define gsSPLookAtX(l) gsDma2p( G_MOVEMEM,(l),sizeof(Light),G_MV_LIGHT,G_MVO_LOOKATX)
#define gsSPLookAtY(l) gsDma2p( G_MOVEMEM,(l),sizeof(Light),G_MV_LIGHT,G_MVO_LOOKATY)
#define ICON_key_koot_glasses_raster 0x127A0
#define RM_AA_ZB_TEX_INTER(clk) AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | CVG_X_ALPHA | ALPHA_CVG_SEL | ZMODE_INTER | TEX_EDGE | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)

#define OS_EVENT_RDB_DATA_DONE 17
#define ICON_badge_ZapTap_disabled_raster 0x1A7C0
#define ICON_unused_127_disabled_palette 0x2B5A0
#define ICON_unused_12F_palette 0x2C780
#define ERR_ALSEQOVERRUN 131
#define ICON_anim_fp_0_raster 0x2EF60
#define ICON_food_ApplePie_raster 0x2660
#define AI_VAR_NEXT_STATE varTable[7]
#define gsDPSetTileSize(t,uls,ult,lrs,lrt) gsDPLoadTileGeneric(G_SETTILESIZE, t, uls, ult, lrs, lrt)
#define ICON_key_toad_doll_raster 0xDAA0
#define G_TD_CLAMP (0 << G_MDSFT_TEXTDETAIL)
#define ICON_badge_Peekaboo_palette 0x215C0
#define CACHERR_EB 0x02000000
#define CACHERR_EC 0x40000000
#define CACHERR_ED 0x20000000
#define CACHERR_EE 0x04000000
#define CACHERR_EI 0x01000000
#define CACHERR_ER 0x80000000
#define CACHERR_ES 0x08000000
#define CACHERR_ET 0x10000000
#define G_MTX_MODELVIEW 0x00
#define ICON_food_YoshiCookie_raster 0x8060
#define AL_FX_CHORUS 3
#define DPC_STATUS_START_GCLK 0x008
#define ICON_food_Melon_disabled_raster 0x26700
#define G_SC_NON_INTERLACE 0
#define aLoadBuffer(pkt,s) { Acmd *_a = (Acmd *)pkt; _a->words.w0 = _SHIFTL(A_LOADBUFF, 24, 8); _a->words.w1 = (unsigned int)(s); }
#define D_CBUTTONS CONT_D
#define MAX_ENTITY_MODELS 256
#define C_ILT 0x4
#define gDPSetEnvColor(pkt,r,g,b,a) DPRGBColor(pkt, G_SETENVCOLOR, r,g,b,a)
#define EVT_AREA_FLAG_OFFSET 110000000
#define ICON_badge_PowerJump_palette 0x1BBC0
#define PFS_DIR_FULL 8
#define G_IM_SIZ_8b_LOAD_BLOCK G_IM_SIZ_16b
#define HES_TEMPLATE_CI_ENUM_SIZE(name,sizeX,sizeY) { hs_SetVisible hs_SetTileSize(HUD_ELEMENT_SIZE_ ##sizeX ##x ##sizeY) hs_Loop hs_SetCI(60, name) hs_Restart hs_End }
#define ICON_anim_hand_6_raster 0x2CF40
#define ICON_key_gear_lucky_star_raster 0x1FE0
#define PFS_FILE_NAME_LEN 16
#define ICON_food_Apple_disabled_raster 0x276C0
#define SP_CLR_YIELD SP_CLR_SIG0
#define ICON_badge_HPPlus_disabled_raster 0x15D80
#define _G_CC_BLENDPE ENVIRONMENT, PRIMITIVE, TEXEL0, PRIMITIVE, TEXEL0, 0, SHADE, 0
#define C_IST 0x8
#define SR_ITS 0x01000000
#define gsMoveWd(index,offset,data) gsDma1p( G_MOVEWORD, data, offset, index)
#define gsDPWord(wordhi,wordlo) gsImmp1(G_RDPHALF_1, (unsigned int)(wordhi)), gsImmp1(G_RDPHALF_2, (unsigned int)(wordlo))
#define ICON_food_KoopaLeaf_raster 0x252C0
#define RM_AA_XLU_LINE(clk) AA_EN | IM_RD | CVG_DST_CLAMP | CVG_X_ALPHA | ALPHA_CVG_SEL | FORCE_BL | ZMODE_OPA | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define gsDPParam(cmd,param) {{ _SHIFTL(cmd, 24, 8), (param) }}
#define ICON_key_koot_autograph_luigi_palette 0x11EE0
#define ICON_food_LimeCandy_disabled_raster 0x67A0
#define ICON_key_1DC210_raster 0xFF00
#define ICON_battle_FrightJar_raster 0x14040
#define ICON_badge_GroupFocus_disabled_palette 0x21820
#define ems_Restart ENTITY_MODEL_SCRIPT_OP_Restart,
#define alSeqpSetPan alSeqpSetChlPan
#define AI_STATUS_REG (AI_BASE_REG+0x0C)
#define ICON_badge_FirstAttack_disabled_raster 0x15B40
#define R_CBUTTONS CONT_F
#define ems_Draw(dlist,holdTime) ENTITY_MODEL_SCRIPT_OP_Draw, holdTime, (s32)dlist,
#define ICON_food_Melon_raster 0x26700
#define G_ENDDL 0xdf
#define ICON_unused_0E4_disabled_palette 0x20CE0
#define G_RDPTILESYNC 0xe8
#define ICON_anim_sp_small_5_raster 0x31DE0
#define ICON_food_UltraShroom_disabled_raster 0x23C40
#define DPC_CLR_TMEM_CTR 0x0040
#define gsDPTextureRectangle(xl,yl,xh,yh,tile,s,t,dsdx,dtdy) {{ (_SHIFTL(G_TEXRECT, 24, 8) | _SHIFTL(xh, 12, 12) | _SHIFTL(yh, 0, 12)), (_SHIFTL(tile, 24, 3) | _SHIFTL(xl, 12, 12) | _SHIFTL(yl, 0, 12)), }}, {{ _SHIFTL(s, 16, 16) | _SHIFTL(t, 0, 16), _SHIFTL(dsdx, 16, 16) | _SHIFTL(dtdy, 0, 16) }}
#define RM_ZB_CLD_SURF(clk) Z_CMP | IM_RD | CVG_DST_SAVE | FORCE_BL | ZMODE_XLU | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define AI_MAX_BIT_RATE 16
#define OS_CPU_COUNTER (OS_CLOCK_RATE*3/4)
#define gDPWord(pkt,wordhi,wordlo) { Gfx *_g = (Gfx *)(pkt); gImmp1(pkt, G_RDPHALF_1, (unsigned int)(wordhi)); gImmp1(pkt, G_RDPHALF_2, (unsigned int)(wordlo)); }
#define ICON_key_key_koopa_fortress_palette 0x9220
#define EVT_SUB(VAR,INT_VALUE) EVT_CMD(EVT_OP_SUB, VAR, INT_VALUE),
#define ICON_Hammer2_raster 0x2DB80
#define MAX_TRIGGERS 64
#define ICON_battle_136_disabled_palette 0x2A160
#define A_DMEMMOVE 10
#define M_AUDTASK 2
#define G_TEXTURE_GEN 0x00040000
#define OS_VI_PAL_HPN2 26
#define ICON_food_SpecialShake_raster 0x45E0
#define G_RM_AA_OPA_SURF RM_AA_OPA_SURF(1)
#define AL_HEAP_MAGIC 0x20736a73
#define __R4300_H__ 
#define ERR_OSPROFILESTART_FLAG 67
#define EXC_MOD EXC_CODE(1)
#define ICON_anim_sp_4_raster 0x31320
#define VI_BASE_REG 0x04400000
#define NO_DROPS { { F16(100), F16(0), 0, F16(0) }, }
#define G_TX_RENDERTILE 0
#define PI_BSD_DOM2_RLS_REG (PI_BASE_REG+0x30)
#define ALIGN16(val) (((val) + 0xF) & ~0xF)
#define hs_SetSizesAutoScale(size1,size2) HUD_ELEMENT_OP_SetSizesAutoScale, size1, size2,
#define VI_CTRL_PIXEL_ADV_MASK 0x01000
#define ICON_food_CakeMix_disabled_palette 0x26260
#define PFS_ID_BANK_1M 4
#define G_MAXFBZ 0x3fff
#define OS_VI_BIT_INTERLACE 0x0002
#define ICON_food_JellyShroom_raster 0x82A0
#define ICON_badge_CloseCall_palette 0x1E680
#define ICON_food_Egg_disabled_palette 0x264A0
#define ICON_key_seed_2_palette 0xC960
#define hs_Loop HUD_ELEMENT_OP_Loop,
#define ICON_anim_hand_7_raster 0x2D080
#define gSP1Quadrangle(pkt,v0,v1,v2,v3,flag) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_QUAD, 24, 8)| __gsSP1Quadrangle_w1f(v0, v1, v2, v3, flag)); _g->words.w1 = __gsSP1Quadrangle_w2f(v0, v1, v2, v3, flag); }
#define ERR_ALSEQPINVALIDPROG 121
#define gsSPBranchLessZ(dl,vtx,zval,near,far,flag) gsSPBranchLessZrg(dl, vtx, zval, near, far, flag, 0, G_MAXZ)
#define ERR_OSPISTARTDMA_PIMGR 28
#define PFS_ERR_ID_FATAL 10
#define RDRAM_0_BASE_ADDRESS (RDRAM_0_DEVICE_ID*RDRAM_LENGTH)
#define ICON_unused_0DF_raster 0x1FF80
#define RM_AA_ZB_TEX_EDGE(clk) AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | CVG_X_ALPHA | ALPHA_CVG_SEL | ZMODE_OPA | TEX_EDGE | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define ICON_anim_hand_5_raster 0x2CE00
#define GU_PARSEGBI_ROWMAJOR 1
#define EVT_DIV(VAR,INT_VALUE) EVT_CMD(EVT_OP_DIV, VAR, INT_VALUE),
#define OS_EVENT_RDB_LOG_DONE 16
#define SR_KSU_SUP 0x00000008
#define ICON_peach_BakingCleanser_raster 0x28680
#define EXC_II EXC_CODE(10)
#define GAME_APP_DATA_READY 10
#define VI_STATUS_REG (VI_BASE_REG+0x00)
#define EVT_BITWISE_OR_CONST(VAR,CONST) EVT_CMD(EVT_OP_BITWISE_OR_CONST, VAR, CONST),
#define CONFIG_BE_SHFT 15
#define va_start(AP,LASTARG) (AP = ((__gnuc_va_list) __builtin_next_arg (LASTARG)))
#define gsDPSetColor(c,d) {{ _SHIFTL(c, 24, 8), (unsigned int)(d) }}
#define ICON_food_BigCookie_raster 0x4820
#define gsSPTextureRectangleFlip(xl,yl,xh,yh,tile,s,t,dsdx,dtdy) {{(_SHIFTL(G_TEXRECTFLIP, 24, 8) | _SHIFTL(xh, 12, 12) | _SHIFTL(yh, 0, 12)), (_SHIFTL(tile, 24, 3) | _SHIFTL(xl, 12, 12) | _SHIFTL(yl, 0, 12))}}, gsImmp1(G_RDPHALF_1, (_SHIFTL(s, 16, 16) | _SHIFTL(t, 0, 16))), gsImmp1(G_RDPHALF_2, (_SHIFTL(dsdx, 16, 16) | _SHIFTL(dtdy, 0, 16)))
#define WATCHLO_VALIDMASK 0xfffffffb
#define G_PM_1PRIMITIVE (1 << G_MDSFT_PIPELINE)
#define ALIGNED(x) __attribute__((aligned(x)))
#define A_MIXER 12
#define EXC_OV EXC_CODE(12)
#define hs_SetVisible HUD_ELEMENT_OP_SetVisible,
#define TLBRAND_RANDMASK 0x3f
#define CVG_DST_SAVE 0x300
#define TLBHI_PIDMASK 0xff
#define _MODEL_H_ 
#define gsDPSetDepthSource(src) gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ZSRCSEL, 1, src)
#define PI_DMA_BUFFER_SIZE 128
#define ICON_peach_BakingSugar_raster 0x27B40
#define G_MTX_NOPUSH 0x00
#define ICON_battle_136_raster 0x29F40
#define ERR_OSVISETSPECIAL_VIMGR 44
#define es_Goto(labelId) ENTITY_SCRIPT_OP_Goto, labelId,
#define ICON_unused_08D_raster 0x13500
#define DPS_TBIST_REG (DPS_BASE_REG+0x00)
#define ICON_badge_HealthyHealthy_raster 0x225C0
#define ICON_badge_PrettyLucky_palette 0x18800
#define ICON_Hammer1_raster 0x2D940
#define VI_CTRL_SERRATE_ON 0x00040
#define OS_VI_FPAL_LAF1 45
#define OS_VI_FPAL_LAF2 49
#define RCP_IMASKSHIFT 16
#define ICON_badge_LastStand_raster 0x1E240
#define ICON_badge_FlowerFinder_disabled_palette 0x1D6E0
#define RAD_TO_BINANG(x) ((x) * (f32)(0x8000 / M_PI))
#define ALIGNSZ (sizeof(long long))
#define EVT_MAP_VAR_CUTOFF -40000000
#define ICON_food_DriedPasta_disabled_palette 0x25720
#define gsDPTileSync() gsDPNoParam(G_RDPTILESYNC)
#define ICON_food_Koopasta_palette 0x3160
#define ICON_battle_ThunderRage_palette 0x2AA40
#define ICON_key_key_peach_raster 0xFCE0
#define OS_EVENT_CART 2
#define SP_SET_SIG1 0x01000
#define SP_SET_SIG2 0x04000
#define SP_SET_SIG3 0x10000
#define SP_SET_SIG4 0x40000
#define SP_SET_SIG7 0x1000000
#define ICON_unused_0E6_palette 0x21140
#define OS_VI_FPAL_LAN1 44
#define OS_VI_FPAL_LAN2 48
#define RM_AA_TEX_TERR(clk) AA_EN | IM_RD | CVG_DST_CLAMP | CVG_X_ALPHA | ALPHA_CVG_SEL | ZMODE_OPA | TEX_EDGE | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define ICON_badge_Peekaboo_raster 0x213C0
#define ICON_battle_PleaseComeBack_palette 0x13DC0
#define ICON_food_SuperShroom_raster 0x23A00
#define R_JPAD CONT_RIGHT
#define G_DL_PUSH 0x00
#define EVT_ADDF(VAR,FLOAT_VALUE) EVT_CMD(EVT_OP_ADDF, VAR, FLOAT_VALUE),
#define ICON_anim_sp_3_raster 0x311E0
#define ICON_key_koot_empty_wallet_palette 0x12120
#define XUT_VEC (K0BASE+0x80)
#define TRUE 1
#define ICON_badge_DDownPound_raster 0x17AC0
#define ICON_badge_DizzyStomp_disabled_palette 0x18160
#define ERR_ALSEQTIME 117
#define ICON_peach_BakingMilk_disabled_raster 0x28D40
#define GU_PARSERDP_VERBOSE 1
#define G_TRI_SHADE 0xcc
#define STRINGIFY_(x) #x
#define CONT_EEPROM_BUSY 0x80
#define ICON_food_HealthyJuice_disabled_raster 0x3CE0
#define VI_CTRL_ANTIALIAS_MASK 0x00300
#define C0_WRITEI 0x2
#define C0_WRITER 0x6
#define G_DL_NOPUSH 0x01
#define IM_RD 0x40
#define RCP_STAT_PRINT rmonPrintf("current=%x start=%x end=%x dpstat=%x spstat=%x\n", IO_READ(DPC_CURRENT_REG), IO_READ(DPC_START_REG), IO_READ(DPC_END_REG), IO_READ(DPC_STATUS_REG), IO_READ(SP_STATUS_REG))
#define ERR_OSPROFILESTART_TIME 66
#define VI_H_START_REG (VI_BASE_REG+0x24)
#define SADDRMASK 0xFFFFE000
#define CACHERR_PIDX_MASK 0x00000007
#define VI_INTR_REG (VI_BASE_REG+0x0C)
#define ICON_anim_hand_4_raster 0x2CCC0
#define ICON_key_CakeIcing_palette 0x10E0
#define EVT_INDEX_OF_AREA_FLAG(v) ((v) + EVT_AREA_FLAG_OFFSET)
#define OS_NSEC_TO_CYCLES(n) (((u64)(n)*(OS_CPU_COUNTER/15625000LL))/(1000000000LL/15625000LL))
#define G_CCMUX_ENV_ALPHA 12
#define OS_IM_CART 0x00000c01
#define ICON_badge_DizzyAttack_disabled_raster 0x1D700
#define RM_AA_OPA_TERR(clk) AA_EN | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define G_CC_MODULATERGBDECALA_PRIM G_CC_MODULATEIDECALA_PRIM
#define ICON_food_LemonCandy_disabled_raster 0x6C20
#define ICON_key_Letter_raster 0x129C0
#define RDRAM_1_DEVICE_ID 1
#define D_JPAD CONT_DOWN
#define G_TRI1 0x05
#define G_TRI2 0x06
#define ICON_badge_Peekaboo_disabled_raster 0x213C0
#define __gsSP1Triangle_w1(v0,v1,v2) (_SHIFTL((v0)*2,16,8)|_SHIFTL((v1)*2,8,8)|_SHIFTL((v2)*2,0,8))
#define VI_CTRL_ANTIALIAS_MODE_2 0x00200
#define SP_IMEM_START 0x04001000
#define OS_VI_GAMMA_ON 0x0001
#define ZMODE_XLU 0x800
#define RDRAM_RAS_INTERVAL_REG (RDRAM_BASE_REG+0x18)
#define G_MDSFT_TEXTFILT 12
#define MI_SET_RDRAM 0x2000
#define ICON_badge_DodgeMaster_disabled_palette 0x156A0
#define ERR_ALSEQSYSEX 119
#define GU_PARSEGBI_NONEST 2
#define G_TX_DXT_FRAC 11
#define ICON_unused_0F1_palette 0x22A00
#define _EFFECTS_H_ 
#define ICON_key_gear_hammer_1_palette 0x1B80
#define gsSPPopMatrixN(n,num) gsDma2p( G_POPMTX,(num)*64,64,2,0)
#define G_CC_PRIMITIVE 0, 0, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE
#define AI_VAR_MELEE_HIT_TIME varTable[2]
#define G_LOAD_UCODE 0xdd
#define R_TRIG CONT_R
#define AI_BITRATE_REG (AI_BASE_REG+0x14)
#define ICON_battle_Parasol_disabled_palette 0x2BEA0
#define AI_CONTROL_DMA_OFF 0x00
#define U_JPAD CONT_UP
#define ICON_unused_12F_disabled_palette 0x2C7A0
#define G_CC_HILITERGB PRIMITIVE, SHADE, TEXEL0, SHADE, 0, 0, 0, SHADE
#define SR_KSU_USR 0x00000010
#define MAX_ENTITIES 30
#define RDRAM_1_CONFIG 0x00400
#define ICON_anim_coin_9_raster 0x30100
#define ICON_food_StrangeLeaf_palette 0x26000
#define ems_ClearFlags(flags) ENTITY_MODEL_SCRIPT_OP_ClearFlags, flags,
#define __ULTRAERROR_H__ 
#define A_RATE 0x00
#define EVT_END EVT_CMD(EVT_OP_END),
#define ICON_badge_PowerPlus_disabled_palette 0x15460
#define ICON_anim_sp_2_raster 0x310A0
#define ICON_food_HoneySuper_palette 0x5320
#define TLBLO_CACHSHIFT 3
#define G_CC_BLENDIA2 ENVIRONMENT, SHADE, COMBINED, SHADE, COMBINED, 0, SHADE, 0
#define ICON_badge_FPPlus_raster 0x195C0
#define ICON_badge_FirstAttack_disabled_palette 0x15D60
#define EVS_SetupMusic EVS_SetupMusic
#define RDRAM_REF_ROW_REG (RDRAM_BASE_REG+0x14)
#define ICON_food_HotShroom_palette 0x3A60
#define RM_ZB_XLU_SURF(clk) Z_CMP | IM_RD | CVG_DST_FULL | FORCE_BL | ZMODE_XLU | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define ICON_battle_POWBlock_raster 0x29640
#define ICON_battle_Pebble_palette 0x2B340
#define ICON_key_dojo_card_3_palette 0x10DC0
#define ERR_OSPISTARTDMA_PRI 29
#define LocalVar(INDEX) ((INDEX) - EVT_LOCAL_VAR_OFFSET)
#define gsDPLoadTextureBlock_4bS(timg,fmt,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, G_IM_SIZ_16b, 1, timg), gsDPSetTile(fmt, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadBlock(G_TX_LOADTILE, 0, 0, (((width)*(height)+3)>>2)-1,0), gsDPPipeSync(), gsDPSetTile(fmt, G_IM_SIZ_4b, ((((width)>>1)+7)>>3), 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC)
#define gDPSetTextureLUT(pkt,type) gSPSetOtherMode(pkt, G_SETOTHERMODE_H, G_MDSFT_TEXTLUT, 2, type)
#define G_MW_MATRIX 0x00
#define G_BL_CLR_MEM 1
#define WATCHLO_WTRAP 0x00000001
#define G_IM_SIZ_16b 2
#define G_LOD 0x00100000
#define ERR_OSCREATEMESGQUEUE 5
#define G_SETCONVERT 0xec
#define gSPEndDisplayList(pkt) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_ENDDL, 24, 8); _g->words.w1 = 0; }
#define ICON_anim_sp_5_palette 0x31580
#define osSpTaskStart(tp) { osSpTaskLoad((tp)); osSpTaskStartGo((tp)); }
#define ERR_OSPISTARTDMA_SIZE 33
#define PFS_ID_BROKEN 0x4
#define ICON_battle_InsecticideHerb_raster 0x14700
#define ICON_anim_hand_3_raster 0x2CB80
#define ICON_badge_SuperJump_disabled_palette 0x1BE20
#define G_IM_FMT_RGBA 0
#define ICON_key_LongLetter_raster 0x12C00
#define CAUSE_SW1 0x00000100
#define CAUSE_SW2 0x00000200
#define ICON_anim_hand_9_palette 0x2D420
#define ICON_badge_SmashCharge_palette 0x16D00
#define C_FILL 0x14
#define gDPSetPrimDepth(pkt,z,dz) gDPSetColor(pkt, G_SETPRIMDEPTH, _SHIFTL(z, 16, 16) | _SHIFTL(dz, 0, 16))
#define F3DEX_GBI_2 1
#define ERR_OSSETTIMER 76
#define ICON_battle_Pebble_disabled_palette 0x2B360
#define ICON_badge_SuperFocus_disabled_raster 0x20400
#define G_MDSFT_TEXTDETAIL 17
#define PI_BSD_DOM1_PWD_REG (PI_BASE_REG+0x18)
#define gSPDmaRead(pkt,dmem,dram,size) gSPDma_io((pkt),0,(dmem),(dram),(size))
#define ICON_key_gear_hammer_2_raster 0x1BA0
#define ICON_badge_HealthyHealthy_disabled_palette 0x227E0
#define NUMLIGHTS_4 4
#define _gsDPLoadTextureBlockTile(timg,tmem,rtile,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, siz ##_LOAD_BLOCK, 1, timg), gsDPSetTile(fmt, siz ##_LOAD_BLOCK, 0, tmem, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadBlock(G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT)-1, CALC_DXT(width, siz ##_BYTES)), gsDPPipeSync(), gsDPSetTile(fmt, siz, ((((width) * siz ##_LINE_BYTES)+7)>>3), tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(rtile, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC)
#define ICON_unused_02E_raster 0x8960
#define COLLISION_WITH_ENTITY_BIT 0x4000
#define EVT_SETF(VAR,FLOAT_VALUE) EVT_CMD(EVT_OP_SETF, VAR, FLOAT_VALUE),
#define GENEROUS_WHEN_LOW_HEART_DROPS(attempts) { { F16(20), F16(80), attempts, F16(60) }, { F16(30), F16(70), attempts, F16(50) }, { F16(50), F16(60), attempts, F16(50) }, { F16(80), F16(50), attempts, F16(40) }, { F16(100), F16(30), attempts, F16(30) }, }
#define G_RM_XLU_SURF RM_XLU_SURF(1)
#define ICON_badge_MegaHPDrain_disabled_palette 0x1CBA0
#define SP_DRAM_STACK_SIZE8 (1024)
#define C0_MAJREVMASK 0xf0
#define EVT_LOCAL_VAR_OFFSET 30000000
#define ICON_food_LifeShroom_disabled_raster 0x23E80
#define ICON_food_FriedShroom_disabled_raster 0x31A0
#define PFS_ERR_DEVICE 11
#define G_RM_AA_PCL_SURF RM_AA_PCL_SURF(1)
#define ICON_badge_AutoSmash_palette 0x17180
#define U_CBUTTONS CONT_E
#define G_MW_CLIP 0x04
#define ICON_badge_SmashCharge_disabled_palette 0x16D20
#define ICON_battle_Parasol_disabled_raster 0x2BC80
#define EVT_IF_FLAG(LVAR,RVAR) EVT_CMD(EVT_OP_IF_FLAG, LVAR, RVAR),
#define OS_NUM_EVENTS 23
#define gDPSetFillColor(pkt,d) gDPSetColor(pkt, G_SETFILLCOLOR, (d))
#define gDPLoadTextureBlock_4bS(pkt,timg,fmt,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, G_IM_SIZ_16b, 1, timg); gDPSetTile(pkt, fmt, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height)+3)>>2)-1, 0 ); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, G_IM_SIZ_4b, ((((width)>>1)+7)>>3), 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define ICON_badge_HeartFinder_palette 0x1D480
#define ICON_key_jade_raven_raster 0xE320
#define G_CC_HILITERGB2 ENVIRONMENT, COMBINED, TEXEL0, COMBINED, 0, 0, 0, SHADE
#define G_CC_HILITERGBA PRIMITIVE, SHADE, TEXEL0, SHADE, PRIMITIVE, SHADE, TEXEL0, SHADE
#define RI_WERROR_REG (RI_BASE_REG+0x1C)
#define gsDma0p(c,s,l) {{ _SHIFTL((c), 24, 8) | _SHIFTL((l), 0, 24), (unsigned int)(s) }}
#define C0_CONTEXT 4
#define M_HVQTASK 6
#define _OS_AI_H_ 
#define ICON_anim_sp_1_raster 0x30F60
#define gsDma1p(c,s,l,p) {{ (_SHIFTL((c), 24, 8) | _SHIFTL((p), 16, 8) | _SHIFTL((l), 0, 16)), (unsigned int)(s) }}
#define AL_DEFAULT_PRIORITY 5
#define ICON_key_CakeBatter_palette 0xA80
#define ICON_badge_HappyCoin_palette 0x1FF40
#define G_CC_MODULATERGBDECALA G_CC_MODULATEIDECALA
#define VI_V_CURRENT_LINE_REG VI_CURRENT_REG
#define ICON_food_Lime_raster 0x25740
#define gSetImage(pkt,cmd,fmt,siz,width,i) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(cmd, 24, 8) | _SHIFTL(fmt, 21, 3) | _SHIFTL(siz, 19, 2) | _SHIFTL((width)-1, 0, 12); _g->words.w1 = (unsigned int)(i); }
#define G_RM_AA_ZB_XLU_DECAL2 RM_AA_ZB_XLU_DECAL(2)
#define ICON_peach_BakingWater_raster 0x288C0
#define OS_VI_PAL_HPF1 23
#define OS_VI_PAL_HPF2 27
#define G_IM_SIZ_16b_LINE_BYTES G_IM_SIZ_16b_BYTES
#define ICON_battle_XBandage_disabled_raster 0x29400
#define ERR_OSSPTASKLOAD_OUT 58
#define ICON_badge_ISpy_disabled_palette 0x1DFE0
#define G_CCMUX_NOISE 7
#define ICON_key_key_red_palette 0xEB80
#define PFS_SECTOR_SIZE (PFS_INODE_SIZE_PER_PAGE/PFS_SECTOR_PER_BANK)
#define ICON_peach_BakingFlour_raster 0x28B00
#define SP_DMA_BUSY_REG (SP_BASE_REG+0x18)
#define ICON_anim_hand_2_raster 0x2CA40
#define ICON_key_koot_the_tape_palette 0x11CC0
#define OS_VI_PAL_HPN1 22
#define ICON_food_SweetShroom_disabled_raster 0x3AA0
#define G_MDSFT_COMBKEY 8
#define GU_PARSE_MEM_BLOCK 4
#define G_CULL_BACK 0x00000400
#define gDPTextureRectangle(pkt,xl,yl,xh,yh,tile,s,t,dsdx,dtdy) { Gfx *_g = (Gfx *)(pkt); if (pkt); _g->words.w0 = (_SHIFTL(G_TEXRECT, 24, 8) | _SHIFTL(xh, 12, 12) | _SHIFTL(yh, 0, 12)); _g->words.w1 = (_SHIFTL(tile, 24, 3) | _SHIFTL(xl, 12, 12) | _SHIFTL(yl, 0, 12)); _g ++; _g->words.w0 = (_SHIFTL(s, 16, 16) | _SHIFTL(t, 0, 16)); _g->words.w1 = (_SHIFTL(dsdx, 16, 16) | _SHIFTL(dtdy, 0, 16)); }
#define ICON_peach_BakingSugar_disabled_palette 0x27D60
#define CONFIG_UNCACHED 0x00000002
#define ICON_battle_RepelGel_raster 0x144C0
#define ICON_badge_PayOff_disabled_palette 0x1A0E0
#define SP_SET_YIELDED SP_SET_SIG1
#define ICON_food_NuttyCake_disabled_palette 0x7BC0
#define ICON_battle_139_disabled_palette 0x14020
#define ICON_food_MapleShroom_raster 0x7BE0
#define ERR_OSPIRAWSTARTDMA_DIR 21
#define FR_NEG_FRUSTRATIO_3 0x00000003
#define EVS_SetupFoliage EVS_SetupFoliage
#define ICON_key_star_stone_raster 0xF880
#define G_TEXTURE_GEN_LINEAR 0x00080000
#define ICON_badge_QuickChange_disabled_palette 0x20AA0
#define MAX_ITEM_ENTITIES 256
#define G_CC_MODULATEI_PRIM2 COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE
#define RDRAM_0_DEVICE_ID 0
#define ICON_badge_ShrinkSmash_palette 0x1F1C0
#define gsDPNoParam(cmd) {{ _SHIFTL(cmd, 24, 8), 0 }}
#define VIRTUAL_TO_PHYSICAL(addr) (u32)((u8*)(addr) - 0x80000000)
#define ICON_badge_SpinAttack_disabled_palette 0x1DDA0
#define ICON_food_SweetShroom_palette 0x3CA0
#define gDPSetColor(pkt,c,d) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(c, 24, 8); _g->words.w1 = (unsigned int)(d); }
#define PFS_SECTOR_PER_BANK 32
#define MAP_RODATA_PAD(n,name) const s32 N(rodata_pad_ ##name)[n] = {};
#define ALFlagFailIf(condition,flag,error) if (condition) { return; }
#define gDPScisFillRectangle(pkt,ulx,uly,lrx,lry) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_FILLRECT, 24, 8) | _SHIFTL(MAX((lrx),0), 14, 10) | _SHIFTL(MAX((lry),0), 2, 10)); _g->words.w1 = (_SHIFTL(MAX((ulx),0), 14, 10) | _SHIFTL(MAX((uly),0), 2, 10)); }
#define MESSAGE_ID(section,index) (((section << 16) + index))
#define ICON_unused_0E4_palette 0x20CC0
#define ICON_badge_AttackFXE_disabled_palette 0x21EE0
#define _AUDIO_PUBLIC_H_ 
#define ICON_badge_SSmashChg_raster 0x16D40
#define ICON_badge_RightOn_palette 0x1AE40
#define hs_SetPivot(arg0,arg1) HUD_ELEMENT_OP_SetPivot, arg0, arg1,
#define SP_STATUS_IO_FULL 0x010
#define G_MTX 0xda
#define ICON_peach_BakingWater_disabled_palette 0x28AE0
#define IS_KUSEG(x) ((u32)(x) < K0BASE)
#define ICON_badge_SuperJump_palette 0x1BE00
#define ICON_key_key_koopa_fortress_raster 0x9020
#define G_MVO_LOOKATX (0*24)
#define G_MVO_LOOKATY (1*24)
#define G_RM_OPA_CI2 RM_OPA_CI(2)
#define ICON_battle_PowerStar_palette 0x2BC40
#define EVT_RESUME_THREAD(TID) EVT_CMD(EVT_OP_RESUME_THREAD, TID),
#define gDPSetFogColor(pkt,r,g,b,a) DPRGBColor(pkt, G_SETFOGCOLOR, r,g,b,a)
#define gsSPFogPosition(min,max) gsMoveWd(G_MW_FOG, G_MWO_FOG, (_SHIFTL((128000/((max)-(min))),16,16) | _SHIFTL(((500-(min))*256/((max)-(min))),0,16)))
#define ERR_ALSEQP_POLY_VOICE 104
#define G_MDSFT_COLORDITHER 22
#define ICON_food_Melon_palette 0x26900
#define PFS_CORRUPTED 0x2
#define ICON_anim_sp_0_raster 0x30E20
#define ICON_badge_FPPlus_disabled_palette 0x197E0
#define ICON_badge_ZapTap_palette 0x1A9C0
#define ICON_badge_MoneyMoney_raster 0x1A100
#define gDPTileSync(pkt) gDPNoParam(pkt, G_RDPTILESYNC)
#define ICON_key_koot_book_palette 0x11AA0
#define ICON_food_EggMissile_disabled_palette 0x5C40
#define TLBPGMASK_4K 0x0
#define _OS_GBPAK_H_ 
#define gDPNoOpTag(pkt,tag) gDPParam(pkt, G_NOOP, tag)
#define IS_KSEG0(x) ((u32)(x) >= K0BASE && (u32)(x) < K1BASE)
#define CAUSE_IP4 0x00000800
#define CAUSE_IP6 0x00002000
#define ICON_battle_136_palette 0x2A140
#define gsDPSetPrimDepth(z,dz) gsDPSetColor(G_SETPRIMDEPTH, _SHIFTL(z, 16, 16) | _SHIFTL(dz, 0, 16))
#define ICON_badge_PowerSmash_raster 0x1C080
#define ICON_food_Apple_disabled_palette 0x278E0
#define ICON_unused_02C_disabled_raster 0x84E0
#define ICON_battle_MagicMirror_raster 0x2BEC0
#define K1_TO_K0(x) ((u32)(x)&0x9FFFFFFF)
#define ICON_anim_hand_1_raster 0x2C900
#define G_MWO_SEGMENT_7 0x07
#define ERR_OSVISETSPECIAL_VALUE 43
#define ICON_battle_HustleDrink_disabled_palette 0x29AA0
#define A_CONTINUE 0x00
#define EVT_PLAY_EFFECT3(effect,subtype,a) EVT_CALL(PlayEffect, effect, subtype, a, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define ICON_peach_BakingFlour_disabled_raster 0x28B00
#define G_RM_AA_OPA_SURF2 RM_AA_OPA_SURF(2)
#define EVT_PLAY_EFFECT9(effect,subtype,a,b,c,d,e,f,g) EVT_CALL(PlayEffect, effect, subtype, a, b, c, d, e, f, g, 0, 0, 0, 0, 0)
#define ICON_battle_StoneCap_palette 0x2B7C0
#define ICON_badge_FlowerFinder_disabled_raster 0x1D4C0
#define ICON_Boots3_palette 0x2E680
#define ICON_anim_shimmer_4_palette 0x30360
#define ICON_badge_TripleDip_disabled_raster 0x1B540
#define OS_VI_FPAL_LPN2 46
#define EVT_EXIT_SINGLE_DOOR(exitIdx,map,entryIdx,colliderID,modelID,swingDir) { EVT_SET_GROUP(EVT_GROUP_1B) EVT_CALL(DisablePlayerInput, TRUE) EVT_SET(LVar0, exitIdx) EVT_SET(LVar1, colliderID) EVT_SET(LVar2, modelID) EVT_SET(LVar3, swingDir) EVT_EXEC(ExitSingleDoor) EVT_WAIT(17) EVT_CALL(GotoMap, EVT_PTR(map), entryIdx) EVT_WAIT(100) EVT_RETURN EVT_END }
#define PFS_ID_PAGE PFS_ONE_PAGE * 0
#define ICON_badge_FlowerFanatic_disabled_palette 0x1B9A0
#define ICON_badge_DefendPlus_palette 0x19E80
#define gsSPBranchList(dl) gsDma1p( G_DL,dl,0,G_DL_NOPUSH)
#define PI_DOM2_ADDR1 0x05000000
#define PI_DOM2_ADDR2 0x08000000
#define es_Jump(script) ENTITY_SCRIPT_OP_Jump, (s32)script,
#define ICON_badge_PrettyLucky_raster 0x18600
#define G_ACMUX_TEXEL0 1
#define G_ACMUX_TEXEL1 2
#define ICON_key_koot_glasses_palette 0x129A0
#define ICON_key_vase_palette 0xA540
#define SI_BASE_REG 0x04800000
#define LEO_TRACK_MODE 2
#define ICON_key_koot_red_jar_palette 0xF200
#define OS_STATE_WAITING 8
#define ICON_key_boo_record_palette 0xB200
#define OS_VI_BIT_HIRES 0x0200
#define PFS_WRITTEN 2
#define ERR_OSGETREGIONBUFSIZE 56
#define ICON_key_gear_hammer_3_raster 0x1DC0
#define ICON_badge_SSmashChg_palette 0x16F40
#define CONFIG_DC_SHFT 6
#define G_RM_ZB_XLU_DECAL2 RM_ZB_XLU_DECAL(2)
#define TLBHI_VPN2MASK 0xffffe000
#define EVT_INDEX_OF_ARRAY_FLAG(v) ((v) + EVT_ARRAY_FLAG_OFFSET)
#define CAUSE_EXCSHIFT 2
#define ICON_key_CakeBatter_raster 0x880
#define ICON_key_CakeDone_raster 0x220
#define gsDPSetFillColor(d) gsDPSetColor(G_SETFILLCOLOR, (d))
#define gsSPForceMatrix(mptr) gsDma2p(G_MOVEMEM,(mptr),sizeof(Mtx),G_MV_MATRIX,0), gsMoveWd(G_MW_FORCEMTX,0,0x00010000)
#define OS_VI_NTSC_HAF1 11
#define gDPLoadMultiBlockS(pkt,timg,tmem,rtile,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, siz ##_LOAD_BLOCK, 1, timg); gDPSetTile(pkt, fmt, siz ##_LOAD_BLOCK, 0, tmem, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT)-1,0); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, siz, (((width) * siz ##_LINE_BYTES)+7)>>3, tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, rtile, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define gsSetImage(cmd,fmt,siz,width,i) {{ _SHIFTL(cmd, 24, 8) | _SHIFTL(fmt, 21, 3) | _SHIFTL(siz, 19, 2) | _SHIFTL((width)-1, 0, 12), (unsigned int)(i) }}
#define G_CCMUX_K4 7
#define G_CCMUX_K5 15
#define alCSPSetChannelPriority alCSPSetChlPriority
#define SP_CLR_SSTEP 0x00020
#define AL_STOPPED 0
#define ICON_food_DriedShroom_disabled_raster 0x240C0
#define UNK_FUN_PTR(name) void(*name)(void)
#define CONT_CARD_PULL 0x02
#define G_RM_ZB_OVL_SURF2 RM_ZB_OVL_SURF(2)
#define MI_MODE_REG MI_INIT_MODE_REG
#define ICON_unused_02C_raster 0x84E0
#define OS_EVENT_AI 6
#define CONT_TYPE_NORMAL 0x0005
#define _HEADER_SYMBOLS_H_ 
#define ICON_unused_0F3_raster 0x22C80
#define ICON_food_FrozenFries_disabled_palette 0x7740
#define K0_TO_PHYS(x) ((u32)(x)&0x1FFFFFFF)
#define OS_EVENT_DP 9
#define AL_DEFAULT_FXMIX 0
#define G_CC_MODULATERGB_PRIM2 G_CC_MODULATEI_PRIM2
#define OS_VI_MPAL_HAF1 39
#define ICON_key_CakeDone_palette 0x420
#define DPC_BASE_REG 0x04100000
#define ERR_ALHEAPFIRSTBLOCK 127
#define ICON_food_HotShroom_raster 0x3860
#define G_IM_SIZ_32b 3
#define OS_STATE_RUNNABLE 2
#define PHYS_TO_K1(x) ((u32)(x)|0xA0000000)
#define alSeqpSetFXMix alSeqpSetChlFXMix
#define LOAD_INTEGRATOR_FALL(ptr) (ptr)[0] = 0.11430f; (ptr)[1] = -0.28710f; (ptr)[2] = -0.18230f; (ptr)[3] = 0.01152f;
#define EVT_CASE_NE(RVAR) EVT_CMD(EVT_OP_CASE_NE, RVAR),
#define ICON_key_key_blue_raster 0xEBC0
#define OS_VI_MPAL_HAN1 38
#define gDPSetPrimColor(pkt,m,l,r,g,b,a) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_SETPRIMCOLOR, 24, 8) | _SHIFTL(m, 8, 8) | _SHIFTL(l, 0, 8)); _g->words.w1 = (_SHIFTL(r, 24, 8) | _SHIFTL(g, 16, 8) | _SHIFTL(b, 8, 8) | _SHIFTL(a, 0, 8)); }
#define G_CULLDL 0x03
#define _NS(x,y,z) x ## _ ## y ## z
#define EVT_EXIT_WALK_FIXED(walkDistance,exitIdx,map,entryIdx) { EVT_SET_GROUP(EVT_GROUP_1B) EVT_CALL(DisablePlayerInput, TRUE) EVT_CALL(UseExitHeading, walkDistance, exitIdx) EVT_EXEC(ExitWalk) EVT_CALL(GotoMap, EVT_PTR(map), entryIdx) EVT_WAIT(100) EVT_RETURN EVT_END }
#define ICON_key_TealLetter_disabled_palette 0x13060
#define ICON_food_StrangeCake_disabled_raster 0x70A0
#define ICON_anim_hand_0_raster 0x2C7C0
#define OS_EVENT_PI 8
#define ICON_badge_SJumpChg_palette 0x17840
#define ICON_badge_Kaiden_disabled_raster 0x20640
#define GENEROUS_WHEN_LOW_FLOWER_DROPS(attempts) { { F16(20), F16(70), attempts, F16(50) }, { F16(30), F16(60), attempts, F16(50) }, { F16(50), F16(50), attempts, F16(40) }, { F16(80), F16(40), attempts, F16(40) }, { F16(100), F16(30), attempts, F16(40) }, }
#define RAMROM_BUF_SIZE (4096)
#define ERR_ALCSEQZEROSTATUS 128
#define AL_PHASE_NOTEON 0
#define ICON_unused_0D6_palette 0x1ED40
#define OS_EVENT_SI 5
#define G_IM_SIZ_4b_TILE_BYTES G_IM_SIZ_4b_BYTES
#define OS_EVENT_SP 4
#define OVERRIDE_MOVEMENT_SPEED(speed) ((s32)(speed * 32767))
#define DPC_STATUS_START_VALID 0x400
#define EVT_SET_PRIORITY(PRIORITY) EVT_CMD(EVT_OP_SET_PRIORITY, PRIORITY),
#define DPS_TBIST_CLEAR 0x04
#define OS_EVENT_VI 7
#define ICON_unused_02C_disabled_palette 0x8700
#define ICON_battle_DizzyDial_disabled_palette 0x29F20
#define gDPSetAlphaCompare(pkt,type) gSPSetOtherMode(pkt, G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 2, type)
#define OS_PM_64K 0x001e000
#define CONT_TYPE_MOUSE 0x0002
#define ICON_key_1DC870_palette 0x10760
#define K1BASE 0xA0000000
#define VI_BURST_REG (VI_BASE_REG+0x14)
#define SP_DRAM_ADDR_REG (SP_BASE_REG+0x04)
#define G_TT_RGBA16 (2 << G_MDSFT_TEXTLUT)
#define ICON_badge_DoubleDip_raster 0x16200
#define ICON_badge_AttackFXD_disabled_raster 0x21840
#define G_RM_AA_XLU_SURF2 RM_AA_XLU_SURF(2)
#define TRANSPARENT_UNION 
#define SR_KSU_MASK 0x00000018
#define ICON_battle_ThunderRage_raster 0x2A840
#define ICON_badge_FlowerSaver_raster 0x1B300
#define DPC_CLR_CLOCK_CTR 0x0200
#define G_RM_AA_ZB_TEX_EDGE RM_AA_ZB_TEX_EDGE(1)
#define LocalFlag(INDEX) ((INDEX) - EVT_LOCAL_FLAG_OFFSET)
#define ICON_anim_sp_small_5_palette 0x31E00
#define BSS static
#define OS_MESG_TYPE_BASE (10)
#define ICON_badge_MegaRush_disabled_raster 0x19800
#define gsDPSetScissor(mode,ulx,uly,lrx,lry) {{ _SHIFTL(G_SETSCISSOR, 24, 8) | _SHIFTL((int)((float)(ulx)*4.0F), 12, 12) | _SHIFTL((int)((float)(uly)*4.0F), 0, 12), _SHIFTL(mode, 24, 2) | _SHIFTL((int)((float)(lrx)*4.0F), 12, 12) | _SHIFTL((int)((float)(lry)*4.0F), 0, 12) }}
#define ICON_battle_StoneCap_disabled_palette 0x2B7E0
#define ICON_unused_0D7_palette 0x1EF80
#define G_RM_AA_OPA_TERR2 RM_AA_OPA_TERR(2)
#define ERR_OSPISTARTDMA_DEVADDR 31
#define gSPLoadUcodeL(pkt,ucode) gSPLoadUcode((pkt), OS_K0_TO_PHYSICAL(& ##ucode ##TextStart), OS_K0_TO_PHYSICAL(& ##ucode ##DataStart))
#define ICON_anim_sp_small_6_raster 0x31E20
#define ICON_food_TastyTonic_raster 0x24300
#define MAP_ID_MAX_LEN 7
#define ERR_OSSPTASKLOAD_YIELD 60
#define ICON_food_DeluxeFeast_disabled_raster 0x43A0
#define PI_RD_LEN_REG (PI_BASE_REG+0x08)
#define RAMROM_MSG_SIZE (RAMROM_BUF_SIZE*6)
#define ICON_anim_coin_5_raster 0x2FC00
#define ICON_battle_SleepySheep_disabled_palette 0x293E0
#define C0_READI 0x1
#define ICON_battle_ShootingStar_raster 0x2ACC0
#define A_RIGHT 0x00
#define gsSPInsertMatrix(where,num) ERROR!! gsSPInsertMatrix is no longer supported.
#define ICON_food_FriedEgg_disabled_raster 0x5C60
#define ICON_unused_0E5_palette 0x20F00
#define ICON_badge_PDownDUp_disabled_palette 0x1D260
#define ICON_badge_HealthyHealthy_palette 0x227C0
#define EVT_FBUF_READ1(VAR) EVT_CMD(EVT_OP_FBUF_READ1, VAR),
#define EVT_FBUF_READ2(VAR1,VAR2) EVT_CMD(EVT_OP_FBUF_READ2, VAR1, VAR2),
#define EVT_FBUF_READ3(VAR1,VAR2,VAR3) EVT_CMD(EVT_OP_FBUF_READ3, VAR1, VAR2, VAR3),
#define EVT_FBUF_READ4(VAR1,VAR2,VAR3,VAR4) EVT_CMD(EVT_OP_FBUF_READ4, VAR1, VAR2, VAR3, VAR4),
#define ICON_key_dictionary_palette 0xC0E0
#define QUART(x) ((x) * (x) * (x) * (x))
#define PFS_INITIALIZED 0x1
#define ICON_food_HoneyShroom_palette 0x60A0
#define ICON_food_WhackasBump_palette 0x27680
#define AI_MIN_BIT_RATE 2
#define Z_TRIG CONT_G
#define ICON_key_mystery_note_palette 0xC300
#define PFS_ONE_PAGE 8
#define aSaveBuffer(pkt,s) { Acmd *_a = (Acmd *)pkt; _a->words.w0 = _SHIFTL(A_SAVEBUFF, 24, 8); _a->words.w1 = (unsigned int)(s); }
#define ICON_key_crystal_ball_raster 0x11240
#define aSetLoop(pkt,a) { Acmd *_a = (Acmd *)pkt; _a->words.w0 = _SHIFTL(A_SETLOOP, 24, 8); _a->words.w1 = (unsigned int)(a); }
#define ICON_battle_Pebble_raster 0x2B140
#define G_TF_POINT (0 << G_MDSFT_TEXTFILT)
#define RAMROM_USER_DATA_SIZE (RAMROM_MSG_SIZE-RAMROM_MSG_HDR_SIZE)
#define gDPSetCombine(pkt,muxs0,muxs1) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_SETCOMBINE, 24, 8) | _SHIFTL(muxs0, 0, 24); _g->words.w1 = (unsigned int)(muxs1); }
#define ICON_anim_star_piece_2_raster 0x30840
#define ICON_badge_SJumpChg_disabled_palette 0x17860
#define ERR_OSPROFILEINIT_ALN 63
#define gSPDisplayList(pkt,dl) gDma1p(pkt,G_DL,dl,0,G_DL_PUSH)
#define DEF_DIR_PAGES 2
#define ICON_badge_SpinSmash_disabled_raster 0x14DC0
#define FLAGS_HASH 8
#define OS_IM_ALL 0x003fff01
#define ICON_badge_AttackFXC_disabled_palette 0x22120
#define PFS_ERR_NO_GBCART 12
#define gSPDma_io(pkt,flag,dmem,dram,size) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_DMA_IO,24,8)|_SHIFTL((flag),23,1)| _SHIFTL((dmem)/8,13,10)|_SHIFTL((size)-1,0,12); _g->words.w1 = (unsigned int)(dram); }
#define EVT_BUF_READ4(VAR1,VAR2,VAR3,VAR4) EVT_CMD(EVT_OP_BUF_READ4, VAR1, VAR2, VAR3, VAR4),
#define SP_CLR_INTR 0x00008
#define EVT_CASE_FLAG(RVAR) EVT_CMD(EVT_OP_CASE_FLAG, RVAR),
#define ICON_badge_MegaJump_disabled_raster 0x1BE40
#define PI_BSD_DOM1_LAT_REG (PI_BASE_REG+0x14)
#define ICON_battle_InsecticideHerb_disabled_raster 0x14700
#define aInterleave(pkt,l,r) { Acmd *_a = (Acmd *)pkt; _a->words.w0 = _SHIFTL(A_INTERLEAVE, 24, 8); _a->words.w1 = _SHIFTL(l, 16, 16) | _SHIFTL(r, 0, 16); }
#define ICON_badge_SleepStomp_disabled_raster 0x168C0
#define ICON_food_JellyPop_disabled_raster 0x6E60
#define __GNUC_VA_LIST 
#define ICON_key_key_tubba_castle_palette 0x9660
#define ICON_key_koot_autograph_merluvlee_palette 0x12340
#define G_CC_TRILERP TEXEL1, TEXEL0, LOD_FRACTION, TEXEL0, TEXEL1, TEXEL0, LOD_FRACTION, TEXEL0
#define gDPSetCombineLERP(pkt,a0,b0,c0,d0,Aa0,Ab0,Ac0,Ad0,a1,b1,c1,d1,Aa1,Ab1,Ac1,Ad1) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_SETCOMBINE, 24, 8) | _SHIFTL(GCCc0w0(G_CCMUX_ ##a0, G_CCMUX_ ##c0, G_ACMUX_ ##Aa0, G_ACMUX_ ##Ac0) | GCCc1w0(G_CCMUX_ ##a1, G_CCMUX_ ##c1), 0, 24); _g->words.w1 = (unsigned int)(GCCc0w1(G_CCMUX_ ##b0, G_CCMUX_ ##d0, G_ACMUX_ ##Ab0, G_ACMUX_ ##Ad0) | GCCc1w1(G_CCMUX_ ##b1, G_ACMUX_ ##Aa1, G_ACMUX_ ##Ac1, G_CCMUX_ ##d1, G_ACMUX_ ##Ab1, G_ACMUX_ ##Ad1)); }
#define SHT_MINV 3.051851e-05
#define ICON_badge_ISpy_disabled_raster 0x1DDC0
#define _MESSAGES_H_ 
#define ICON_key_key_ruins_palette 0x9440
#define ICON_food_JellyUltra_disabled_palette 0x2F40
#define OS_YIELD_AUDIO_SIZE 0x400
#define ICON_key_dojo_card_5_palette 0x11220
#define ICON_anim_sp_7_palette 0x31800
#define ICON_unused_0DF_palette 0x20180
#define TLBHI_NPID 255
#define es_SetFlags(flags) ENTITY_SCRIPT_OP_SetFlags, flags,
#define gsSPLoadUcodeEx(uc_start,uc_dstart,uc_dsize) {{ _SHIFTL(G_RDPHALF_1,24,8), (unsigned int)(uc_dstart), }}, {{ _SHIFTL(G_LOAD_UCODE,24,8)| _SHIFTL((int)(uc_dsize)-1,0,16), (unsigned int)(uc_start), }}
#define OS_MAJOR_VERSION "2.0K"
#define gsDPLoadBlock(tile,uls,ult,lrs,dxt) {{ (_SHIFTL(G_LOADBLOCK, 24, 8) | _SHIFTL(uls, 12, 12) | _SHIFTL(ult, 0, 12)), (_SHIFTL(tile, 24, 3) | _SHIFTL((MIN(lrs,G_TX_LDBLK_MAX_TXL)), 12, 12) | _SHIFTL(dxt, 0, 12)) }}
#define Z_UPD 0x20
#define ApiStatus_FINISH 255
#define ICON_food_StrangeLeaf_raster 0x25E00
#define AI_DACRATE_REG (AI_BASE_REG+0x10)
#define EVT_END_CASE_GROUP EVT_CMD(EVT_OP_END_CASE_GROUP),
#define ICON_anim_fp_2_raster 0x2F3A0
#define ICON_anim_sp_small_7_palette 0x31E80
#define HOST_PRINTF_ACK 6
#define hs_SetRGBA(time,image) HUD_ELEMENT_OP_SetRGBA, time, (s32)image,
#define TLBLO_UNCACHED 0x10
#define OS_PRIORITY_MAX 255
#define G_MOVEWORD 0xdb
#define G_DEPTOZSrg(zval,near,far,flag,zmin,zmax) (((unsigned int)FTOFIX32(((flag) == G_BZ_PERSP ? (1.0f-(float)(near)/(float)(zval)) / (1.0f-(float)(near)/(float)(far )) : ((float)(zval) - (float)(near)) / ((float)(far ) - (float)(near))))) * (((int)((zmax) - (zmin)))&~1) + (int)FTOFIX32(zmin))
#define ICON_anim_coin_4_raster 0x2FAC0
#define ICON_badge_MoneyMoney_disabled_raster 0x1A100
#define G_SETOTHERMODE_H 0xe3
#define SADDR_SHIFT 4
#define ICON_anim_fp_2_palette 0x2F5A0
#define ICON_anim_shimmer_1_raster 0x30280
#define EVT_EXIT_DOUBLE_DOOR(exitIdx,map,entryIdx,colliderID,leftDoorModelID,rightDoorModelID) { EVT_SET_GROUP(EVT_GROUP_1B) EVT_CALL(DisablePlayerInput, TRUE) EVT_SET(LVar0, exitIdx) EVT_SET(LVar1, colliderID) EVT_SET(LVar2, leftDoorModelID) EVT_SET(LVar3, rightDoorModelID) EVT_EXEC(ExitDoubleDoor) EVT_WAIT(17) EVT_CALL(GotoMap, EVT_PTR(map), entryIdx) EVT_WAIT(100) EVT_RETURN EVT_END }
#define SP_SET_HALT 0x00002
#define EXC_RADE EXC_CODE(4)
#define ICON_food_IcedPotato_raster 0x26B80
#define OS_EVENT_CPU_BREAK 10
#define ICON_food_Lemon_disabled_palette 0x25BA0
#define ICON_badge_ChillOut_palette 0x1A540
#define gsDPSetPrimColor(m,l,r,g,b,a) {{ (_SHIFTL(G_SETPRIMCOLOR, 24, 8) | _SHIFTL(m, 8, 8) | _SHIFTL(l, 0, 8)), (_SHIFTL(r, 24, 8) | _SHIFTL(g, 16, 8) | _SHIFTL(b, 8, 8) | _SHIFTL(a, 0, 8)) }}
#define ERR_OSGETREGIONBUFCOUNT 55
#define OS_MESG_TYPE_LOOPBACK (OS_MESG_TYPE_BASE+0)
#define RDRAM_MIN_INTERVAL_REG (RDRAM_BASE_REG+0x1c)
#define HOST_LOG_ACK 8
#define DPC_STATUS_PIPE_BUSY 0x020
#define SP_STATUS_YIELDED SP_STATUS_SIG1
#define gSPSprite2DBase(pkt,s) gDma1p(pkt, G_SPRITE2D_BASE, s, sizeof(uSprite), 0)
#define ICON_anim_shimmer_2_palette 0x302E0
#define ICON_battle_VoltShroom_disabled_palette 0x2BA20
#define ICON_badge_AutoMultibounce_raster 0x17D00
#define ERR_OSPISTARTDMA_RANGE 34
#define OS_IM_AI 0x00040401
#define G_NOOP 0x00
#define EVT_AREA_BYTE_CUTOFF -140000000
#define ICON_key_kooper_shell_raster 0x9CE0
#define ICON_badge_HammerThrow_disabled_palette 0x183A0
#define ERR_OSCREATETHREAD_PRI 2
#define G_RM_AA_ZB_XLU_LINE RM_AA_ZB_XLU_LINE(1)
#define G_CD_DISABLE (3 << G_MDSFT_RGBDITHER)
#define K0SIZE 0x20000000
#define G_MW_PERSPNORM 0x0e
#define G_CCMUX_CENTER 6
#define ERR_OSPIWRITEIO 27
#define G_MWO_CLIP_RNX 0x04
#define G_BL_A_FOG 1
#define OS_GBPAK_GBCART_PULL 0x40
#define PANIC() while (TRUE) {}
#define ICON_anim_sp_small_7_raster 0x31E60
#define OS_PRIORITY_RMON 250
#define ICON_key_boo_weight_palette 0xB420
#define ZMODE_INTER 0x400
#define ICON_food_BoiledEgg_palette 0x8020
#define gsSPTextureL(s,t,level,xparam,tile,on) {{ (_SHIFTL(G_TEXTURE,24,8) | _SHIFTL((xparam),16,8) | _SHIFTL((level),11,3) | _SHIFTL((tile),8,3) | _SHIFTL((on),1,7)), (_SHIFTL((s),16,16) | _SHIFTL((t),0,16)) }}
#define G_CC_MODULATERGBA2 G_CC_MODULATEIA2
#define PFS_BANK_LAPPED_BY 8
#define hs_SetTexelOffset(x,y) HUD_ELEMENT_OP_SetTexelOffset, x, y,
#define ICON_key_book_cook_palette 0xE300
#define ICON_food_YummyMeal_raster 0x4160
#define ICON_badge_HPPlus_raster 0x15D80
#define ICON_badge_HPDrain_palette 0x19100
#define GU_BLINKRDP_EXTRACT 2
#define ICON_food_HotShroom_disabled_raster 0x3860
#define ICON_unused_02D_palette 0x8920
#define ICON_key_boo_portrait_palette 0xB640
#define ERR_OSTHPROFILEREADTIME_FLAG 140
#define DCACHE_LINEMASK (DCACHE_LINESIZE-1)
#define AL_HEAP_INIT 0
#define PFS_MOTOR_INITIALIZED 0x8
#define ICON_badge_SuperSmash_disabled_palette 0x1C4E0
#define gsDPSetTextureImage(f,s,w,i) gsSetImage(G_SETTIMG, f, s, w, i)
#define AI_STATUS_DMA_BUSY 0x40000000
#define ICON_battle_SnowmanDoll_disabled_palette 0x2A820
#define NOTE_OFF_ERR_MASK 0x02
#define MAX_MODELS 256
#define AL_DEFAULT_VOICE 0
#define ICON_food_ShroomCake_disabled_palette 0x3600
#define ICON_food_DriedFruit_disabled_palette 0x25DE0
#define ALPHA_CVG_SEL 0x2000
#define ICON_food_BigCookie_palette 0x4A20
#define G_POPMTX 0xd8
#define ICON_food_MapleUltra_raster 0x2AE0
#define ICON_food_HoneySuper_disabled_palette 0x5340
#define ICON_food_HoneySyrup_disabled_palette 0x26FE0
#define gsDPSetRenderMode(c0,c1) gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_RENDERMODE, 29, (c0) | (c1))
#define UT_VEC K0BASE
#define ICON_badge_FeelingFine_disabled_palette 0x18A60
#define AL_CMIDI_CNTRL_LOOPSTART 102
#define _OS_PI_H_ 
#define ICON_key_CakeBaked_raster 0x440
#define ICON_anim_coin_3_raster 0x2F980
#define gDPSetBlendMask(pkt,mask) gDPNoOp(pkt)
#define THPROF_IDMAX 64
#define DPC_END_REG (DPC_BASE_REG+0x04)
#define PAL_BIN u16
#define hs_SetCI(time,name) HUD_ELEMENT_OP_SetCI, time, (s32)name ##_png, (s32)name ##_pal,
#define ICON_badge_ShrinkStomp_raster 0x1F200
#define BOWTIE_VAL 0
#define G_RM_AA_ZB_OPA_INTER2 RM_AA_ZB_OPA_INTER(2)
#define ICON_food_StinkyHerb_disabled_palette 0x26B60
#define ICON_anim_fp_0_palette 0x2F160
#define _EVT_H_ 
#define gDPSetMaskImage(pkt,i) gDPSetDepthImage(pkt, i)
#define G_TRI_TXTR_ZBUFF 0xcb
#define gsSPDma_io(flag,dmem,dram,size) {{ _SHIFTL(G_DMA_IO,24,8)|_SHIFTL((flag),23,1)| _SHIFTL((dmem)/8,13,10)|_SHIFTL((size)-1,0,12), (unsigned int)(dram) }}
#define ICON_battle_VoltShroom_raster 0x2B800
#define ICON_unused_02D_disabled_raster 0x8720
#define ICON_peach_BakingEgg_disabled_raster 0x27D80
#define ICON_key_1DC210_palette 0x10100
#define ICON_key_CakeMix_raster 0xCC0
#define G_CYC_FILL (3 << G_MDSFT_CYCLETYPE)
#define START_BUTTON CONT_START
#define AreaFlag(INDEX) ((INDEX) - EVT_AREA_FLAG_OFFSET)
#define osInitialize() { __osInitialize_common(); __osInitialize_autodetect(); }
#define ICON_unused_12D_disabled_palette 0x2C320
#define C0_IMPMASK 0xff00
#define G_CC_SHADEDECALA 0, 0, 0, SHADE, 0, 0, 0, TEXEL0
#define ICON_key_LongLetter_palette 0x12E00
#define G_FILLRECT 0xf6
#define FR_NEG_FRUSTRATIO_2 0x00000002
#define FR_NEG_FRUSTRATIO_4 0x00000004
#define FR_NEG_FRUSTRATIO_6 0x00000006
#define ICON_badge_SuperFocus_palette 0x20600
#define ICON_food_IcedPotato_disabled_palette 0x26DA0
#define G_CD_ENABLE G_CD_NOISE
#define ICON_food_MapleSyrup_palette 0x27200
#define ICON_key_ruins_stone_pyramid_palette 0xA760
#define ICON_food_LemonCandy_raster 0x6C20
#define ICON_badge_Kaiden_raster 0x20640
#define ICON_food_ApplePie_palette 0x2860
#define ICON_food_MapleUltra_disabled_palette 0x2D00
#define ICON_battle_SleepySheep_raster 0x291C0
#define RAMROM_APP_WRITE_ADDR (RAMROM_MSG_ADDR + (1*RAMROM_BUF_SIZE))
#define G_RM_AA_ZB_TEX_INTER RM_AA_ZB_TEX_INTER(1)
#define ICON_badge_AutoMultibounce_disabled_palette 0x17F20
#define PADDRMASK 0xFFFFFF00
#define OS_GBPAK_POWER_OFF 0x00
#define AI_VAR_MELEE_MISS_TIME varTable[3]
#define ICON_food_Spaghetti_disabled_raster 0x57E0
#define gDPSetDepthSource(pkt,src) gSPSetOtherMode(pkt, G_SETOTHERMODE_L, G_MDSFT_ZSRCSEL, 1, src)
#define CAUSE_BD 0x80000000
#define VI_LEAP_REG (VI_BASE_REG+0x20)
#define _gsDPLoadTextureBlock_4b(timg,tmem,fmt,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, G_IM_SIZ_16b, 1, timg), gsDPSetTile(fmt, G_IM_SIZ_16b, 0, tmem, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadBlock(G_TX_LOADTILE, 0, 0, (((width)*(height)+3)>>2)-1, CALC_DXT_4b(width)), gsDPPipeSync(), gsDPSetTile(fmt, G_IM_SIZ_4b, ((((width)>>1)+7)>>3), tmem, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC)
#define GCCc0w0(saRGB0,mRGB0,saA0,mA0) (_SHIFTL((saRGB0), 20, 4) | _SHIFTL((mRGB0), 15, 5) | _SHIFTL((saA0), 12, 3) | _SHIFTL((mA0), 9, 3))
#define GCCc0w1(sbRGB0,aRGB0,sbA0,aA0) (_SHIFTL((sbRGB0), 28, 4) | _SHIFTL((aRGB0), 15, 3) | _SHIFTL((sbA0), 12, 3) | _SHIFTL((aA0), 9, 3))
#define ICON_key_CakeIcing_raster 0xEE0
#define gImmp21(pkt,c,p0,p1,dat) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL((c), 24, 8) | _SHIFTL((p0), 8, 16) | _SHIFTL((p1), 0, 8)); _g->words.w1 = (unsigned int) (dat); }
#define CONFIG_EC_1_1 0x6
#define ICON_peach_BakingWater_disabled_raster 0x288C0
#define ICON_key_koot_autograph_luigi_raster 0x11CE0
#define OS_FLAG_CPU_BREAK 1
#define G_CC_BLENDIDECALA ENVIRONMENT, SHADE, TEXEL0, SHADE, 0, 0, 0, TEXEL0
#define ICON_anim_sp_3_palette 0x31300
#define gSPSetLights0(pkt,name) { gSPNumLights(pkt,NUMLIGHTS_0); gSPLight(pkt,&name.l[0],1); gSPLight(pkt,&name.a,2); }
#define gSPSetLights1(pkt,name) { gSPNumLights(pkt,NUMLIGHTS_1); gSPLight(pkt,&name.l[0],1); gSPLight(pkt,&name.a,2); }
#define gSPSetLights2(pkt,name) { gSPNumLights(pkt,NUMLIGHTS_2); gSPLight(pkt,&name.l[0],1); gSPLight(pkt,&name.l[1],2); gSPLight(pkt,&name.a,3); }
#define gSPSetLights4(pkt,name) { gSPNumLights(pkt,NUMLIGHTS_4); gSPLight(pkt,&name.l[0],1); gSPLight(pkt,&name.l[1],2); gSPLight(pkt,&name.l[2],3); gSPLight(pkt,&name.l[3],4); gSPLight(pkt,&name.a,5); }
#define gSPSetLights5(pkt,name) { gSPNumLights(pkt,NUMLIGHTS_5); gSPLight(pkt,&name.l[0],1); gSPLight(pkt,&name.l[1],2); gSPLight(pkt,&name.l[2],3); gSPLight(pkt,&name.l[3],4); gSPLight(pkt,&name.l[4],5); gSPLight(pkt,&name.a,6); }
#define gSPSetLights7(pkt,name) { gSPNumLights(pkt,NUMLIGHTS_7); gSPLight(pkt,&name.l[0],1); gSPLight(pkt,&name.l[1],2); gSPLight(pkt,&name.l[2],3); gSPLight(pkt,&name.l[3],4); gSPLight(pkt,&name.l[4],5); gSPLight(pkt,&name.l[5],6); gSPLight(pkt,&name.l[6],7); gSPLight(pkt,&name.a,8); }
#define ICON_food_PotatoSalad_disabled_palette 0x7980
#define alCSPGetChannelPriority alCSPGetChlPriority
#define SCREEN_COPY_TILE_HEIGHT ((TMEM_SIZE) / ((SCREEN_WIDTH) * (2)))
#define SP_CLR_YIELDED SP_CLR_SIG1
#define G_CD_BAYER (1 << G_MDSFT_RGBDITHER)
#define ICON_badge_HPDrain_disabled_raster 0x18F00
#define OS_EVENT_RDB_REQ_RAMROM 18
#define ICON_anim_coin_2_raster 0x2F840
#define ICON_battle_StopWatch_palette 0x29CC0
#define ICON_badge_DamageDodge_disabled_raster 0x1F680
#define OS_TV_NTSC 1
#define EVT_USE_FLAG_ARRAY(PACKED_FLAGS_PTR) EVT_CMD(EVT_OP_USE_FLAG_ARRAY, (Bytecode) PACKED_FLAGS_PTR),
#define ICON_badge_FlowerFanatic_raster 0x1B780
#define VI_H_SYNC_REG (VI_BASE_REG+0x1C)
#define _COMMON_STRUCTS_H_ 
#define RM_RA_ZB_OPA_SURF(clk) AA_EN | Z_CMP | Z_UPD | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define ICON_food_Koopasta_disabled_palette 0x3180
#define ICON_badge_HappyFlower_palette 0x1FD00
#define ICON_battle_SleepySheep_disabled_raster 0x291C0
#define G_TF_BILERP (2 << G_MDSFT_TEXTFILT)
#define gSPLightColor(pkt,n,col) { gMoveWd(pkt, G_MW_LIGHTCOL, G_MWO_a ##n, col); gMoveWd(pkt, G_MW_LIGHTCOL, G_MWO_b ##n, col); }
#define DEVICE_TYPE_CART 0
#define ERR_OSDPSETNEXTBUFFER_SIZE 18
#define ICON_badge_Multibounce_disabled_palette 0x15220
#define gsSPSprite2DBase(s) gsDma1p(G_SPRITE2D_BASE, s, sizeof(uSprite), 0)
#define __gsSP1Quadrangle_w1f(v0,v1,v2,v3,flag) (((flag) == 0) ? __gsSP1Triangle_w1(v0, v1, v2): ((flag) == 1) ? __gsSP1Triangle_w1(v1, v2, v3): ((flag) == 2) ? __gsSP1Triangle_w1(v2, v3, v0): __gsSP1Triangle_w1(v3, v0, v1))
#define ICON_badge_MegaSmash_raster 0x1C500
#define ApiStatus_DONE1 1
#define ApiStatus_DONE2 2
#define __gsSP1Quadrangle_w2f(v0,v1,v2,v3,flag) (((flag) == 0) ? __gsSP1Triangle_w1(v0, v2, v3): ((flag) == 1) ? __gsSP1Triangle_w1(v1, v3, v0): ((flag) == 2) ? __gsSP1Triangle_w1(v2, v0, v1): __gsSP1Triangle_w1(v3, v1, v2))
#define G_RM_VISCVG2 RM_VISCVG(2)
#define PI_BASE_REG 0x04600000
#define SQ(x) ((x) * (x))
#define RDRAM_DEVICE_ID_REG (RDRAM_BASE_REG+0x04)
#define ICON_unused_12E_palette 0x2C540
#define ERR_OSPROFILEINIT_CNT 62
#define OS_PRIORITY_APPMAX 127
#define ICON_food_FirePop_disabled_raster 0x6560
#define _RCP_H_ 
#define ICON_badge_EarthquakeJump_palette 0x1FAC0
#define RM_TEX_EDGE(clk) CVG_DST_CLAMP | CVG_X_ALPHA | ALPHA_CVG_SEL | FORCE_BL | ZMODE_OPA | TEX_EDGE | AA_EN | GBL_c ##clk(G_BL_CLR_IN, G_BL_0, G_BL_CLR_IN, G_BL_1)
#define ICON_unused_0E4_disabled_raster 0x20AC0
#define OS_EVENT_RDB_ACK_PROF 22
#define CAUSE_IPMASK 0x0000FF00
#define M_DTOR (3.14159265358979323846/180.0)
#define GU_PARSE_READY 3
#define EVT_AREA_BYTE_OFFSET 150000000
#define aDMEMMove(pkt,i,o,c) { Acmd *_a = (Acmd *)pkt; _a->words.w0 = _SHIFTL(A_DMEMMOVE, 24, 8) | _SHIFTL(i, 0, 24); _a->words.w1 = _SHIFTL(o, 16, 16) | _SHIFTL(c, 0, 16); }
#define __va_rounded_size(TYPE) (((sizeof (TYPE) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))
#define OS_DCACHE_ROUNDUP_ADDR(x) (void *)(((((u32)(x)+0xf)/0x10)*0x10))
#define G_IM_SIZ_4b_LINE_BYTES G_IM_SIZ_4b_BYTES
#define ICON_food_DriedShroom_disabled_palette 0x242E0
#define gsImmp0(c) {{ _SHIFTL((c), 24, 8) }}
#define gsImmp1(c,p0) {{ _SHIFTL((c), 24, 8), (unsigned int)(p0) }}
#define gsImmp2(c,p0,p1) {{ _SHIFTL((c), 24, 8), _SHIFTL((p0), 16, 16) | _SHIFTL((p1), 8, 8)}}
#define gsImmp3(c,p0,p1,p2) {{ _SHIFTL((c), 24, 8), (_SHIFTL((p0), 16, 16) | _SHIFTL((p1), 8, 8) | _SHIFTL((p2), 0, 8))}}
#define ICON_key_CakeBaked_palette 0x640
#define IS_KPTESEG(x) ((u32)(x) >= KPTE_SHDUBASE)
#define CUBE(x) ((x) * (x) * (x))
#define ICON_badge_MegaRush_raster 0x19800
#define L_TRIG CONT_L
#define ICON_unused_0E5_disabled_raster 0x20D00
#define G_RM_ZB_OPA_DECAL2 RM_ZB_OPA_DECAL(2)
#define hs_SetHidden HUD_ELEMENT_OP_SetHidden,
#define CONT_TYPE_MASK 0x1f07
#define DCACHE_LINESIZE 16
#define ICON_key_1DC650_raster 0x10340
#define ICON_food_LimeCandy_palette 0x69A0
#define VI_CTRL_DITHER_FILTER_ON 0x10000
#define EXC_CODE(x) ((x)<<2)
#define ERR_OSTHPROFILESTART_START 137
#define ICON_key_boo_record_mask_raster 0xADE0
#define G_TRI_FILL_ZBUFF 0xc9
#define es_PlaySound(soundId) ENTITY_SCRIPT_OP_PlaySound, soundId,
#define ICON_battle_HustleDrink_raster 0x29880
#define _MBI_H_ 
#define G_RM_AA_ZB_OPA_SURF2 RM_AA_ZB_OPA_SURF(2)
#define EVT_LABEL(LABEL_ID) EVT_CMD(EVT_OP_LABEL, LABEL_ID),
#define ICON_food_LifeShroom_palette 0x24080
#define ICON_badge_FeelingFine_raster 0x18840
#define EVT_CASE_RANGE(MIN,MAX) EVT_CMD(EVT_OP_CASE_RANGE, MIN, MAX),
#define ICON_anim_sp_small_2_raster 0x31D20
#define EVT_SUSPEND_THREAD(TID) EVT_CMD(EVT_OP_SUSPEND_THREAD, TID),
#define ICON_unused_0E6_disabled_raster 0x20F40
#define ICON_badge_SuperSmash_palette 0x1C4C0
#define gsDPSetCombineMode(a,b) gsDPSetCombineLERP(a, b)
#define _SCRIPT_API_MAP_H_ 
#define PI_WR_LEN_REG (PI_BASE_REG+0x0C)
#define G_SETENVCOLOR 0xfb
#define EVT_FIXED_TO_FLOAT(x) ({f32 var = (x) + EVT_FIXED_OFFSET; var /= 1024.0f; var;})
#define gsDPSetHilite2Tile(tile,hilite,width,height) gsDPSetTileSize(tile, (hilite)->h.x2 & 0xfff, (hilite)->h.y2 & 0xfff, ((((width)-1)*4)+(hilite)->h.x2) & 0xfff, ((((height)-1)*4)+(hilite)->h.y2) & 0xfff)
#define AL_KEY_MAX 127
#define EVT_PTR(sym) ((Bytecode) &(sym))
#define ICON_badge_SmashCharge0_palette 0x185C0
#define MAX_ACTOR_DECORATIONS 2
#define G_TC_CONV (0 << G_MDSFT_TEXTCONV)
#define ICON_unused_02E_disabled_raster 0x8960
#define hs_Restart HUD_ELEMENT_OP_Restart,
#define ICON_badge_Multibounce_disabled_raster 0x15000
#define G_MV_VIEWPORT 8
#define A_AUX 0x08
#define ICON_unused_0E7_disabled_raster 0x21180
#define OS_VI_NTSC_HAN1 10
#define GCCc1w0(saRGB1,mRGB1) (_SHIFTL((saRGB1), 5, 4) | _SHIFTL((mRGB1), 0, 5))
#define GCCc1w1(sbRGB1,saA1,mA1,aRGB1,sbA1,aA1) (_SHIFTL((sbRGB1), 24, 4) | _SHIFTL((saA1), 21, 3) | _SHIFTL((mA1), 18, 3) | _SHIFTL((aRGB1), 6, 3) | _SHIFTL((sbA1), 3, 3) | _SHIFTL((aA1), 0, 3))
#define FPCSR_C 0x00800000
#define ICON_badge_PowerSmash_disabled_palette 0x1C2A0
#define AL_KEY_MIN 0
#define ICON_food_FirePop_raster 0x6560
#define ICON_food_BoiledEgg_raster 0x7E20
#define ICON_badge_ChillOut_disabled_palette 0x1A560
#define G_RM_OPA_SURF2 RM_OPA_SURF(2)
#define B_BUTTON CONT_B
#define MODEL_FLAGS_MASK_FFF0 (MODEL_FLAGS_USES_CUSTOM_GFX | MODEL_FLAGS_FLAG_20 | MODEL_FLAGS_FLAG_40 | MODEL_FLAGS_HAS_LOCAL_VERTEX_COPY | MODEL_FLAGS_USE_CAMERA_UNK_MATRIX | MODEL_FLAGS_FLAG_200 | MODEL_FLAGS_HAS_TRANSFORM_APPLIED | MODEL_FLAGS_HAS_TEX_PANNER | MODEL_FLAGS_USES_TRANSFORM_MATRIX | MODEL_FLAGS_FLAG_2000 | MODEL_FLAGS_FLAG_4000 | MODEL_FLAGS_FLAG_8000)
#define ICON_badge_DoubleDip_palette 0x16400
#define AL_EVTQ_END 0x7fffffff
#define gsSPFogFactor(fm,fo) gsMoveWd(G_MW_FOG, G_MWO_FOG, (_SHIFTL(fm,16,16) | _SHIFTL(fo,0,16)))
#define G_RM_ZB_CLD_SURF2 RM_ZB_CLD_SURF(2)
#define CONFIG_NONCOHRNT 0x00000003
#define EVT_RESUME_GROUP(GROUP) EVT_CMD(EVT_OP_RESUME_GROUP, GROUP),
#define ICON_food_YellowBerry_raster 0x24C00
#define ICON_battle_InsecticideHerb_palette 0x14900
#define GAME_PRINTF_SEND 5
#define OS_TV_PAL 0
#define SP_SEMAPHORE_REG (SP_BASE_REG+0x1C)
#define gSPMatrix(pkt,m,p) gDma2p((pkt),G_MTX,(m),sizeof(Mtx),(p)^G_MTX_PUSH,0)
#define gsDPSetTextureDetail(type) gsSPSetOtherMode(G_SETOTHERMODE_H, G_MDSFT_TEXTDETAIL, 2, type)
#define ICON_key_CakeBerries_palette 0x1300
#define G_MDSFT_TEXTPERSP 19
#define CONFIG_SC 0x00020000
#define gSPLookAt(pkt,la) { gSPLookAtX(pkt,la) gSPLookAtY(pkt,(char *)(la)+16) }
#define _OS_PFS_H_ 
#define ICON_badge_PowerJump_disabled_palette 0x1BBE0
#define CAUSE_CEMASK 0x30000000
#define G_MWO_POINT_RGBA 0x10
#define CONFIG_SW 0x00100000
#define ICON_key_CakeBowl_palette 0xCA0
#define ICON_unused_0F1_disabled_palette 0x22A20
#define RDRAM_1_START 0x00200000
#define ICON_badge_SpinAttack_disabled_raster 0x1DB80
#define SP_STATUS_DMA_FULL 0x008
#define ICON_food_UltraShroom_disabled_palette 0x23E60
#define gSPTextureL(pkt,s,t,level,xparam,tile,on) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_TEXTURE,24,8) | _SHIFTL((xparam),16,8) | _SHIFTL((level),11,3) | _SHIFTL((tile),8,3) | _SHIFTL((on),1,7)); _g->words.w1 = (_SHIFTL((s),16,16) | _SHIFTL((t),0,16)); }
#define SECC_MASK 0x0000007f
#define OS_EVENT_THREADSTATUS 13
#define TLBINX_INXSHIFT 0
#define EVT_LOCAL_FLAG_CUTOFF -60000000
#define ICON_anim_hand_3_palette 0x2CCA0
#define SP_DMEM_START 0x04000000
#define ICON_badge_DamageDodge_palette 0x1F880
#define sDPRGBColor(cmd,r,g,b,a) gsDPSetColor(cmd, (_SHIFTL(r, 24, 8) | _SHIFTL(g, 16, 8) | _SHIFTL(b, 8, 8) | _SHIFTL(a, 0, 8)))
#define SP_DMA_FULL_REG (SP_BASE_REG+0x14)
#define ERR_OSPROFILESTOP_TIMER 69
#define ERR_OSVISETXSCALE_VIMGR 40
#define OS_PRIORITY_SIMGR 140
#define RAMROM_CLOCKRATE_MASK 0xfffffff0
#define MI_NOOP_REG MI_VERSION_REG
#define EVT_FBUF_PEEK(OFFSET,VAR) EVT_CMD(EVT_OP_FBUF_PEEK, OFFSET, VAR),
#define ICON_anim_sp_small_1_raster 0x31CE0
#define G_QUAD 0x07
#define ICON_food_BlandMeal_raster 0x3F20
#define F16(f) (s16)(f * 327.67f)
#define ICON_food_RedBerry_disabled_raster 0x249C0
#define ICON_key_snowman_bucket_palette 0xE740
#define DPC_CLOCK_REG (DPC_BASE_REG+0x10)
#define SR_IMASK7 0x00008000
#define ICON_key_frying_pan_raster 0xBCC0
#define SP_IMEM_END 0x04001FFF
#define OS_VI_PAL_LPF1 15
#define OS_VI_PAL_LPF2 19
#define G_AD_DISABLE (3 << G_MDSFT_ALPHADITHER)
#define G_IM_SIZ_32b_INCR 0
#define _OS_CONT_H_ 
#define ICON_food_ShroomCake_palette 0x35E0
#define ems_Loop ENTITY_MODEL_SCRIPT_OP_Loop,
#define G_RM_AA_ZB_XLU_SURF2 RM_AA_ZB_XLU_SURF(2)
#define ICON_food_SpecialShake_disabled_raster 0x45E0
#define THPROF_STACKSIZE 256
#define SP_SET_INTR 0x00010
#define OS_PRIORITY_VIMGR 254
#define C0_IMPSHIFT 8
#define OS_VI_PAL_LPN1 14
#define OS_VI_PAL_LPN2 18
#define gSPPerspNormalize(pkt,s) gMoveWd(pkt, G_MW_PERSPNORM, 0, (s))
#define alSeqpGetChannelPriority alSeqpGetChlPriority
#define PFS_ERR_INCONSISTENT 3
#define EVT_ARRAY_FLAG_OFFSET 210000000
#define ERR_OSTHPROFILESTOP_FLAG 138
#define G_CC_MODULATEIA2 COMBINED, 0, SHADE, 0, COMBINED, 0, SHADE, 0
#define ICON_badge_BumpAttack_raster 0x1CBC0
#define gSPLight(pkt,l,n) gDma2p((pkt),G_MOVEMEM,(l),sizeof(Light),G_MV_LIGHT,(n)*24+24)
#define OS_VI_GAMMA_DITHER_ON 0x0004
#define G_RM_AA_ZB_OPA_TERR2 RM_AA_ZB_OPA_TERR(2)
#define G_MTX_MUL 0x00
#define MAX_RATIO 1.99996
#define OS_PFS_VERSION_HI (OS_PFS_VERSION >> 8)
#define A_BUTTON CONT_A
#define OS_MESG_PRI_HIGH 1
#define OS_VI_MPAL_LPF2 33
#define ICON_food_SuperSoda_palette 0x24740
#define G_MWO_FOG 0x00
#define GIO_GIO_INTR_REG (GIO_BASE_REG+0x000)
#define G_RM_ADD2 RM_ADD(2)
#define ICON_badge_AllorNothing_disabled_palette 0x18EE0
#define ICON_key_koot_book_raster 0x118A0
#define gdSPDefLookAt(rightx,righty,rightz,upx,upy,upz) { {{ {{0,0,0},0,{0,0,0},0,{rightx,righty,rightz},0}}, { {{0,0x80,0},0,{0,0x80,0},0,{upx,upy,upz},0}}} }
#define ICON_unused_0E5_disabled_palette 0x20F20
#define ICON_badge_SmashCharge_raster 0x16B00
#define OS_PFS_VERSION_LO (OS_PFS_VERSION & 255)
#define SINVALID 0x00000000
#define OS_VI_BIT_NONINTERLACE 0x0001
#define ICON_unused_127_raster 0x2B380
#define OS_IM_RDBREAD 0x00004401
#define G_CCMUX_TEXEL0_ALPHA 8
#define VI_V_SYNC_REG (VI_BASE_REG+0x18)
#define OS_K1_TO_PHYSICAL(x) (u32)(((char *)(x)-0xa0000000))
#define ICON_badge_SmashCharge0_raster 0x183C0
#define PTR_LIST_END ((void*) -1)
#define RM_AA_SUB_SURF(clk) AA_EN | IM_RD | CVG_DST_FULL | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define G_RM_XLU_SURF2 RM_XLU_SURF(2)
#define OS_MESG_BLOCK 1
#define gSPCullDisplayList(pkt,vstart,vend) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_CULLDL, 24, 8) | _SHIFTL((vstart)*2, 0, 16); _g->words.w1 = _SHIFTL((vend)*2, 0, 16); }
#define EVT_USE_BUF(INT_PTR) EVT_CMD(EVT_OP_USE_BUF, (Bytecode) INT_PTR),
#define EVT_BIND_TRIGGER(EVT_SOURCE,TRIGGER,COLLIDER_ID,UNK_A3,TRIGGER_PTR_OUTVAR) EVT_CMD(EVT_OP_BIND_TRIGGER, (Bytecode) EVT_SOURCE, TRIGGER, (Bytecode) COLLIDER_ID, UNK_A3, TRIGGER_PTR_OUTVAR),
#define PFS_CREATE 2
#define ICON_food_BubbleBerry_disabled_raster 0x24E40
#define ICON_key_pulse_stone_raster 0x9F00
#define ICON_peach_BakingMilk_raster 0x28D40
#define gSPBranchList(pkt,dl) gDma1p(pkt,G_DL,dl,0,G_DL_NOPUSH)
#define gsDPSetBlendColor(r,g,b,a) sDPRGBColor(G_SETBLENDCOLOR, r,g,b,a)
#define ICON_badge_RunawayPay_palette 0x1B080
#define PADDR_SHIFT 4
#define MI_CLR_EBUS 0x0200
#define ICON_badge_IcePower_disabled_palette 0x19C60
#define PFS_FILE_EXT_LEN 4
#define FILTER_WRAP 0
#define OS_VI_BIT_DEFLICKINTERLACE 0x0008
#define ICON_food_BubbleBerry_raster 0x24E40
#define ICON_anim_coin_1_raster 0x2F700
#define MapFlag(INDEX) ((INDEX) - EVT_MAP_FLAG_OFFSET)
#define _VARIABLES_H_ 
#define DPC_STATUS_FREEZE 0x002
#define CONFIG_EC_3_1 0x1
#define CONFIG_EC_3_2 0x7
#define VI_V_VIDEO_REG VI_V_START_REG
#define G_RM_AA_XLU_LINE2 RM_AA_XLU_LINE(2)
#define ICON_badge_LuckyDay_palette 0x1C940
#define ERR_OSPROFILESTOP_FLAG 68
#define EVT_GAME_BYTE_OFFSET 170000000
#define HOST_PROF_ACK 13
#define G_MTX_PUSH 0x01
#define G_RM_OPA_SURF RM_OPA_SURF(1)
#define ICON_unused_0E7_disabled_palette 0x213A0
#define ICON_food_JellySuper_raster 0x55A0
#define __va_copy(dest,src) (dest) = (src)
#define OS_EVENT_RDB_DBG_DONE 20
#define ICON_anim_sp_small_0_raster 0x31CA0
#define RAMROM_BOOTADDR_OFFSET 0x8
#define RDRAM_BASE_REG 0x03F00000
#define GAME_LOG_SEND 7
#define G_MDSFT_RENDERMODE 3
#define G_BL_CLR_BL 2
#define ICON_badge_PrettyLucky_disabled_palette 0x18820
#define BOOT_ADDRESS_EMU 0x20010000
#define ERR_OSVIEXTENDVSTART_VIMGR 134
#define ICON_food_DriedFruit_palette 0x25DC0
#define ICON_food_FrozenFries_disabled_raster 0x7520
#define gDPSetColorDither(pkt,mode) gSPSetOtherMode(pkt, G_SETOTHERMODE_H, G_MDSFT_RGBDITHER, 2, mode)
#define ICON_food_YellowBerry_disabled_raster 0x24C00
#define CHNL_ERR_NORESP 0x80
#define ICON_key_koot_shell_palette 0x12560
#define G_CK_KEY (1 << G_MDSFT_COMBKEY)
#define ICON_badge_SpinSmash_disabled_palette 0x14FE0
#define ICON_anim_hp_1_palette 0x2ED20
#define G_RM_AA_TEX_EDGE RM_AA_TEX_EDGE(1)
#define G_RM_ZB_XLU_SURF RM_ZB_XLU_SURF(1)
#define PFS_ID_1AREA 3
#define ICON_key_koot_shell_raster 0x12360
#define EXC_WATCH EXC_CODE(23)
#define EVT_SET_TIMESCALE(TIMESCALE) EVT_CMD(EVT_OP_SET_TIMESCALE, TIMESCALE),
#define ICON_badge_PUpDDown_disabled_raster 0x1CE00
#define ICON_badge_HappyHeart_raster 0x1A580
#define SP_TEXSHUF 0x00000200
#define G_IM_FMT_CI 2
#define gsSPMatrix(m,p) gsDma2p( G_MTX,(m),sizeof(Mtx),(p)^G_MTX_PUSH,0)
#define ApiStatus_REPEAT 3
#define RI_RERROR_REG (RI_BASE_REG+0x18)
#define A_SAVEBUFF 6
#define PHYS_TO_K0(x) ((u32)(x)|0x80000000)
#define ICON_key_EmptyBook_disabled_raster 0x132C0
#define gsSPLookAt(la) gsSPLookAtX(la), gsSPLookAtY((char *)(la)+16)
#define IS_KSEGDM(x) ((u32)(x) >= K0BASE && (u32)(x) < K2BASE)
#define G_MV_POINT 12
#define spDraw spX2Draw
#define SP_SET_YIELD SP_SET_SIG0
#define EVS_EnterMap EVS_EnterMap
#define ICON_peach_BakingButter_palette 0x28640
#define ICON_food_MapleSyrup_disabled_raster 0x27000
#define G_IM_FMT_IA 3
#define GAME_EXIT 16
#define gsDPSetEnvColor(r,g,b,a) sDPRGBColor(G_SETENVCOLOR, r,g,b,a)
#define VI_NTSC_CLOCK 48681812
#define SP_FASTCOPY 0x00000020
#define ICON_badge_DizzyAttack_raster 0x1D700
#define SP_STATUS_REG (SP_BASE_REG+0x10)
#define _GU_H_ 
#define ICON_key_Gift_palette 0x200
#define RCP_IMASK 0x003f0000
#define ICON_anim_sp_small_3_palette 0x31D80
#define ICON_badge_JumpCharge0_disabled_palette 0x19360
#define ASCII_TO_U32(a,b,c,d) ((u32)((a << 24) | (b << 16) | (c << 8) | (d << 0)))
#define gsDPSetScissorFrac(mode,ulx,uly,lrx,lry) {{ _SHIFTL(G_SETSCISSOR, 24, 8) | _SHIFTL((int)((ulx)), 12, 12) | _SHIFTL((int)((uly)), 0, 12), _SHIFTL(mode, 24, 2) | _SHIFTL((int)(lrx), 12, 12) | _SHIFTL((int)(lry), 0, 12) }}
#define RM_AA_OPA_SURF(clk) AA_EN | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define ICON_badge_DDownJump_disabled_raster 0x1F440
#define gDma0p(pkt,c,s,l) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL((c), 24, 8) | _SHIFTL((l), 0, 24); _g->words.w1 = (unsigned int)(s); }
#define ICON_unused_0F7_raster 0x23580
#define IS_ITEM(itemID) (itemID >= ITEM_FIRST_KEY && itemID <= ITEM_LAST_CONSUMABLE)
#define ICON_badge_SleepStomp_disabled_palette 0x16AE0
#define ERR_OSCREATEVIMANAGER 49
#define gDma1p(pkt,c,s,l,p) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL((c), 24, 8) | _SHIFTL((p), 16, 8) | _SHIFTL((l), 0, 16)); _g->words.w1 = (unsigned int)(s); }
#define TLBCTXT_VPNMASK 0x7ffff0
#define ICON_food_CocoPop_raster 0x69E0
#define EVT_SETUP_CAMERA_ALT_NO_LEAD() EVT_CALL(SetCamPerspective, CAM_DEFAULT, 3, 25, 16, 4096) EVT_CALL(SetCamBGColor, CAM_DEFAULT, 0, 0, 0) EVT_CALL(SetCamLeadPlayer, CAM_DEFAULT, FALSE) EVT_CALL(SetCamEnabled, CAM_DEFAULT, TRUE)
#define gDma2p(pkt,c,adrs,len,idx,ofs) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL((c),24,8)|_SHIFTL(((len)-1)/8,19,5)| _SHIFTL((ofs)/8,8,8)|_SHIFTL((idx),0,8)); _g->words.w1 = (unsigned int)(adrs); }
#define RM_AA_ZB_OPA_SURF(clk) AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define BUF_CTRL_SIZE ALIGNSZ
#define EVT_INDEX_OF_ARRAY_VAR(v) ((v) + EVT_ARRAY_VAR_OFFSET)
#define AI_VAR_HITNPC_YOFFSET varTable[0]
#define es_Label(labelId) ENTITY_SCRIPT_OP_Label, labelId,
#define _OS_RDP_H_ 
#define gSPLine3D(pkt,v0,v1,flag) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_LINE3D, 24, 8)| __gsSPLine3D_w1f(v0, v1, 0, flag); _g->words.w1 = 0; }
#define SP_CLR_CPUSIGNAL SP_CLR_SIG4
#define OS_VI_NTSC_LAF1 3
#define OS_VI_NTSC_LAF2 7
#define __log__ 
#define LVar0 LocalVar(0)
#define ERR_OSSENDMESG 6
#define LVar3 LocalVar(3)
#define ERR_OSVISWAPBUFFER_ADDR 47
#define G_TX_WRAP 0
#define EVT_FLOAT_TO_FIXED(x) (((x) * 1024.0f) + -EVT_FIXED_OFFSET)
#define ICON_key_fertile_soil_palette 0xD620
#define ERR_OSTHPROFILEREADTIMETH_LAR 146
#define ICON_anim_star_piece_1_palette 0x30820
#define ICON_key_mystic_key_palette 0xB860
#define KUBASE 0
#define OS_VI_NTSC_LAN1 2
#define OS_VI_NTSC_LAN2 6
#define ICON_badge_SuperSmash_raster 0x1C2C0
#define TXL2WORDS_4b(txls) MAX(1, ((txls)/16))
#define TLBCTXT_BASEBITS 9
#define ZMODE_OPA 0
#define PSTATEMASK 0x00C0
#define OS_VI_MPAL_LAF1 31
#define OS_VI_MPAL_LAF2 35
#define ITEM_FIRST_KEY ITEM_KOOPA_FORTRESS_KEY
#define STANDARD_HEART_DROPS(attempts) { { F16(20), F16(70), attempts, F16(50) }, { F16(30), F16(60), attempts, F16(50) }, { F16(50), F16(50), attempts, F16(40) }, { F16(80), F16(40), attempts, F16(40) }, { F16(100), F16(30), attempts, F16(30) }, }
#define ICON_battle_MagicMirror_palette 0x2C0C0
#define ICON_badge_DeepFocus_disabled_raster 0x201C0
#define G_TEXTURE_IMAGE_FRAC 2
#define alSeqpGetProgram alSeqpGetChlProgram
#define G_MV_PMTX 6
#define G_MW_FORCEMTX 0x0c
#define ICON_battle_137_palette 0x2A380
#define EVT_FIXED_OFFSET 230000000
#define ICON_key_toad_doll_palette 0xDCA0
#define OS_VI_MPAL_LAN1 30
#define OS_VI_MPAL_LAN2 34
#define gDPLoadTextureTile_4b(pkt,timg,fmt,width,height,uls,ult,lrs,lrt,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, G_IM_SIZ_8b, ((width)>>1), timg); gDPSetTile(pkt, fmt, G_IM_SIZ_8b, (((((lrs)-(uls)+1)>>1)+7)>>3), 0, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadTile( pkt, G_TX_LOADTILE, (uls)<<(G_TEXTURE_IMAGE_FRAC-1), (ult)<<(G_TEXTURE_IMAGE_FRAC), (lrs)<<(G_TEXTURE_IMAGE_FRAC-1), (lrt)<<(G_TEXTURE_IMAGE_FRAC)); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, G_IM_SIZ_4b, (((((lrs)-(uls)+1)>>1)+7)>>3), 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, G_TX_RENDERTILE, (uls)<<G_TEXTURE_IMAGE_FRAC, (ult)<<G_TEXTURE_IMAGE_FRAC, (lrs)<<G_TEXTURE_IMAGE_FRAC, (lrt)<<G_TEXTURE_IMAGE_FRAC) }
#define _OS_CONVERT_H_ 
#define G_RM_AA_ZB_TEX_EDGE2 RM_AA_ZB_TEX_EDGE(2)
#define ICON_badge_PowerPlus_raster 0x15240
#define OS_MESG_TYPE_VRETRACE (OS_MESG_TYPE_BASE+3)
#define RAMROM_FONTDATA_SIZE 1152
#define gsSPSegment(segment,base) gsMoveWd( G_MW_SEGMENT, (segment)*4, base)
#define _VA_LIST_ 
#define gDPSetRenderMode(pkt,c0,c1) gSPSetOtherMode(pkt, G_SETOTHERMODE_L, G_MDSFT_RENDERMODE, 29, (c0) | (c1))
#define gsSPLight(l,n) gsDma2p( G_MOVEMEM,(l),sizeof(Light),G_MV_LIGHT,(n)*24+24)
#define ICON_unused_0F2_palette 0x22C40
#define aSetVolume(pkt,f,v,t,r) { Acmd *_a = (Acmd *)pkt; _a->words.w0 = (_SHIFTL(A_SETVOL, 24, 8) | _SHIFTL(f, 16, 16) | _SHIFTL(v, 0, 16)); _a->words.w1 = _SHIFTL(t, 16, 16) | _SHIFTL(r, 0, 16); }
#define G_TT_NONE (0 << G_MDSFT_TEXTLUT)
#define A_SETVOL 9
#define IS_RDRAM(x) ((unsigned)(x) >= RDRAM_START && (unsigned)(x) < RDRAM_END)
#define _STDARG_H 
#define ICON_food_StrangeCake_palette 0x72A0
#define ICON_badge_SlowGo_disabled_palette 0x195A0
#define EVT_THREAD EVT_CMD(EVT_OP_THREAD),
#define ICON_food_DeluxeFeast_raster 0x43A0
#define G_LINE3D 0x08
#define SI_STATUS_INTERRUPT 0x1000
#define ICON_food_YummyMeal_palette 0x4360
#define EVT_ELSE EVT_CMD(EVT_OP_ELSE),
#define G_SPNOOP 0xe0
#define ICON_badge_PowerQuake_disabled_raster 0x16440
#define ICON_anim_shimmer_2_raster 0x302C0
#define SP_RD_LEN_REG (SP_BASE_REG+0x08)
#define OS_READ 0
#define RI_REFRESH_REG (RI_BASE_REG+0x10)
#define DPC_STATUS_CBUF_READY 0x080
#define PFS_GBPAK_INITIALIZED 0x10
#define ICON_unused_02C_palette 0x86E0
#define ICON_badge_SlowGo_palette 0x19580
#define OS_EVENT_RDB_READ_DONE 15
#define ICON_food_HoneyShroom_raster 0x5EA0
#define ICON_food_CocoPop_disabled_raster 0x69E0
#define ICON_food_KookyCookie_disabled_palette 0x7500
#define ERR_OSFREE_ADDR 54
#define G_RM_ZB_XLU_SURF2 RM_ZB_XLU_SURF(2)
#define gsDPLoadTLUT(count,tmemaddr,dram) gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, dram), gsDPTileSync(), gsDPSetTile(0, 0, 0, tmemaddr, G_TX_LOADTILE, 0 , 0, 0, 0, 0, 0, 0), gsDPLoadSync(), gsDPLoadTLUTCmd(G_TX_LOADTILE, ((count)-1)), gsDPPipeSync()
#define RM_PCL_SURF(clk) CVG_DST_FULL | FORCE_BL | ZMODE_OPA | G_AC_DITHER | GBL_c ##clk(G_BL_CLR_IN, G_BL_0, G_BL_CLR_IN, G_BL_1)
#define GU_PARSERDP_DUMPONLY 32
#define ICON_food_ShroomSteak_raster 0x3620
#define ANIM_LIST_END -1
#define ICON_anim_hp_1_raster 0x2EB20
#define ICON_food_CakeMix_palette 0x26240
#define ICON_food_DeluxeFeast_palette 0x45A0
#define OS_IM_PRENMI 0x00001401
#define G_MWO_POINT_XYSCREEN 0x18
#define ICON_badge_AllorNothing_raster 0x18CC0
#define ICON_food_Goomnut_raster 0x25080
#define ICON_anim_heart_0_palette 0x30B80
#define ICON_key_book_cook_raster 0xE100
#define MI_BASE_REG 0x04300000
#define TLBHI_PIDSHIFT 0
#define ICON_badge_RunawayPay_disabled_palette 0x1B0A0
#define G_RM_AA_XLU_LINE RM_AA_XLU_LINE(1)
#define ICON_anim_hand_4_palette 0x2CDE0
#define ICON_peach_BakingCream_disabled_palette 0x281E0
#define ICON_unused_0D6_disabled_palette 0x1ED60
#define G_CC_BLENDPEDECALA PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, TEXEL0
#define ICON_key_water_stone_raster 0xCFE0
#define SP_STATUS_TASKDONE SP_STATUS_SIG2
#define DPRGBColor(pkt,cmd,r,g,b,a) gDPSetColor(pkt, cmd, (_SHIFTL(r, 24, 8) | _SHIFTL(g, 16, 8) | _SHIFTL(b, 8, 8) | _SHIFTL(a, 0, 8)))
#define OS_LOG_VERSION 1
#define gsDPLoadTile(t,uls,ult,lrs,lrt) gsDPLoadTileGeneric(G_LOADTILE, t, uls, ult, lrs, lrt)
#define RAMROM_RMON_READ_ADDR (RAMROM_MSG_ADDR + (2*RAMROM_BUF_SIZE))
#define ICON_key_dolly_palette 0x9CC0
#define ICON_badge_CloseCall_raster 0x1E480
#define RM_AA_ZB_DEC_LINE(clk) AA_EN | Z_CMP | IM_RD | CVG_DST_SAVE | CVG_X_ALPHA | ALPHA_CVG_SEL | FORCE_BL | ZMODE_DEC | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define G_DMACMDSIZ 128
#define ICON_food_ShroomSteak_palette 0x3820
#define TMEM_SIZE 0x1000
#define ICON_key_vase_raster 0xA340
#define ICON_badge_FlowerFanatic_disabled_raster 0x1B780
#define ICON_key_gear_boots_2_raster 0x1540
#define EVT_MOD(VAR,INT_VALUE) EVT_CMD(EVT_OP_MOD, VAR, INT_VALUE),
#define IMG_BIN u8
#define DPS_TBIST_GO 0x02
#define EVT_INDEX_OF_MAP_FLAG(v) ((v) + EVT_MAP_FLAG_OFFSET)
#define ICON_food_HoneyCandy_palette 0x62E0
#define AI_NTSC_MIN_FREQ 3000
#define gDPScrollMultiTile2_4b(pkt,timg,fmt,width,height,uls,ult,lrs,lrt,pal,cms,cmt,masks,maskt,shifts,shiftt,scrolls,scrollt) { gDPSetTextureImage(pkt, fmt, G_IM_SIZ_8b, ((width)>>1), timg); gDPSetTile(pkt, fmt, G_IM_SIZ_8b, (((((lrs)-(uls)+1)>>1)+7)>>3), 0, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadTile( pkt, G_TX_LOADTILE, (uls)<<(G_TEXTURE_IMAGE_FRAC-1), (ult)<<(G_TEXTURE_IMAGE_FRAC), (lrs)<<(G_TEXTURE_IMAGE_FRAC-1), (lrt)<<(G_TEXTURE_IMAGE_FRAC)); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, G_IM_SIZ_4b, (((((lrs)-(uls)+1)>>1)+7)>>3), 0, G_TX_RENDERTILE + 1, 0, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, G_TX_RENDERTILE + 1, (uls + scrolls)<<G_TEXTURE_IMAGE_FRAC, (ult + scrollt)<<G_TEXTURE_IMAGE_FRAC, (lrs + scrolls)<<G_TEXTURE_IMAGE_FRAC, (lrt + scrollt)<<G_TEXTURE_IMAGE_FRAC) gDPSetTile(pkt, fmt, G_IM_SIZ_4b, (((((lrs)-(uls)+1)>>1)+7)>>3), 0, G_TX_RENDERTILE + 0, 1, cmt, maskt, shiftt, cms, masks, shifts); }
#define aADPCMdec(pkt,f,s) { Acmd *_a = (Acmd *)pkt; _a->words.w0 = _SHIFTL(A_ADPCM, 24, 8) | _SHIFTL(f, 16, 8); _a->words.w1 = (unsigned int)(s); }
#define ICON_unused_11F_palette 0x29180
#define ICON_peach_BakingEgg_disabled_palette 0x27FA0
#define SP_DRAM_STACK_SIZE64 (SP_DRAM_STACK_SIZE8 >> 3)
#define gsSPPerspNormalize(s) gsMoveWd( G_MW_PERSPNORM, 0, (s))
#define EVT_MUL(VAR,INT_VALUE) EVT_CMD(EVT_OP_MUL, VAR, INT_VALUE),
#define ICON_key_crystal_ball_palette 0x11440
#define EVT_MAP_VAR_OFFSET 50000000
#define TLBHI_VPN2SHIFT 13
#define ICON_food_HotShroom_disabled_palette 0x3A80
#define ICON_food_BlueBerry_palette 0x24980
#define ERR_ALSEQP_NO_VOICE 101
#define EVT_ARRAY_VAR_OFFSET 190000000
#define OS_LOG_MAX_ARGS 16
#define G_TEXTURE_ENABLE 0x00000000
#define aSetBuffer(pkt,f,i,o,c) { Acmd *_a = (Acmd *)pkt; _a->words.w0 = (_SHIFTL(A_SETBUFF, 24, 8) | _SHIFTL(f, 16, 8) | _SHIFTL(i, 0, 16)); _a->words.w1 = _SHIFTL(o, 16, 16) | _SHIFTL(c, 0, 16); }
#define ICON_badge_AutoJump_raster 0x17880
#define ICON_badge_PowerQuake_palette 0x16640
#define gSPSprite2DDraw(pkt,px,py) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_SPRITE2D_DRAW, 24, 8)); _g->words.w1 = (_SHIFTL((px), 16, 16) | _SHIFTL((py), 0, 16)); }
#define SIZE_EXCVEC 0x80
#define ICON_unused_0EF_disabled_raster 0x22380
#define ICON_badge_TripleDip_palette 0x1B740
#define gsSPLine3D(v0,v1,flag) {{ _SHIFTL(G_LINE3D, 24, 8)|__gsSPLine3D_w1f(v0, v1, 0, flag), 0 }}
#define PINVALID 0x0000
#define gsSPLoadUcodeL(ucode) gsSPLoadUcode(OS_K0_TO_PHYSICAL(& ##ucode ##TextStart), OS_K0_TO_PHYSICAL(& ##ucode ##DataStart))
#define ICON_unused_0F1_disabled_raster 0x22800
#define G_RM_RA_ZB_OPA_SURF RM_RA_ZB_OPA_SURF(1)
#define ICON_food_PotatoSalad_raster 0x7760
#define G_MWO_SEGMENT_0 0x00
#define G_MWO_SEGMENT_1 0x01
#define G_MWO_SEGMENT_2 0x02
#define G_MWO_SEGMENT_3 0x03
#define G_MWO_SEGMENT_4 0x04
#define G_MWO_SEGMENT_5 0x05
#define G_MWO_SEGMENT_6 0x06
#define G_MWO_SEGMENT_8 0x08
#define G_MWO_SEGMENT_9 0x09
#define G_MWO_SEGMENT_A 0x0a
#define G_MWO_SEGMENT_B 0x0b
#define G_MWO_SEGMENT_C 0x0c
#define G_MWO_SEGMENT_D 0x0d
#define G_MWO_SEGMENT_E 0x0e
#define G_MWO_SEGMENT_F 0x0f
#define CACHERR_PIDX_SHIFT 12
#define ICON_food_MapleSuper_raster 0x5360
#define ICON_peach_BakingStrawberry_disabled_raster 0x28200
#define MI_INTR_MASK_SET_SI 0x0008
#define ICON_badge_AttackFXF_raster 0x22140
#define ERR_ALMODDELAYOVERFLOW 133
#define OS_VI_NTSC_HPN2 12
#define ERR_ALSEQPUNKNOWNMIDI 122
#define ICON_unused_0F5_raster 0x23100
#define OS_VI_DITHER_FILTER_ON 0x0040
#define EXC_TRAP EXC_CODE(13)
#define _ENUMS_H_ 
#define ICON_battle_DizzyDial_palette 0x29F00
#define gsDPLoadMultiBlock_4bS(timg,tmem,rtile,fmt,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, G_IM_SIZ_16b, 1, timg), gsDPSetTile(fmt, G_IM_SIZ_16b, 0, tmem, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadBlock(G_TX_LOADTILE, 0, 0, (((width)*(height)+3)>>2)-1,0), gsDPPipeSync(), gsDPSetTile(fmt, G_IM_SIZ_4b, ((((width)>>1)+7)>>3), tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(rtile, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC)
#define RDRAM_STANDBY_MODE 2
#define AL_STOPPING 2
#define G_SETOTHERMODE_L 0xe2
#define C0_COMPARE 11
#define G_RM_PCL_SURF RM_PCL_SURF(1)
#define ICON_key_seed_3_palette 0xCB80
#define G_TT_IA16 (3 << G_MDSFT_TEXTLUT)
#define ICON_key_CakeMix_palette 0xEC0
#define G_BL_A_SHADE 2
#define G_SETFOGCOLOR 0xf8
#define gSPLookAtX(pkt,l) gDma2p((pkt),G_MOVEMEM,(l),sizeof(Light),G_MV_LIGHT,G_MVO_LOOKATX)
#define gSPLookAtY(pkt,l) gDma2p((pkt),G_MOVEMEM,(l),sizeof(Light),G_MV_LIGHT,G_MVO_LOOKATY)
#define TLBLO_EXLWR 0x28
#define ICON_unused_0F2_raster 0x22A40
#define C0_ENTRYHI 10
#define ICON_badge_AutoMultibounce_disabled_raster 0x17D00
#define EVT_LOOP(TIMES) EVT_CMD(EVT_OP_LOOP, TIMES),
#define RAMROM_RMON_WRITE_ADDR (RAMROM_MSG_ADDR + (3*RAMROM_BUF_SIZE))
#define OS_MINOR_VERSION 0
#define ICON_key_magic_bean_raster 0xD200
#define EVT_INDEX_OF_GAME_FLAG(v) ((v) + EVT_GAME_FLAG_OFFSET)
#define GPACK_ZDZ(z,dz) ((z) << 2 | (dz))
#define ICON_peach_BakingStrawberry_raster 0x28200
#define ICON_unused_11F_disabled_raster 0x28F80
#define ICON_badge_PUpDDown_palette 0x1D000
#define SP_IBIST_GO 0x02
#define VOICE_STATUS_BUSY 5
#define ICON_battle_Parasol_raster 0x2BC80
#define SP_CUTOUT 0x00000002
#define ICON_key_CakeBowl_raster 0xAA0
#define gSPTextureRectangleFlip(pkt,xl,yl,xh,yh,tile,s,t,dsdx,dtdy) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_TEXRECTFLIP, 24, 8) | _SHIFTL(xh, 12, 12) | _SHIFTL(yh, 0, 12)); _g->words.w1 = (_SHIFTL(tile, 24, 3) | _SHIFTL(xl, 12, 12) | _SHIFTL(yl, 0, 12)); gImmp1(pkt, G_RDPHALF_1, (_SHIFTL(s, 16, 16) | _SHIFTL(t, 0, 16))); gImmp1(pkt, G_RDPHALF_2, (_SHIFTL(dsdx, 16, 16) | _SHIFTL(dtdy, 0, 16))); }
#define ICON_badge_PowerQuake_disabled_palette 0x16660
#define MI_INTR_REG (MI_BASE_REG+0x08)
#define ICON_anim_sp_1_palette 0x31080
#define RDRAM_0_END 0x001FFFFF
#define EVT_SETF_VEC2(baseVar,x,y,z) EVT_SETF(baseVar + 0, x) EVT_SETF(baseVar + 1, y)
#define EVT_SETF_VEC3(baseVar,x,y,z) EVT_SETF(baseVar + 0, x) EVT_SETF(baseVar + 1, y) EVT_SETF(baseVar + 2, z)
#define G_TX_NOLOD 0
#define ICON_food_KoopaTea_disabled_raster 0x4EE0
#define AL_HEAP_DEBUG 1
#define ICON_key_Postcard_disabled_raster 0x13080
#define alSeqpGetPan alSeqpGetChlPan
#define ICON_key_LongLetter_disabled_palette 0x12E20
#define RM_RA_ZB_OPA_INTER(clk) AA_EN | Z_CMP | Z_UPD | CVG_DST_CLAMP | ALPHA_CVG_SEL | ZMODE_INTER | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define ICON_food_Koopasta_raster 0x2F60
#define WATCHLO_RTRAP 0x00000002
#define ICON_key_key_ice_palace_raster 0x9680
#define ICON_food_ElectroPop_disabled_palette 0x6540
#define ZMODE_DEC 0xc00
#define FILTER_CLAMP 1
#define PFS_ERR_CONTRFAIL CONT_OVERRUN_ERROR
#define DEG_TO_BINANG(x) ((x) * (0x8000 / 180.0f))
#define ICON_badge_SJumpChg_raster 0x17640
#define ICON_food_JellyPop_palette 0x7060
#define AL_FRAME_INIT -1
#define AL_FX_ECHO 5
#define RM_AA_PCL_SURF(clk) AA_EN | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | G_AC_DITHER | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define ICON_unused_12D_palette 0x2C300
#define GU_PARSE_RDP_TYPE 2
#define ICON_badge_HappyHeart_palette 0x1A780
#define G_CC_SHADE 0, 0, 0, SHADE, 0, 0, 0, SHADE
#define AI_BASE_REG 0x04500000
#define C0_MINREVMASK 0xf
#define ICON_battle_FireFlower_disabled_palette 0x2A5E0
#define MAP_DATA_SECTION_START __asm__(".section .data\n");
#define G_RM_AA_ZB_DEC_LINE RM_AA_ZB_DEC_LINE(1)
#define alCSPSetFXMix alCSPSetChlFXMix
#define OS_VI_FPAL_HPF1 51
#define OS_VI_FPAL_HPF2 55
#define OS_STATE_RUNNING 4
#define AI_STATUS_FIFO_FULL 0x80000000
#define ICON_food_FirePop_palette 0x6760
#define ICON_unused_0F4_raster 0x22EC0
#define ICON_badge_SpinSmash_palette 0x14FC0
#define G_MTX_PROJECTION 0x04
#define gDPSetTextureImage(pkt,f,s,w,i) gSetImage(pkt, G_SETTIMG, f, s, w, i)
#define es_Call(func) ENTITY_SCRIPT_OP_Call, (s32)func,
#define ICON_anim_sp_6_raster 0x315A0
#define ICON_food_HoneyCandy_disabled_raster 0x60E0
#define C0_ERROR_EPC 30
#define ICON_unused_08E_disabled_palette 0x13960
#define TLBPGMASK_16K 0x6000
#define gsDPLoadTextureBlock_4b(timg,fmt,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, G_IM_SIZ_16b, 1, timg), gsDPSetTile(fmt, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadBlock(G_TX_LOADTILE, 0, 0, (((width)*(height)+3)>>2)-1, CALC_DXT_4b(width)), gsDPPipeSync(), gsDPSetTile(fmt, G_IM_SIZ_4b, ((((width)>>1)+7)>>3), 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC)
#define hs_SetCustomSize(arg0,arg1) HUD_ELEMENT_OP_SetCustomSize, arg0, arg1,
#define OS_VI_FPAL_HPN2 54
#define OS_VI_GAMMA_DITHER_OFF 0x0008
#define CALC_DXT(width,b_txl) (((1 << G_TX_DXT_FRAC) + TXL2WORDS(width, b_txl) - 1) / TXL2WORDS(width, b_txl))
#define gsDPSetHilite1Tile(tile,hilite,width,height) gsDPSetTileSize(tile, (hilite)->h.x1 & 0xfff, (hilite)->h.y1 & 0xfff, ((((width)-1)*4)+(hilite)->h.x1) & 0xfff, ((((height)-1)*4)+(hilite)->h.y1) & 0xfff)
#define G_IM_SIZ_4b 0
#define ICON_food_WhackasBump_raster 0x27480
#define G_MDSFT_ALPHADITHER 4
#define G_SETSCISSOR 0xed
#define G_RM_ZB_OPA_DECAL RM_ZB_OPA_DECAL(1)
#define AL_PHASE_RELEASE 3
#define HOST_DATA_ACK 17
#define ICON_key_mystery_note_raster 0xC100
#define G_MDSFT_TEXTCONV 9
#define G_IM_SIZ_8b 1
#define NPC_DISPOSE_POS_Y -1000
#define NPC_DISPOSE_POS_Z 0
#define MOTOR_STOP 0
#define EVT_FLOAT_ROUND(x) ((x) >=0 ? (f64)((x) + 0.9) : (f64)(x))
#define ICON_anim_coin_4_palette 0x2FBE0
#define ICON_food_Mushroom_raster 0x237C0
#define ICON_badge_PowerPlus_palette 0x15440
#define _SIZE_T 
#define HUD_ELEMENT_H 
#define RM_ADD(clk) IM_RD | CVG_DST_SAVE | FORCE_BL | ZMODE_OPA | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_FOG, G_BL_CLR_MEM, G_BL_1)
#define G_SETKEYGB 0xea
#define ICON_battle_HustleDrink_palette 0x29A80
#define G_CC_BLENDPE PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, SHADE, 0
#define ERR_OSTHPROFILEREADTIMETH_FLAG 142
#define K2BASE 0xC0000000
#define gSPInsertMatrix(pkt,where,num) ERROR!! gSPInsertMatrix is no longer supported.
#define G_CC_MODULATEI TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE
#define _OS_TLB_H_ 
#define gsSPLineW3D(v0,v1,wd,flag) {{ _SHIFTL(G_LINE3D, 24, 8)|__gsSPLine3D_w1f(v0, v1, wd, flag), 0 }}
#define SP_DMEM_END 0x04000FFF
#define alSeqpSetChannelPriority alSeqpSetChlPriority
#define PI_SET_RESET PI_STATUS_RESET
#define OS_IM_RCP 0x00000401
#define SR_KSU_KER 0x00000000
#define G_IM_SIZ_DD 5
#define ICON_key_koot_package_raster 0xEDE0
#define VI_PAL_CLOCK 49656530
#define G_MWO_POINT_ST 0x14
#define SSTATEMASK 0x00001c00
#define G_TP_PERSP (1 << G_MDSFT_TEXTPERSP)
#define _ULTRATYPES_H_ 
#define gSPTextureRectangle(pkt,xl,yl,xh,yh,tile,s,t,dsdx,dtdy) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_TEXRECT, 24, 8) | _SHIFTL(xh, 12, 12) | _SHIFTL(yh, 0, 12)); _g->words.w1 = (_SHIFTL(tile, 24, 3) | _SHIFTL(xl, 12, 12) | _SHIFTL(yl, 0, 12)); gImmp1(pkt, G_RDPHALF_1, (_SHIFTL(s, 16, 16) | _SHIFTL(t, 0, 16))); gImmp1(pkt, G_RDPHALF_2, (_SHIFTL(dsdx, 16, 16) | _SHIFTL(dtdy, 0, 16)));}
#define EVT_BITWISE_OR(VAR,VALUE) EVT_CMD(EVT_OP_BITWISE_OR, VAR, VALUE),
#define VI_WIDTH_REG (VI_BASE_REG+0x08)
#define _REGION_H_ 
#define ICON_badge_PayOff_raster 0x19EC0
#define MI_SET_EBUS 0x0400
#define CAUSE_EXCMASK 0x0000007C
#define gsSPSprite2DDraw(px,py) {{ (_SHIFTL(G_SPRITE2D_DRAW, 24, 8)), (_SHIFTL((px), 16, 16) | _SHIFTL((py), 0, 16)) }}
#define ICON_badge_PowerRush_disabled_raster 0x1E000
#define DPC_SET_FREEZE 0x0008
#define VI_TIMING_REG VI_BURST_REG
#define G_RDPCMDSIZ 64
#define ICON_badge_HPDrain_disabled_palette 0x19120
#define ICON_badge_JumpCharge_palette 0x17600
#define C0_CONFIG 16
#define ICON_battle_StopWatch_disabled_raster 0x29AC0
#define ICON_badge_DDownPound_disabled_raster 0x17AC0
#define G_MW_FOG 0x08
#define gSPNumLights(pkt,n) gMoveWd(pkt, G_MW_NUMLIGHT, G_MWO_NUMLIGHT, NUML(n))
#define G_MDSFT_ALPHACOMPARE 0
#define MSG_PTR u8*
#define OS_RG_ALIGN_DEFAULT OS_RG_ALIGN_8B
#define CHNL_ERR_MASK 0xC0
#define ICON_food_Coconut_disabled_palette 0x266E0
#define CONT_TYPE_VOICE 0x0100
#define GU_PARSE_STRING_TYPE 6
#define ERR_OSREADHOST_ADDR 70
#define G_MWO_POINT_ZSCREEN 0x1c
#define ICON_key_key_bowser_castle_raster 0x98A0
#define A_ADPCM 1
#define EVT_BREAK_SWITCH EVT_CMD(EVT_OP_BREAK_SWITCH),
#define _MIPS_SZLONG 32
#define PFS_ERR_EXIST 9
#define EXC_SYSCALL EXC_CODE(8)
#define ICON_anim_coin_8_palette 0x300E0
#define G_IM_SIZ_8b_LINE_BYTES G_IM_SIZ_8b_BYTES
#define RM_CLD_SURF(clk) IM_RD | CVG_DST_SAVE | FORCE_BL | ZMODE_OPA | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define ERR_OSVISETMODE 45
#define ICON_badge_AttackFXD_raster 0x21840
#define gDPNoOp(pkt) gDPNoParam(pkt, G_NOOP)
#define _OS_REG_H_ 
#define ICON_key_pulse_stone_palette 0xA100
#define ICON_food_SpicySoup_palette 0x2620
#define ERR_OSVISETEVENT 46
#define ERR_ALSNDPSETSOUND 110
#define DPS_BUFTEST_ADDR_REG (DPS_BASE_REG+0x08)
#define ICON_unused_12F_raster 0x2C580
#define DPC_SET_XBUS_DMEM_DMA 0x0002
#define ICON_battle_137_raster 0x2A180
#define ALIGN(s,align) (((u32)(s) + ((align)-1)) & ~((align)-1))
#define ICON_badge_MegaSmash_disabled_raster 0x1C500
#define ERR_ALCSPVNOTFREE 130
#define ICON_unused_0F6_palette 0x23540
#define EVT_INDEX_OF_AREA_BYTE(v) ((v) + EVT_AREA_BYTE_OFFSET)
#define NAMESUFFIX 
#define RDRAM_0_CONFIG 0x00000
#define ICON_food_NuttyCake_palette 0x7BA0
#define MQ_GET_COUNT(mq) ((mq)->validCount)
#define ICON_food_MapleUltra_disabled_raster 0x2AE0
#define gsSPTextureRectangle(xl,yl,xh,yh,tile,s,t,dsdx,dtdy) {{(_SHIFTL(G_TEXRECT, 24, 8) | _SHIFTL(xh, 12, 12) | _SHIFTL(yh, 0, 12)), (_SHIFTL(tile, 24, 3) | _SHIFTL(xl, 12, 12) | _SHIFTL(yl, 0, 12))}}, gsImmp1(G_RDPHALF_1, (_SHIFTL(s, 16, 16) | _SHIFTL(t, 0, 16))), gsImmp1(G_RDPHALF_2, (_SHIFTL(dsdx, 16, 16) | _SHIFTL(dtdy, 0, 16)))
#define gSPPopMatrix(pkt,n) gSPPopMatrixN((pkt), (n), 1)
#define ICON_food_Lemon_disabled_raster 0x25980
#define ICON_Hammer2_palette 0x2DD80
#define gsSPBranchLessZrg(dl,vtx,zval,near,far,flag,zmin,zmax) {{ _SHIFTL(G_RDPHALF_1,24,8), (unsigned int)(dl), }}, {{ _SHIFTL(G_BRANCH_Z,24,8)|_SHIFTL((vtx)*5,12,12)|_SHIFTL((vtx)*2,0,12), G_DEPTOZSrg(zval, near, far, flag, zmin, zmax), }}
#define GU_PARSEGBI_FLTMTX 4
#define ICON_battle_13E_disabled_palette 0x14B60
#define ICON_food_MapleShroom_disabled_raster 0x7BE0
#define ICON_badge_AttackFXA_disabled_palette 0x18CA0
#define ICON_badge_SpinSmash_raster 0x14DC0
#define gDPSetKeyR(pkt,cR,sR,wR) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_SETKEYR, 24, 8); _g->words.w1 = (_SHIFTL(wR, 16, 12) | _SHIFTL(cR, 8, 8) | _SHIFTL(sR, 0, 8)); }
#define ICON_badge_SpikeShield_raster 0x15900
#define PI_STATUS_ERROR 0x04
#define ICON_food_KookyCookie_raster 0x72E0
#define ICON_anim_coin_8_raster 0x2FFC0
#define OS_IM_RDBWRITE 0x00002401
#define gDPLoadTLUT(pkt,count,tmemaddr,dram) { gDPSetTextureImage(pkt, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, dram); gDPTileSync(pkt); gDPSetTile(pkt, 0, 0, 0, tmemaddr, G_TX_LOADTILE, 0 , 0, 0, 0, 0, 0, 0); gDPLoadSync(pkt); gDPLoadTLUTCmd(pkt, G_TX_LOADTILE, ((count)-1)); gDPPipeSync(pkt); }
#define CONFIG_K0 0x00000007
#define ICON_food_FriedEgg_disabled_palette 0x5E80
#define TLBLO_D 0x4
#define TLBLO_G 0x1
#define TLBLO_V 0x2
#define ICON_peach_BakingMilk_palette 0x28F40
#define gDPSetBlendColor(pkt,r,g,b,a) DPRGBColor(pkt, G_SETBLENDCOLOR, r,g,b,a)
#define ICON_badge_MoneyMoney_disabled_palette 0x1A320
#define _OS_HOST_H_ 
#define CVG_DST_CLAMP 0
#define G_RM_ZB_XLU_DECAL RM_ZB_XLU_DECAL(1)
#define ICON_key_toybox_train_raster 0xBAA0
#define PPARITY_MASK 0x0001
#define OS_IM_COUNTER 0x00008401
#define ICON_badge_AutoJump_disabled_raster 0x17880
#define ICON_key_magic_bean_palette 0xD400
#define GAME_FAULT_SEND 14
#define ICON_badge_PayOff_disabled_raster 0x19EC0
#define ICON_food_KookyCookie_palette 0x74E0
#define gsDPSetFogColor(r,g,b,a) sDPRGBColor(G_SETFOGCOLOR, r,g,b,a)
#define EVT_GAME_FLAG_OFFSET 130000000
#define ICON_food_RedBerry_disabled_palette 0x24BE0
#define CONT_START 0x1000
#define gDPLoadTile(pkt,t,uls,ult,lrs,lrt) gDPLoadTileGeneric(pkt, G_LOADTILE, t, uls, ult, lrs, lrt)
#define ICON_food_SuperShroom_disabled_palette 0x23C20
#define G_IM_SIZ_32b_TILE_BYTES 2
#define G_TEXRECT 0xe4
#define ICON_unused_08F_raster 0x13980
#define MI_INTR_MASK_SET_AI 0x0020
#define ICON_unused_08E_palette 0x13940
#define ICON_battle_SnowmanDoll_raster 0x2A600
#define MI_INTR_MASK_SET_DP 0x0800
#define G_RM_AA_ZB_XLU_LINE2 RM_AA_ZB_XLU_LINE(2)
#define OS_PRIORITY_PIMGR 150
#define ICON_unused_127_disabled_raster 0x2B380
#define ICON_food_DriedFruit_raster 0x25BC0
#define VOICE_STATUS_CANCEL 3
#define OS_VI_DITHER_FILTER_OFF 0x0080
#define G_TX_LOADTILE 7
#define ICON_key_gear_lucky_star_palette 0x21E0
#define ICON_food_DriedFruit_disabled_raster 0x25BC0
#define ICON_unused_0D5_raster 0x1E900
#define ICON_anim_coin_6_raster 0x2FD40
#define G_VTX 0x01
#define spInit spX2Init
#define ICON_key_key_storeroom_raster 0xB880
#define ICON_badge_DamageDodge_raster 0x1F680
#define ICON_food_YoshiCookie_palette 0x8260
#define gsSPNoOp() gsDma0p(G_SPNOOP, 0, 0)
#define G_TRI_SHADE_ZBUFF 0xcd
#define ICON_badge_ZapTap_disabled_palette 0x1A9E0
#define G_MAXZ 0x03ff
#define ERR_OSAISETFREQUENCY 14
#define ICON_badge_DodgeMaster_disabled_raster 0x15480
#define EEPROM_TYPE_4K 0x01
#define A_CLEARBUFF 2
#define MENU_PANEL_SELECTED_GRID_DATA(panel) (panel)->gridData[(panel)->page * (panel)->numCols * (panel)->numRows + (panel)->numCols * (panel)->row + (panel)->col]
#define ICON_badge_AutoJump_disabled_palette 0x17AA0
#define MI_INTR_MASK_SET_PI 0x0200
#define ICON_badge_AttackFXC_raster 0x21F00
#define CONT_ERR_VOICE_WORD 14
#define OS_PM_256K 0x007e000
#define VI_CURRENT_REG (VI_BASE_REG+0x10)
#define MI_INTR_MASK_SET_SP 0x0002
#define ICON_unused_0DF_disabled_raster 0x1FF80
#define CONT_ABSOLUTE 0x0001
#define _OS_RSP_H_ 
#define _GBI_H_ 
#define ICON_badge_ShrinkSmash_disabled_palette 0x1F1E0
#define AL_PHASE_ATTACK 0
#define MI_INTR_MASK_SET_VI 0x0080
#define ICON_badge_BumpAttack_disabled_raster 0x1CBC0
#define ICON_badge_QuakeHammer_disabled_palette 0x161E0
#define ICON_food_SuperShroom_palette 0x23C00
#define RM_NOOP(clk) GBL_c ##clk(0, 0, 0, 0)
#define SP_STATUS_RSPSIGNAL SP_STATUS_SIG3
#define AI_CONTROL_DMA_ON 0x01
#define ICON_food_Lime_disabled_palette 0x25960
#define _OS_SI_H_ 
#define CONT_ERR_VOICE_NO_RESPONSE 15
#define SP_CLR_HALT 0x00001
#define C0_WATCHHI 19
#define ICON_anim_sp_small_4_raster 0x31DA0
#define ERR_OSGETTIME 74
#define G_CCMUX_COMBINED 0
#define AL_MAX_PRIORITY 127
#define ICON_badge_GroupFocus_raster 0x21600
#define C0_WATCHLO 18
#define G_RM_AA_ZB_SUB_TERR RM_AA_ZB_SUB_TERR(1)
#define G_TD_DETAIL (2 << G_MDSFT_TEXTDETAIL)
#define A_LEFT 0x02
#define OS_VI_DIVOT_ON 0x0010
#define VI_ORIGIN_REG (VI_BASE_REG+0x04)
#define gDPSetCombineMode(pkt,a,b) gDPSetCombineLERP(pkt, a, b)
#define gsDPSetCombine(muxs0,muxs1) {{ _SHIFTL(G_SETCOMBINE, 24, 8) | _SHIFTL(muxs0, 0, 24), (unsigned int)(muxs1) }}
#define G_CC_HILITERGBDECALA2 ENVIRONMENT, COMBINED, TEXEL0, COMBINED, 0, 0, 0, TEXEL0
#define ICON_badge_ShrinkSmash_raster 0x1EFC0
#define ERR_OSTHPROFILESTART_FLAG 136
#define G_CC_BLENDI ENVIRONMENT, SHADE, TEXEL0, SHADE, 0, 0, 0, SHADE
#define gDPSetColorImage(pkt,f,s,w,i) gSetImage(pkt, G_SETCIMG, f, s, w, i)
#define ICON_battle_PleaseComeBack_disabled_raster 0x13BC0
#define EXC_VCED EXC_CODE(31)
#define ICON_badge_PDownDUp_disabled_raster 0x1D040
#define EXC_VCEI EXC_CODE(14)
#define ICON_food_Mushroom_disabled_palette 0x239E0
#define G_TX_LDBLK_MAX_TXL 2047
#define CHNL_ERR_FRAME 0x80
#define EVT_INDEX_OF_MAP_VAR(v) ((v) + EVT_MAP_VAR_OFFSET)
#define RDRAM_DEVICE_MANUF_REG (RDRAM_BASE_REG+0x24)
#define gDPTextureRectangleFlip(pkt,xl,yl,xh,yh,tile,s,t,dsdx,dtdy) { Gfx *_g = (Gfx *)(pkt); if (pkt); _g->words.w0 = (_SHIFTL(G_TEXRECTFLIP, 24, 8) | _SHIFTL(xh, 12, 12) | _SHIFTL(yh, 0, 12)); _g->words.w1 = (_SHIFTL(tile, 24, 3) | _SHIFTL(xl, 12, 12) | _SHIFTL(yl, 0, 12)); _g ++; _g->words.w0 = (_SHIFTL(s, 16, 16) | _SHIFTL(t, 0, 16)); _g->words.w1 = (_SHIFTL(dsdx, 16, 16) | _SHIFTL(dtdy, 0, 16)); }
#define ACMD_SIZE 32
#define va_arg(AP,TYPE) (AP = (__gnuc_va_list) ((char *) (AP) + __va_rounded_size (TYPE)), *((TYPE *) (void *) ((char *) (AP) - ((sizeof (TYPE) < __va_rounded_size (char) ? sizeof (TYPE) : __va_rounded_size (TYPE))))))
#define ICON_badge_AllorNothing_disabled_raster 0x18CC0
#define AI_PROJECTILE_AMMO_COUNT varTable[3]
#define AA_EN 0x8
#define K0_TO_K1(x) ((u32)(x)|0xA0000000)
#define GAME_PROF_SEND 12
#define G_RM_RA_OPA_SURF2 RM_RA_OPA_SURF(2)
#define G_MV_MMTX 2
#define HES_TEMPLATE_CI_CUSTOM_SIZE(name,sizeX,sizeY) { hs_SetVisible hs_SetCustomSize(sizeX, sizeY) hs_Loop hs_SetCI(60, name) hs_Restart hs_End }
#define ICON_unused_08E_raster 0x13740
#define G_RM_AA_PCL_SURF2 RM_AA_PCL_SURF(2)
#define SP_STATUS_HALT 0x001
#define gSPModifyVertex(pkt,vtx,where,val) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_MODIFYVTX,24,8)| _SHIFTL((where),16,8)|_SHIFTL((vtx)*2,0,16)); _g->words.w1 = (unsigned int)(val); }
#define OS_EVENT_RDB_FREE_RAMROM 19
#define EVT_MAP_FLAG_OFFSET 90000000
#define ICON_key_mailbag_palette 0xF860
#define gSPVertex(pkt,v,n,v0) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_VTX,24,8)|_SHIFTL((n),12,8)|_SHIFTL((v0)+(n),1,7); _g->words.w1 = (unsigned int)(v); }
#define AL_FX_NONE 0
#define DEVICE_TYPE_INIT 7
#define OS_TASK_YIELDED 0x0001
#define ICON_battle_ThunderBolt_disabled_raster 0x2AA80
#define SP_TEXSHIFT 0x00000080
#define gsDPSetKeyGB(cG,sG,wG,cB,sB,wB) {{ (_SHIFTL(G_SETKEYGB, 24, 8) | _SHIFTL(wG, 12, 12) | _SHIFTL(wB, 0, 12)), (_SHIFTL(cG, 24, 8) | _SHIFTL(sG, 16, 8) | _SHIFTL(cB, 8, 8) | _SHIFTL(sB, 0, 8)) }}
#define OS_IM_CPU 0x0000ff01
#define PI_DOM1_ADDR1 0x06000000
#define PI_DOM1_ADDR2 0x10000000
#define PI_DOM1_ADDR3 0x1FD00000
#define _gsDPLoadTextureBlock(timg,tmem,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, siz ##_LOAD_BLOCK, 1, timg), gsDPSetTile(fmt, siz ##_LOAD_BLOCK, 0, tmem, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadBlock(G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT)-1, CALC_DXT(width, siz ##_BYTES)), gsDPPipeSync(), gsDPSetTile(fmt, siz, ((((width) * siz ##_LINE_BYTES)+7)>>3), tmem, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC)
#define ICON_food_StrangeCake_disabled_palette 0x72C0
#define ICON_badge_RightOn_disabled_raster 0x1AC40
#define _G_CC_TWOCOLORTEX PRIMITIVE, SHADE, TEXEL0, SHADE, 0, 0, 0, SHADE
#define G_RDP_ADDR_FIXUP 3
#define ICON_battle_DustyHammer_disabled_raster 0x2AF00
#define G_TX_NOMIRROR 0
#define RM_RA_ZB_OPA_DECAL(clk) AA_EN | Z_CMP | CVG_DST_WRAP | ALPHA_CVG_SEL | ZMODE_DEC | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define ICON_battle_Parasol_palette 0x2BE80
#define gsSPViewport(v) gsDma2p( G_MOVEMEM, (v), sizeof(Vp), G_MV_VIEWPORT, 0)
#define SP_IBIST_REG 0x04080004
#define gSPTexture(pkt,s,t,level,tile,on) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_TEXTURE,24,8) | _SHIFTL(BOWTIE_VAL,16,8) | _SHIFTL((level),11,3) | _SHIFTL((tile),8,3) | _SHIFTL((on),1,7)); _g->words.w1 = (_SHIFTL((s),16,16) | _SHIFTL((t),0,16)); }
#define ICON_peach_BakingButter_disabled_palette 0x28660
#define ICON_badge_DizzyAttack_disabled_palette 0x1D920
#define DPC_CLR_PIPE_CTR 0x0080
#define VI_DRAM_ADDR_REG VI_ORIGIN_REG
#define CONT_UP 0x0800
#define BOOT_ADDRESS_COSIM 0x80002000
#define ICON_badge_AttackFXB_raster 0x21A80
#define G_MWO_MATRIX_ZX_ZY_F 0x30
#define G_MWO_MATRIX_ZX_ZY_I 0x10
#define ICON_unused_0F1_raster 0x22800
#define gsDma2p(c,adrs,len,idx,ofs) {{ (_SHIFTL((c),24,8)|_SHIFTL(((len)-1)/8,19,5)| _SHIFTL((ofs)/8,8,8)|_SHIFTL((idx),0,8)), (unsigned int)(adrs) }}
#define M_PI 3.14159265358979323846
#define ERR_OSWRITEHOST_SIZE 73
#define ICON_key_key_red_raster 0xE980
#define gDPPipelineMode(pkt,mode) gSPSetOtherMode(pkt, G_SETOTHERMODE_H, G_MDSFT_PIPELINE, 1, mode)
#define _TYPES_H_ 
#define C0_CACHE_ERR 27
#define ICON_battle_StopWatch_raster 0x29AC0
#define RDRAM_ADDR_SELECT_REG (RDRAM_BASE_REG+0x20)
#define ICON_anim_coin_2_palette 0x2F960
#define ICON_food_HoneySyrup_palette 0x26FC0
#define gSPSetLights6(pkt,name) { gSPNumLights(pkt,NUMLIGHTS_6); gSPLight(pkt,&name.l[0],1); gSPLight(pkt,&name.l[1],2); gSPLight(pkt,&name.l[2],3); gSPLight(pkt,&name.l[3],4); gSPLight(pkt,&name.l[4],5); gSPLight(pkt,&name.l[5],6); gSPLight(pkt,&name.a,7); }
#define ICON_key_koot_the_tape_raster 0x11AC0
#define OS_OTHERS 2
#define ICON_key_fertile_soil_raster 0xD420
#define G_TEXRECTFLIP 0xe5
#define ICON_battle_Mystery_disabled_palette 0x144A0
#define RDRAM_CONFIG_REG (RDRAM_BASE_REG+0x00)
#define MI_MODE_INIT 0x0080
#define ICON_badge_SleepStomp_raster 0x168C0
#define EVS_MakeEntities EVS_MakeEntities
#define ICON_key_koot_photo_palette 0x12780
#define ICON_food_Koopasta_disabled_raster 0x2F60
#define PDIRTYEXCL 0x00C0
#define ICON_key_key_bowser_castle_palette 0x9AA0
#define LIGHT_4 4
#define ICON_anim_sp_small_1_palette 0x31D00
#define HS_PTR(sym) (s32)&sym
#define SI_STATUS_REG (SI_BASE_REG+0x18)
#define ICON_badge_MegaHPDrain_raster 0x1C980
#define ERR_OSPIRAWWRITEIO 20
#define ICON_battle_XBandage_disabled_palette 0x29620
#define G_MDSFT_PIPELINE 23
#define MI_INTR_SP 0x01
#define gImmp0(pkt,c) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL((c), 24, 8); }
#define gImmp1(pkt,c,p0) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL((c), 24, 8); _g->words.w1 = (unsigned int)(p0); }
#define gImmp2(pkt,c,p0,p1) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL((c), 24, 8); _g->words.w1 = _SHIFTL((p0), 16, 16) | _SHIFTL((p1), 8, 8); }
#define gImmp3(pkt,c,p0,p1,p2) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL((c), 24, 8); _g->words.w1 = (_SHIFTL((p0), 16, 16) | _SHIFTL((p1), 8, 8) | _SHIFTL((p2), 0, 8)); }
#define G_AC_NONE (0 << G_MDSFT_ALPHACOMPARE)
#define G_CCMUX_SHADE 4
#define gsSPSetLights2(name) gsSPNumLights(NUMLIGHTS_2), gsSPLight(&name.l[0],1), gsSPLight(&name.l[1],2), gsSPLight(&name.a,3)
#define CACHERR_SIDX_MASK 0x003ffff8
#define TEX_EDGE 0x0000
#define SP_OVERLAP 0x00000040
#define ERR_OSCREATETHREAD_SP 1
#define _VA_LIST 
#define G_CCMUX_TEXEL0 1
#define G_CCMUX_TEXEL1 2
#define A_INTERLEAVE 13
#define PFS_ERR_NEW_GBCART 13
#define G_ACMUX_ENVIRONMENT 5
#define SI_DRAM_ADDR_REG (SI_BASE_REG+0x00)
#define ICON_badge_ShrinkStomp_disabled_palette 0x1F420
#define OS_EVENT_SW1 0
#define OS_EVENT_SW2 1
#define es_End ENTITY_SCRIPT_OP_End,
#define G_RM_AA_ZB_OPA_DECAL2 RM_AA_ZB_OPA_DECAL(2)
#define ICON_key_forest_pass_palette 0xADC0
#define gSPSetOtherMode(pkt,cmd,sft,len,data) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(cmd,24,8)|_SHIFTL(32-(sft)-(len),8,8)| _SHIFTL((len)-1,0,8)); _g->words.w1 = (unsigned int)(data); }
#define SP_IBIST_CHECK 0x01
#define ICON_battle_RepelGel_palette 0x146C0
#define ICON_anim_hand_5_palette 0x2CF20
#define EVT_AREA_FLAG_CUTOFF -100000000
#define hs_op_15(arg0) HUD_ELEMENT_OP_op_15, arg0,
#define C0_BADVADDR 8
#define ICON_badge_DamageDodge_disabled_palette 0x1F8A0
#define ICON_food_MapleSyrup_raster 0x27000
#define ICON_badge_JumpCharge0_palette 0x19340
#define ICON_badge_AttackFXC_palette 0x22100
#define ICON_badge_ZapTap_raster 0x1A7C0
#define OS_MESG_TYPE_DMAWRITE (OS_MESG_TYPE_BASE+2)
#define G_MWO_MATRIX_YX_YY_F 0x28
#define G_MWO_MATRIX_YX_YY_I 0x08
#define AL_PLAYING 1
#define gsDPSetAlphaCompare(type) gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 2, type)
#define ICON_key_ruins_stone_star_raster 0xA780
#define _SIZE_T_DEF 
#define gsSPDisplayList(dl) gsDma1p( G_DL,dl,0,G_DL_PUSH)
#define alCSPGetProgram alCSPGetChlProgram
#define ICON_food_Coconut_disabled_raster 0x264C0
#define PI_STATUS_RESET 0x01
#define gDPNoParam(pkt,cmd) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(cmd, 24, 8); _g->words.w1 = 0; }
#define ERR_ALSEQP_OFF_VOICE 103
#define PI_BSD_DOM2_PGS_REG (PI_BASE_REG+0x2C)
#define ICON_peach_BakingButter_disabled_raster 0x28440
#define ICON_food_Mistake_palette 0x4EA0
#define gSPClipRatio(pkt,r) { gMoveWd(pkt, G_MW_CLIP, G_MWO_CLIP_RNX, FR_NEG_ ##r); gMoveWd(pkt, G_MW_CLIP, G_MWO_CLIP_RNY, FR_NEG_ ##r); gMoveWd(pkt, G_MW_CLIP, G_MWO_CLIP_RPX, FR_POS_ ##r); gMoveWd(pkt, G_MW_CLIP, G_MWO_CLIP_RPY, FR_POS_ ##r); }
#define EXC_WMISS EXC_CODE(3)
#define ICON_food_MapleShroom_palette 0x7DE0
#define A_SPNOOP 0
#define ICON_badge_AttackFXA_raster 0x18A80
#define VI_CTRL_DIVOT_ON 0x00010
#define gsSPSetLights0(name) gsSPNumLights(NUMLIGHTS_0), gsSPLight(&name.l[0],1), gsSPLight(&name.a,2)
#define gsSPSetLights1(name) gsSPNumLights(NUMLIGHTS_1), gsSPLight(&name.l[0],1), gsSPLight(&name.a,2)
#define gsSPSetLights3(name) gsSPNumLights(NUMLIGHTS_3), gsSPLight(&name.l[0],1), gsSPLight(&name.l[1],2), gsSPLight(&name.l[2],3), gsSPLight(&name.a,4)
#define gsSPSetLights4(name) gsSPNumLights(NUMLIGHTS_4), gsSPLight(&name.l[0],1), gsSPLight(&name.l[1],2), gsSPLight(&name.l[2],3), gsSPLight(&name.l[3],4), gsSPLight(&name.a,5)
#define gsSPSetLights5(name) gsSPNumLights(NUMLIGHTS_5), gsSPLight(&name.l[0],1), gsSPLight(&name.l[1],2), gsSPLight(&name.l[2],3), gsSPLight(&name.l[3],4), gsSPLight(&name.l[4],5), gsSPLight(&name.a,6)
#define gsSPSetLights6(name) gsSPNumLights(NUMLIGHTS_6), gsSPLight(&name.l[0],1), gsSPLight(&name.l[1],2), gsSPLight(&name.l[2],3), gsSPLight(&name.l[3],4), gsSPLight(&name.l[4],5), gsSPLight(&name.l[5],6), gsSPLight(&name.a,7)
#define gsSPSetLights7(name) gsSPNumLights(NUMLIGHTS_7), gsSPLight(&name.l[0],1), gsSPLight(&name.l[1],2), gsSPLight(&name.l[2],3), gsSPLight(&name.l[3],4), gsSPLight(&name.l[4],5), gsSPLight(&name.l[5],6), gsSPLight(&name.l[6],7), gsSPLight(&name.a,8)
#define ICON_anim_shimmer_0_palette 0x30260
#define RDRAM_MODE_REG (RDRAM_BASE_REG+0x0c)
#define EVT_LIMIT -270000000
#define GameFlag(INDEX) ((INDEX) - EVT_GAME_FLAG_OFFSET)
#define G_CCMUX_ENVIRONMENT 5
#define UNK_TYPE s32
#define ICON_Boots1_palette 0x2E200
#define ICON_food_LimeCandy_raster 0x67A0
#define ICON_battle_MagicMirror_disabled_palette 0x2C0E0
#define FTOFRAC8(x) ((int) MIN(((x) * (128.0f)), 127.0f) & 0xff)
#define PIF_ROM_END 0x1FC007BF
#define gsSPLightColor(n,col) gsMoveWd(G_MW_LIGHTCOL, G_MWO_a ##n, col), gsMoveWd(G_MW_LIGHTCOL, G_MWO_b ##n, col)
#define PI_DRAM_ADDR_REG (PI_BASE_REG+0x00)
#define CAM_NEAR_CLIP 16
#define ICON_food_YummyMeal_disabled_palette 0x4380
#define G_RM_ZB_PCL_SURF2 RM_ZB_PCL_SURF(2)
#define ICON_battle_DustyHammer_palette 0x2B100
#define IS_BADGE(itemID) (itemID >= ITEM_FIRST_BADGE && itemID <= ITEM_LAST_BADGE)
#define RM_AA_ZB_SUB_TERR(clk) AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_FULL | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define RM_VISCVG(clk) IM_RD | FORCE_BL | GBL_c ##clk(G_BL_CLR_IN, G_BL_0, G_BL_CLR_BL, G_BL_A_MEM)
#define ICON_food_RedBerry_raster 0x249C0
#define VI_CTRL_TYPE_16 0x00002
#define gsSPClipRatio(r) gsMoveWd(G_MW_CLIP, G_MWO_CLIP_RNX, FR_NEG_ ##r), gsMoveWd(G_MW_CLIP, G_MWO_CLIP_RNY, FR_NEG_ ##r), gsMoveWd(G_MW_CLIP, G_MWO_CLIP_RPX, FR_POS_ ##r), gsMoveWd(G_MW_CLIP, G_MWO_CLIP_RPY, FR_POS_ ##r)
#define gsSPVertex(v,n,v0) {{ (_SHIFTL(G_VTX,24,8)|_SHIFTL((n),12,8)|_SHIFTL((v0)+(n),1,7)), (unsigned int)(v) }}
#define ICON_badge_TripleDip_disabled_palette 0x1B760
#define ICON_food_CocoPop_disabled_palette 0x6C00
#define ICON_unused_02E_disabled_palette 0x8B80
#define ERR_OSPIRAWSTARTDMA_ADDR 23
#define ERR_ALCSEQZEROVEL 129
#define ICON_food_KoopaLeaf_palette 0x254C0
#define ICON_peach_BakingButter_raster 0x28440
#define ICON_food_Goomnut_disabled_palette 0x252A0
#define gsSPModifyVertex(vtx,where,val) {{ _SHIFTL(G_MODIFYVTX,24,8)| _SHIFTL((where),16,8)|_SHIFTL((vtx)*2,0,16), (unsigned int)(val) }}
#define gsDPSetAlphaDither(mode) gsSPSetOtherMode(G_SETOTHERMODE_H, G_MDSFT_ALPHADITHER, 2, mode)
#define __gsSPLine3D_w1(v0,v1,wd) (_SHIFTL((v0)*2,16,8)|_SHIFT((v1)*2,8,8)|_SHIFT((wd),0,8))
#define PFS_WRITE 1
#define G_CC_MODULATEI_PRIM TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE
#define ICON_anim_hand_7_palette 0x2D1A0
#define G_CC_ADDRGBDECALA 1, 0, TEXEL0, SHADE, 0, 0, 0, TEXEL0
#define C0_ECC 26
#define G_IM_SIZ_8b_INCR 1
#define ICON_peach_BakingSalt_disabled_raster 0x27900
#define G_MWO_MATRIX_XX_XY_F 0x20
#define G_MWO_MATRIX_XX_XY_I 0x00
#define PI_CART_ADDR_REG (PI_BASE_REG+0x04)
#define ICON_badge_HeartFinder_disabled_raster 0x1D280
#define gsDPLoadTextureTile(timg,fmt,siz,width,height,uls,ult,lrs,lrt,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, siz, width, timg), gsDPSetTile(fmt, siz, (((((lrs)-(uls)+1) * siz ##_TILE_BYTES)+7)>>3), 0, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadTile( G_TX_LOADTILE, (uls)<<G_TEXTURE_IMAGE_FRAC, (ult)<<G_TEXTURE_IMAGE_FRAC, (lrs)<<G_TEXTURE_IMAGE_FRAC, (lrt)<<G_TEXTURE_IMAGE_FRAC), gsDPPipeSync(), gsDPSetTile(fmt, siz, (((((lrs)-(uls)+1) * siz ##_LINE_BYTES)+7)>>3), 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(G_TX_RENDERTILE, (uls)<<G_TEXTURE_IMAGE_FRAC, (ult)<<G_TEXTURE_IMAGE_FRAC, (lrs)<<G_TEXTURE_IMAGE_FRAC, (lrt)<<G_TEXTURE_IMAGE_FRAC)
#define ICON_badge_QuakeHammer_disabled_raster 0x15FC0
#define G_TRI_TXTR 0xca
#define gSPFogFactor(pkt,fm,fo) gMoveWd(pkt, G_MW_FOG, G_MWO_FOG, (_SHIFTL(fm,16,16) | _SHIFTL(fo,0,16)))
#define LOOKUP_ITEM(itemID) gItemTable[itemID & ~0xF0000]
#define G_SETCIMG 0xff
#define EVT_FLOAT(DOUBLE) ((Bytecode)EVT_FLOAT_ROUND(((DOUBLE) * 1024.0f)) - EVT_FIXED_OFFSET)
#define BUF_FREE_WO_NEXT 0x8000
#define ICON_badge_ChillOut_disabled_raster 0x1A340
#define ICON_badge_SuperFocus_disabled_palette 0x20620
#define NULL 0
#define ICON_key_gear_hammer_2_palette 0x1DA0
#define ICON_food_Mistake_disabled_raster 0x4CA0
#define MI_INTR_MASK_CLR_AI 0x0010
#define NUML(n) ((n)*24)
#define C0_EPC 14
#define _NPC_H_ 
#define PIF_ROM_START 0x1FC00000
#define AL_FX_SMALLROOM 1
#define ICON_badge_ISpy_raster 0x1DDC0
#define ICON_key_TealLetter_raster 0x12E40
#define SP_DMA_DMEM 0x0000
#define RM_AA_ZB_TEX_TERR(clk) AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | CVG_X_ALPHA | ALPHA_CVG_SEL | ZMODE_OPA | TEX_EDGE | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define ICON_battle_Mystery_raster 0x14280
#define gDPSetScissorFrac(pkt,mode,ulx,uly,lrx,lry) { Gfx *_g = (Gfx *)pkt; _g->words.w0 = _SHIFTL(G_SETSCISSOR, 24, 8) | _SHIFTL((int)((ulx)), 12, 12) | _SHIFTL((int)((uly)), 0, 12); _g->words.w1 = _SHIFTL(mode, 24, 2) | _SHIFTL((int)((lrx)), 12, 12) | _SHIFTL((int)((lry)), 0, 12); }
#define ICON_badge_SpeedySpin_raster 0x1D940
#define AreaByte(INDEX) ((INDEX) - EVT_AREA_BYTE_OFFSET)
#define G_BL_A_MEM 1
#define gsDPPipelineMode(mode) gsSPSetOtherMode(G_SETOTHERMODE_H, G_MDSFT_PIPELINE, 1, mode)
#define ICON_key_seed_3_raster 0xC980
#define ICON_key_gear_boots_1_palette 0x1520
#define EVT_IF_EQ(LVAR,RVAR) EVT_CMD(EVT_OP_IF_EQ, LVAR, RVAR),
#define NO_SOUND_ERR_MASK 0x01
#define ICON_badge_HammerThrow_disabled_raster 0x18180
#define EVT_IF_GE(LVAR,RVAR) EVT_CMD(EVT_OP_IF_GE, LVAR, RVAR),
#define EVT_IF_GT(LVAR,RVAR) EVT_CMD(EVT_OP_IF_GT, LVAR, RVAR),
#define EVT_BITWISE_AND(VAR,VALUE) EVT_CMD(EVT_OP_BITWISE_AND, VAR, VALUE),
#define ICON_key_gear_hammer_1_raster 0x1980
#define __gsSP1Triangle_w1f(v0,v1,v2,flag) (((flag) == 0) ? __gsSP1Triangle_w1(v0, v1, v2): ((flag) == 1) ? __gsSP1Triangle_w1(v1, v2, v0): __gsSP1Triangle_w1(v2, v0, v1))
#define G_RM_NOOP RM_NOOP(1)
#define ICON_key_EmptyBook_disabled_palette 0x134E0
#define MI_CLR_RDRAM 0x1000
#define EVT_IF_LE(LVAR,RVAR) EVT_CMD(EVT_OP_IF_LE, LVAR, RVAR),
#define G_SETTILE 0xf5
#define EVT_IF_LT(LVAR,RVAR) EVT_CMD(EVT_OP_IF_LT, LVAR, RVAR),
#define ICON_unused_030_palette 0x8FE0
#define ICON_unused_11F_raster 0x28F80
#define G_SETTIMG 0xfd
#define C_IWBINV 0x0
#define G_ZS_PRIM (1 << G_MDSFT_ZSRCSEL)
#define SP_STATUS_INTR_BREAK 0x040
#define PFS_INODE_DIST_MAP (PFS_BANK_LAPPED_BY * PFS_SECTOR_PER_BANK)
#define EVT_IF_NE(LVAR,RVAR) EVT_CMD(EVT_OP_IF_NE, LVAR, RVAR),
#define es_RestartBoundScript ENTITY_SCRIPT_OP_RestartBoundScript,
#define MAX_DYNAMIC_ENTITIES 16
#define FALSE 0
#define ICON_food_YoshiCookie_disabled_palette 0x8280
#define ICON_badge_DodgeMaster_raster 0x15480
#define ICON_food_YellowBerry_disabled_palette 0x24E20
#define G_IM_SIZ_8b_TILE_BYTES G_IM_SIZ_8b_BYTES
#define ICON_food_JamminJelly_raster 0x27240
#define GU_PARSERDP_PRAREA 2
#define ICON_key_crystal_berry_palette 0xCFC0
#define ICON_unused_0DF_disabled_palette 0x201A0
#define G_CC_TEMPLERP TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0
#define ICON_unused_0EF_raster 0x22380
#define gsDPLoadTextureTile_4b(timg,fmt,width,height,uls,ult,lrs,lrt,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, G_IM_SIZ_8b, ((width)>>1), timg), gsDPSetTile(fmt, G_IM_SIZ_8b, (((((lrs)-(uls)+1)>>1)+7)>>3), 0, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadTile( G_TX_LOADTILE, (uls)<<(G_TEXTURE_IMAGE_FRAC-1), (ult)<<(G_TEXTURE_IMAGE_FRAC), (lrs)<<(G_TEXTURE_IMAGE_FRAC-1), (lrt)<<(G_TEXTURE_IMAGE_FRAC)), gsDPPipeSync(), gsDPSetTile(fmt, G_IM_SIZ_4b, (((((lrs)-(uls)+1)>>1)+7)>>3), 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(G_TX_RENDERTILE, (uls)<<G_TEXTURE_IMAGE_FRAC, (ult)<<G_TEXTURE_IMAGE_FRAC, (lrs)<<G_TEXTURE_IMAGE_FRAC, (lrt)<<G_TEXTURE_IMAGE_FRAC)
#define ICON_badge_AutoSmash_disabled_raster 0x16F80
#define ICON_anim_hp_0_raster 0x2E900
#define RM_AA_ZB_OPA_TERR(clk) AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define ICON_anim_sp_6_palette 0x316C0
#define CLONED_MODEL(idx) (10000+(idx))
#define G_MODIFYVTX 0x02
#define ICON_food_KoopaTea_disabled_palette 0x5100
#define OS_SIM_STACKSIZE 4096
#define G_ACMUX_0 7
#define G_ACMUX_1 6
#define G_CC_MODULATERGB2 G_CC_MODULATEI2
#define G_RM_VISCVG RM_VISCVG(1)
#define G_CCMUX_PRIM_LOD_FRAC 14
#define G_CC_MODULATERGBA G_CC_MODULATEIA
#define AI_VAR_MELEE_PRE_TIME varTable[1]
#define ICON_badge_PowerRush_disabled_palette 0x1E220
#define ERR_OSCREATEPIMANAGER 35
#define G_MV_LIGHT 10
#define ICON_food_HoneyUltra_raster 0x28A0
#define ICON_badge_SlowGo_disabled_raster 0x19380
#define RI_CONFIG_REG (RI_BASE_REG+0x04)
#define gsSPNumLights(n) gsMoveWd( G_MW_NUMLIGHT, G_MWO_NUMLIGHT, NUML(n))
#define ICON_badge_Peekaboo_disabled_palette 0x215E0
#define ICON_key_1DC650_palette 0x10540
#define G_MWO_MATRIX_WX_WY_F 0x38
#define G_MWO_MATRIX_WX_WY_I 0x18
#define gsSPSetOtherMode(cmd,sft,len,data) {{ _SHIFTL(cmd,24,8)|_SHIFTL(32-(sft)-(len),8,8)|_SHIFTL((len)-1,0,8), (unsigned int)(data) }}
#define ICON_food_ApplePie_disabled_palette 0x2880
#define ICON_key_suspicious_note_raster 0xC320
#define AL_CMIDI_LOOPSTART_CODE 0x2E
#define ICON_unused_0E7_palette 0x21380
#define ICON_badge_PowerBounce_disabled_palette 0x158E0
#define G_IM_SIZ_32b_LINE_BYTES 2
#define FPCSR_RM_MASK 0x00000003
#define HOST_DBG_DATA_ACK 4
#define ICON_food_JamminJelly_palette 0x27440
#define OS_GBPAK_RSTB_STATUS 0x08
#define G_RM_ZB_OPA_SURF RM_ZB_OPA_SURF(1)
#define ICON_peach_BakingStrawberry_palette 0x28400
#define HOST_FAULT_ACK 15
#define SP_SET_RSPSIGNAL SP_SET_SIG3
#define G_RM_RA_OPA_SURF RM_RA_OPA_SURF(1)
#define ICON_badge_AutoMultibounce_palette 0x17F00
#define ICON_key_dojo_card_1_raster 0x10780
#define OS_VI_BIT_ANTIALIAS 0x0010
#define ICON_food_ShroomSteak_disabled_palette 0x3840
#define SP_SET_SSTEP 0x00040
#define G_IM_SIZ_16b_LOAD_BLOCK G_IM_SIZ_16b
#define OS_DCACHE_ROUNDUP_SIZE(x) (u32)(((((u32)(x)+0xf)/0x10)*0x10))
#define _gDPLoadTextureBlockTile(pkt,timg,tmem,rtile,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, siz ##_LOAD_BLOCK, 1, timg); gDPSetTile(pkt, fmt, siz ##_LOAD_BLOCK, 0, tmem, G_TX_LOADTILE, 0, cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT)-1, CALC_DXT(width, siz ##_BYTES)); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, siz, (((width) * siz ##_LINE_BYTES)+7)>>3, tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, rtile, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define gsSPPopMatrix(n) gsSPPopMatrixN( (n), 1)
#define _SPTASK_H_ 
#define gDPSetKeyGB(pkt,cG,sG,wG,cB,sB,wB) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_SETKEYGB, 24, 8) | _SHIFTL(wG, 12, 12) | _SHIFTL(wB, 0, 12)); _g->words.w1 = (_SHIFTL(cG, 24, 8) | _SHIFTL(sG, 16, 8) | _SHIFTL(cB, 8, 8) | _SHIFTL(sB, 0, 8)); }
#define ICON_anim_coin_0_palette 0x2F6E0
#define EVT_END_THREAD EVT_CMD(EVT_OP_END_THREAD),
#define OS_VIM_STACKSIZE 4096
#define SP_SET_INTR_BREAK 0x00100
#define ICON_peach_BakingSugar_palette 0x27D40
#define ICON_anim_hp_2_palette 0x2EF40
#define ICON_food_HoneyShroom_disabled_palette 0x60C0
#define C0_MAJREVSHIFT 4
#define AL_PAN_CENTER 64
#define G_SHADE 0x00000004
#define ERR_ALSNDPDELETE 108
#define gSPViewport(pkt,v) gDma2p((pkt), G_MOVEMEM, (v), sizeof(Vp), G_MV_VIEWPORT, 0)
#define EVT_CASE_EQ(RVAR) EVT_CMD(EVT_OP_CASE_EQ, RVAR),
#define OS_VI_DIVOT_OFF 0x0020
#define DPC_STATUS_TMEM_BUSY 0x010
#define EVT_BUF_PEEK(OFFSET,VAR) EVT_CMD(EVT_OP_BUF_PEEK, OFFSET, VAR),
#define G_BL_1MA 0
#define EVT_CASE_GE(RVAR) EVT_CMD(EVT_OP_CASE_GE, RVAR),
#define MAX_BUFCOUNT 0x8000
#define EVT_CASE_GT(RVAR) EVT_CMD(EVT_OP_CASE_GT, RVAR),
#define ICON_badge_IcePower_palette 0x19C40
#define ICON_food_SweetShroom_raster 0x3AA0
#define DEVICE_TYPE_SRAM 3
#define ICON_food_Spaghetti_raster 0x57E0
#define G_RM_FOG_PRIM_A GBL_c1(G_BL_CLR_FOG, G_BL_A_FOG, G_BL_CLR_IN, G_BL_1MA)
#define SP_EXTERN 0x00000400
#define RAMROM_CLOCKRATE_OFFSET 0x4
#define ICON_key_gear_boots_3_palette 0x1960
#define OS_EVENT_PRENMI 14
#define CONT_NO_RESPONSE_ERROR 0x8
#define EVT_CASE_LE(RVAR) EVT_CMD(EVT_OP_CASE_LE, RVAR),
#define EVT_CASE_LT(RVAR) EVT_CMD(EVT_OP_CASE_LT, RVAR),
#define EVT_ENTITY_INDEX(entityIndex) ((entityIndex) + EVT_ENTITY_ID_BIT)
#define G_IM_SIZ_8b_SHIFT 1
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define ERR_ALSNDPSETPRIORITY 111
#define ICON_food_Melon_disabled_palette 0x26920
#define AL_VOL_FULL 127
#define ICON_battle_ThunderRage_disabled_palette 0x2AA60
#define ICON_food_MapleShroom_disabled_palette 0x7E00
#define PHYSICAL_TO_VIRTUAL(addr) (void*)((u32)(addr) + 0x80000000)
#define ICON_food_Spaghetti_palette 0x59E0
#define MI_VERSION_REG (MI_BASE_REG+0x04)
#define G_RM_AA_DEC_LINE RM_AA_DEC_LINE(1)
#define ERR_OSFREE_REGION 53
#define ICON_badge_AttackFXC_disabled_raster 0x21F00
#define gDPSetHilite2Tile(pkt,tile,hilite,width,height) gDPSetTileSize(pkt, tile, (hilite)->h.x2 & 0xfff, (hilite)->h.y2 & 0xfff, ((((width)-1)*4)+(hilite)->h.x2) & 0xfff, ((((height)-1)*4)+(hilite)->h.y2) & 0xfff)
#define ICON_battle_139_disabled_raster 0x13E00
#define MIN(a,b) ((a) < (b) ? (a) : (b))
#define ICON_badge_HPDrain_raster 0x18F00
#define _GBI_CUSTOM_H_ 
#define G_SHADING_SMOOTH 0x00200000
#define ICON_badge_CloseCall_disabled_raster 0x1E480
#define G_ACMUX_SHADE 4
#define EVT_FIXED_CUTOFF -220000000
#define ICON_food_Mistake_raster 0x4CA0
#define SDIRTYEXCL 0x00001400
#define MAKE_ENTITY_END 0x80000000
#define ICON_badge_AttackFXA_palette 0x18C80
#define gSPBranchLessZrg(pkt,dl,vtx,zval,near,far,flag,zmin,zmax) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_RDPHALF_1,24,8); _g->words.w1 = (unsigned int)(dl); _g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_BRANCH_Z,24,8)| _SHIFTL((vtx)*5,12,12)|_SHIFTL((vtx)*2,0,12)); _g->words.w1 = G_DEPTOZSrg(zval, near, far, flag, zmin, zmax); }
#define ICON_battle_139_palette 0x14000
#define ICON_food_WhackasBump_disabled_raster 0x27480
#define G_RM_AA_TEX_TERR2 RM_AA_TEX_TERR(2)
#define ICON_unused_0D7_disabled_palette 0x1EFA0
#define AI_VAR_HITNPC_SOUND varTable[15]
#define ICON_badge_SleepStomp_palette 0x16AC0
#define ICON_badge_ShrinkStomp_disabled_raster 0x1F200
#define KDM_TO_PHYS(x) ((u32)(x)&0x1FFFFFFF)
#define G_ROTATE_FRAC 16
#define ICON_badge_DeepFocus_disabled_palette 0x203E0
#define PI_DOMAIN1_REG PI_BSD_DOM1_LAT_REG
#define ICON_badge_ShrinkStomp_palette 0x1F400
#define ICON_food_UltraShroom_raster 0x23C40
#define ICON_badge_CrazyHeart_disabled_palette 0x1E8E0
#define ICON_unused_0EF_palette 0x22580
#define ICON_peach_BakingWater_palette 0x28AC0
#define ICON_food_FriedEgg_raster 0x5C60
#define ICON_peach_sneaky_parasol_palette 0xFCA0
#define ICON_badge_AttackFXF_disabled_palette 0x22360
#define ICON_badge_CrazyHeart_raster 0x1E6C0
#define G_CYC_COPY (2 << G_MDSFT_CYCLETYPE)
#define ICON_badge_QuakeHammer_palette 0x161C0
#define ICON_badge_SuperFocus_raster 0x20400
#define EVT_SWITCH(LVAR) EVT_CMD(EVT_OP_SWITCH, LVAR),
#define DPC_BUFBUSY_REG (DPC_BASE_REG+0x14)
#define A_SETLOOP 15
#define ITEM_LAST_BADGE ITEM_ATTACK_FX_F5
#define G_CC_DECALRGB2 0, 0, 0, COMBINED, 0, 0, 0, SHADE
#define G_CC_DECALRGBA 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0
#define RI_LATENCY_REG (RI_BASE_REG+0x14)
#define ICON_unused_11F_disabled_palette 0x291A0
#define EVT_EXEC_GET_TID(EVT_SOURCE,OUTVAR) EVT_CMD(EVT_OP_EXEC_GET_TID, (Bytecode) EVT_SOURCE, OUTVAR),
#define CONFIG_COHRNT_EXLWR 0x00000005
#define ERR_OSMAPTLB_INDEX 10
#define ICON_badge_PowerSmash_disabled_raster 0x1C080
#define ICON_badge_Berserker_palette 0x1AC00
#define ERR_OSMALLOC 52
#define ICON_badge_PowerRush_palette 0x1E200
#define AL_BANK_VERSION 0x4231
#define EVT_END_LOOP EVT_CMD(EVT_OP_END_LOOP),
#define ICON_badge_JumpCharge0_disabled_raster 0x19140
#define __LIB_AUDIO__ 
#define ERR_OSCREATEREGION_ALIGN 50
#define ICON_peach_sneaky_parasol_raster 0xFAA0
#define GIMMCMD(x) (G_IMMFIRST-(x))
#define EVT_LOCAL_VAR_CUTOFF -20000000
#define AL_PAN_LEFT 0
#define CVG_DST_WRAP 0x100
#define ALIGN8(val) (((val) + 0x7) & ~0x7)
#define ICON_badge_DizzyStomp_raster 0x17F40
#define RM_AA_ZB_XLU_SURF(clk) AA_EN | Z_CMP | IM_RD | CVG_DST_WRAP | CLR_ON_CVG | FORCE_BL | ZMODE_XLU | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define ERR_ALSEQP_NO_SOUND 100
#define EVT_SET(VAR,INT_VALUE) EVT_CMD(EVT_OP_SET, VAR, (Bytecode) INT_VALUE),
#define DPC_CLR_XBUS_DMEM_DMA 0x0001
#define OS_TASK_DP_WAIT 0x0002
#define ICON_key_EmptyBook_raster 0x132C0
#define SVINDEXMASK 0x00000380
#define EVS_BindExitTriggers EVS_BindExitTriggers
#define ERR_OSTHPROFILEREADCOUNT_LAR 143
#define ICON_unused_0F4_disabled_palette 0x230E0
#define ICON_badge_AttackFXD_palette 0x21A40
#define AL_CMIDI_BLOCK_CODE 0xFE
#define G_MDSFT_BLENDMASK 0
#define ICON_unused_030_disabled_raster 0x8DE0
#define ICON_key_1DC430_palette 0x10320
#define AI_DRAM_ADDR_REG (AI_BASE_REG+0x00)
#define gMoveWd(pkt,index,offset,data) gDma1p((pkt), G_MOVEWORD, data, offset, index)
#define G_TRI_SHADE_TXTR_ZBUFF 0xcf
#define ICON_food_JellySuper_disabled_palette 0x57C0
#define CONFIG_EC_2_1 0x0
#define PI_BSD_DOM2_PWD_REG (PI_BASE_REG+0x28)
#define osMotorStop(x) __osMotorAccess((x), MOTOR_STOP)
#define CONT_ERR_INVALID PFS_ERR_INVALID
#define TLBCTXT_VPNSHIFT 4
#define G_GEOMETRYMODE 0xd9
#define aLoadADPCM(pkt,c,d) { Acmd *_a = (Acmd *)pkt; _a->words.w0 = _SHIFTL(A_LOADADPCM, 24, 8) | _SHIFTL(c, 0, 24); _a->words.w1 = (unsigned int) d; }
#define ICON_anim_heart_piece_raster 0x30CE0
#define AL_SEQBANK_VERSION 'S1'
#define BTL_NONE 0
#define ICON_badge_AutoSmash_disabled_palette 0x171A0
#define ERR_OSTHPROFILEREADCOUNT_FLAG 139
#define TLBPGMASK_64K 0x1e000
#define ICON_badge_FireShield_disabled_raster 0x171C0
#define ICON_badge_DDownPound_palette 0x17CC0
#define ICON_anim_coin_6_palette 0x2FE60
#define EVT_IF_NOT_FLAG(LVAR,RVAR) EVT_CMD(EVT_OP_IF_NOT_FLAG, LVAR, RVAR),
#define GRDPCMD(x) (0xff-(x))
#define ICON_badge_AttackFXE_raster 0x21CC0
#define ICON_food_ShroomCake_raster 0x33E0
#define ICON_badge_SmashCharge_disabled_raster 0x16B00
#define ICON_badge_JumpCharge_disabled_raster 0x17400
#define ICON_key_forest_pass_raster 0xABC0
#define G_MWO_NUMLIGHT 0x00
#define PIF_RAM_END 0x1FC007FF
#define AL_USEC_PER_FRAME 16000
#define OS_VI_FPAL_LPF1 43
#define OS_VI_FPAL_LPF2 47
#define ICON_key_boo_weight_raster 0xB220
#define ICON_battle_PowerStar_disabled_palette 0x2BC60
#define G_RM_AA_ZB_TEX_INTER2 RM_AA_ZB_TEX_INTER(2)
#define ERR_OSJAMMESG 7
#define PI_BSD_DOM1_RLS_REG (PI_BASE_REG+0x20)
#define TLBCTXT_BASEMASK 0xff800000
#define ICON_badge_PowerBounce_disabled_raster 0x156C0
#define ICON_food_BigCookie_disabled_palette 0x4A40
#define ICON_badge_RunawayPay_disabled_raster 0x1AE80
#define SP_STATUS_BROKE 0x002
#define OS_CLOCK_RATE 62500000LL
#define G_TEXTURE 0xd7
#define AI_LEN_REG (AI_BASE_REG+0x04)
#define G_BL_0 3
#define G_BL_1 2
#define OS_VI_FPAL_LPN1 42
#define ICON_badge_HappyCoin_disabled_raster 0x1FD40
#define ICON_battle_ThunderBolt_disabled_palette 0x2ACA0
#define G_LOADTLUT 0xf0
#define ICON_key_seed_1_palette 0xC740
#define R_VEC (K1BASE+0x1fc00000)
#define C0_CAUSE 13
#define PI_DOMAIN2_REG PI_BSD_DOM2_LAT_REG
#define G_RM_AA_ZB_PCL_SURF2 RM_AA_ZB_PCL_SURF(2)
#define _ULTRA64_H_ 
#define ICON_badge_HammerThrow_raster 0x18180
#define RM_ZB_OPA_DECAL(clk) Z_CMP | CVG_DST_FULL | ALPHA_CVG_SEL | ZMODE_DEC | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define SP_HIDDEN 0x00000004
#define VI_CTRL_GAMMA_DITHER_ON 0x00004
#define LEO_BLOCK_MODE 1
#define ICON_food_FrozenFries_raster 0x7520
#define ICON_key_gear_hammer_3_palette 0x1FC0
#define CAUSE_CESHIFT 28
#define ICON_badge_FeelingFine_disabled_raster 0x18840
#define OS_GBPAK_ROM_ID_SIZE 0x50
#define CONFIG_IC_SHFT 9
#define VI_V_START_REG (VI_BASE_REG+0x28)
#define PI_DOM_PGS_OFS 0x08
#define ERR_OSPIRAWSTARTDMA_RANGE 25
#define CONT_ERR_VOICE_MEMORY 13
#define PFS_ID_3AREA 6
#define spFinish spX2Finish
#define G_RM_AA_SUB_SURF2 RM_AA_SUB_SURF(2)
#define G_OFF (0)
#define G_RDPLOADSYNC 0xe6
#define ICON_food_HoneySyrup_disabled_raster 0x26DC0
#define AI_PAL_MAX_FREQ 376000
#define MAX_NPCS 64
#define G_CC_MODULATEIA_PRIM TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0
#define _MAP_H_ 
#define ICON_badge_PDownDUp_palette 0x1D240
#define NUM_DL(nb) ((nb)*DL_BM_OVERHEAD +DL_SPRITE_OVERHEAD)
#define G_CC_MODULATEI2 COMBINED, 0, SHADE, 0, 0, 0, 0, SHADE
#define G_CC_MODULATEIA TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0
#define G_CCMUX_COMBINED_ALPHA 7
#define RM_AA_XLU_SURF(clk) AA_EN | IM_RD | CVG_DST_WRAP | CLR_ON_CVG | FORCE_BL | ZMODE_OPA | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define ICON_battle_ThunderRage_disabled_raster 0x2A840
#define gsDPSetTextureConvert(type) gsSPSetOtherMode(G_SETOTHERMODE_H, G_MDSFT_TEXTCONV, 3, type)
#define G_RM_TEX_EDGE RM_TEX_EDGE(1)
#define ICON_badge_QuickChange_raster 0x20880
#define G_RM_PCL_SURF2 RM_PCL_SURF(2)
#define TLBLO_CACHMASK 0x38
#define G_RM_RA_ZB_OPA_SURF2 RM_RA_ZB_OPA_SURF(2)
#define VI_CTRL_ANTIALIAS_MODE_1 0x00100
#define VI_CTRL_ANTIALIAS_MODE_3 0x00300
#define G_RM_ZB_PCL_SURF RM_ZB_PCL_SURF(1)
#define G_CD_MAGICSQ (0 << G_MDSFT_RGBDITHER)
#define CONT_EEP16K 0x4000
#define ICON_badge_Berserker_disabled_palette 0x1AC20
#define SP_UCODE_SIZE 4096
#define WATCHLO_ADDRMASK 0xfffffff8
#define CALC_DXT_4b(width) (((1 << G_TX_DXT_FRAC) + TXL2WORDS_4b(width) - 1) / TXL2WORDS_4b(width))
#define ADPCMVSIZE 8
#define ICON_key_dictionary_raster 0xBEE0
#define ICON_unused_030_raster 0x8DE0
#define OS_VI_GAMMA_OFF 0x0002
#define gDPLoadTLUTCmd(pkt,tile,count) { Gfx *_g = (Gfx *)pkt; _g->words.w0 = _SHIFTL(G_LOADTLUT, 24, 8); _g->words.w1 = _SHIFTL((tile), 24, 3) | _SHIFTL((count), 14, 10);}
#define PI_STATUS_CLR_INTR 0x02
#define AL_CMIDI_CNTRL_LOOPEND 103
#define EVT_CONTINUE 0
#define ICON_food_MapleUltra_palette 0x2CE0
#define SP_SET_SIG0 0x00400
#define ICON_anim_hp_0_palette 0x2EB00
#define EVT_USE_ARRAY(INT_PTR) EVT_CMD(EVT_OP_USE_ARRAY, (Bytecode) INT_PTR),
#define SP_SET_SIG5 0x100000
#define SP_SET_SIG6 0x400000
#define ICON_food_BlandMeal_disabled_raster 0x3F20
#define ICON_badge_DizzyStomp_palette 0x18140
#define ICACHE_SIZE 0x4000
#define ERR_ALSEQNOTMIDI0 115
#define GU_PARSEGBI_DUMPONLY 32
#define gSP1Triangle(pkt,v0,v1,v2,flag) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_TRI1, 24, 8)| __gsSP1Triangle_w1f(v0, v1, v2, flag); _g->words.w1 = 0; }
#define SP_IBIST_DONE 0x04
#define RDRAM_0_START 0x00000000
#define OS_VI_PAL_HAF1 25
#define ICON_food_Egg_palette 0x26480
#define ITEM_FIRST_CONSUMABLE ITEM_FIRE_FLOWER
#define G_RDP_TRI_SHADE_MASK 0x04
#define WATCHHI_VALIDMASK 0x0000000f
#define G_IM_SIZ_16b_SHIFT 0
#define G_CCMUX_LOD_FRACTION 13
#define MI_INTR_AI 0x04
#define ICON_key_seed_2_raster 0xC760
#define G_CYC_2CYCLE (1 << G_MDSFT_CYCLETYPE)
#define OS_VI_PAL_HAN1 24
#define EVT_MALLOC_ARRAY(SIZE,OUT_PTR_VAR) EVT_CMD(EVT_OP_MALLOC_ARRAY, SIZE, OUT_PTR_VAR),
#define G_SC_EVEN_INTERLACE 2
#define GENEROUS_HEART_DROPS(attempts) { { F16(20), F16(80), attempts, F16(50) } { F16(30), F16(70), attempts, F16(50) } { F16(50), F16(60), attempts, F16(40) } { F16(80), F16(50), attempts, F16(40) } { F16(100), F16(40), attempts, F16(30) }, }
#define MI_INTR_DP 0x20
#define G_CC_BLENDI2 ENVIRONMENT, SHADE, COMBINED, SHADE, 0, 0, 0, SHADE
#define PFS_ID_0AREA 1
#define G_CC_BLENDIA ENVIRONMENT, SHADE, TEXEL0, SHADE, TEXEL0, 0, SHADE, 0
#define RM_AA_TEX_EDGE(clk) AA_EN | IM_RD | CVG_DST_CLAMP | CVG_X_ALPHA | ALPHA_CVG_SEL | ZMODE_OPA | TEX_EDGE | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define PI_STATUS_DMA_BUSY 0x01
#define ICON_food_YummyMeal_disabled_raster 0x4160
#define gsDPLoadMultiBlock(timg,tmem,rtile,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, siz ##_LOAD_BLOCK, 1, timg), gsDPSetTile(fmt, siz ##_LOAD_BLOCK, 0, tmem, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadBlock(G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT)-1, CALC_DXT(width, siz ##_BYTES)), gsDPPipeSync(), gsDPSetTile(fmt, siz, ((((width) * siz ##_LINE_BYTES)+7)>>3), tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(rtile, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC)
#define ICON_badge_FPPlus_disabled_raster 0x195C0
#define G_CULL_BOTH 0x00000600
#define SR_IMASKSHIFT 8
#define EXC_WADE EXC_CODE(5)
#define NUM_SEGMENTS (16)
#define VOICE_WARN_TOO_LARGE 0x0800
#define MAX_ANIMATED_MODELS 16
#define G_RM_FOG_SHADE_A GBL_c1(G_BL_CLR_FOG, G_BL_A_SHADE, G_BL_CLR_IN, G_BL_1MA)
#define ICON_badge_FireShield_raster 0x171C0
#define EVT_BUF_READ1(VAR) EVT_CMD(EVT_OP_BUF_READ1, VAR),
#define EVT_BUF_READ2(VAR1,VAR2) EVT_CMD(EVT_OP_BUF_READ2, VAR1, VAR2),
#define EVT_BUF_READ3(VAR1,VAR2,VAR3) EVT_CMD(EVT_OP_BUF_READ3, VAR1, VAR2, VAR3),
#define OS_FLAG_FAULT 2
#define RM_ZB_XLU_DECAL(clk) Z_CMP | IM_RD | CVG_DST_FULL | FORCE_BL | ZMODE_DEC | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define ERR_OSPISTARTDMA_ADDR 32
#define EVT_BREAK_LOOP EVT_CMD(EVT_OP_BREAK_LOOP),
#define A_MAIN 0x00
#define ICON_anim_fp_1_raster 0x2F180
#define ICON_food_MapleSuper_disabled_palette 0x5580
#define ICON_food_MapleSyrup_disabled_palette 0x27220
#define ICON_food_IcedPotato_palette 0x26D80
#define hs_SetFlags(arg0) HUD_ELEMENT_OP_SetFlags, arg0,
#define G_BL_A_IN 0
#define DPC_START_REG (DPC_BASE_REG+0x00)
#define MI_INTR_PI 0x10
#define ICON_key_card_gold_raster 0x11460
#define ICON_anim_shimmer_5_palette 0x303A0
#define ICON_key_1DC430_raster 0x10120
#define gsDPSetCombineKey(type) gsSPSetOtherMode(G_SETOTHERMODE_H, G_MDSFT_COMBKEY, 1, type)
#define OS_GBPAK_POWER 0x01
#define ERR_ALSEQTRACKHDR 118
#define MI_INTR_SI 0x02
#define ICON_battle_StoneCap_raster 0x2B5C0
#define SP_SET_TASKDONE SP_SET_SIG2
#define gsDPLoadSync() gsDPNoParam(G_RDPLOADSYNC)
#define RDRAM_1_BASE_ADDRESS (RDRAM_1_DEVICE_ID*RDRAM_LENGTH)
#define MI_INTR_VI 0x08
#define HOST_PIACCESS_REQ 1
#define EVT_GAME_BYTE_CUTOFF -160000000
#define OS_LOG_MAGIC 0x20736a73
#define ICON_food_JellyUltra_disabled_raster 0x2D20
#define SEGMENT_ADDR(num,off) (((num) << 24) + (off))
#define OS_PFS_VERSION 0x0200
#define ICON_food_EggMissile_disabled_raster 0x5A20
#define RM_AA_ZB_XLU_DECAL(clk) AA_EN | Z_CMP | IM_RD | CVG_DST_WRAP | CLR_ON_CVG | FORCE_BL | ZMODE_DEC | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define _ANSI_STDARG_H_ 
#define G_RM_AA_SUB_TERR2 RM_AA_SUB_TERR(2)
#define ICON_badge_MegaQuake_palette 0x16880
#define ICON_anim_shimmer_0_raster 0x30240
#define ICON_battle_13E_disabled_raster 0x14940
#define ICON_badge_JumpCharge0_raster 0x19140
#define EVT_EXEC(EVT_SOURCE) EVT_CMD(EVT_OP_EXEC, (Bytecode) EVT_SOURCE),
#define _ABI_H_ 
#define ICON_food_StinkyHerb_raster 0x26940
#define ICON_food_KoopaTea_raster 0x4EE0
#define KUSIZE 0x80000000
#define ITEM_MENU_PAGE(index) (&gPauseItemsPages[index])
#define C0_PRID 15
#define EVT_INDEX_OF_LOCAL_VAR(v) ((v) + EVT_LOCAL_VAR_OFFSET)
#define DPS_TBIST_DONE 0x004
#define SP_STATUS_YIELD SP_STATUS_SIG0
#define MI_CLR_DP_INTR 0x0800
#define CONT_ERR_NO_CONTROLLER PFS_ERR_NOPACK
#define G_RM_PASS GBL_c1(G_BL_CLR_IN, G_BL_0, G_BL_CLR_IN, G_BL_1)
#define _MACROS_H_ 
#define K1_TO_PHYS(x) ((u32)(x)&0x1FFFFFFF)
#define G_IM_FMT_I 4
#define gdSPDefLights1(ar,ag,ab,r1,g1,b1,x1,y1,z1) { {{ {ar,ag,ab},0,{ar,ag,ab},0}}, {{{ {r1,g1,b1},0,{r1,g1,b1},0,{x1,y1,z1},0}}} }
#define gdSPDefLights2(ar,ag,ab,r1,g1,b1,x1,y1,z1,r2,g2,b2,x2,y2,z2) { {{ {ar,ag,ab},0,{ar,ag,ab},0}}, {{{ {r1,g1,b1},0,{r1,g1,b1},0,{x1,y1,z1},0}}, {{ {r2,g2,b2},0,{r2,g2,b2},0,{x2,y2,z2},0}}} }
#define gdSPDefLights5(ar,ag,ab,r1,g1,b1,x1,y1,z1,r2,g2,b2,x2,y2,z2,r3,g3,b3,x3,y3,z3,r4,g4,b4,x4,y4,z4,r5,g5,b5,x5,y5,z5) { {{ {ar,ag,ab},0,{ar,ag,ab},0}}, {{{ {r1,g1,b1},0,{r1,g1,b1},0,{x1,y1,z1},0}}, {{ {r2,g2,b2},0,{r2,g2,b2},0,{x2,y2,z2},0}}, {{ {r3,g3,b3},0,{r3,g3,b3},0,{x3,y3,z3},0}}, {{ {r4,g4,b4},0,{r4,g4,b4},0,{x4,y4,z4},0}}, {{ {r5,g5,b5},0,{r5,g5,b5},0,{x5,y5,z5},0}}} }
#define gdSPDefLights6(ar,ag,ab,r1,g1,b1,x1,y1,z1,r2,g2,b2,x2,y2,z2,r3,g3,b3,x3,y3,z3,r4,g4,b4,x4,y4,z4,r5,g5,b5,x5,y5,z5,r6,g6,b6,x6,y6,z6) { {{ {ar,ag,ab},0,{ar,ag,ab},0}}, {{{ {r1,g1,b1},0,{r1,g1,b1},0,{x1,y1,z1},0}}, {{ {r2,g2,b2},0,{r2,g2,b2},0,{x2,y2,z2},0}}, {{ {r3,g3,b3},0,{r3,g3,b3},0,{x3,y3,z3},0}}, {{ {r4,g4,b4},0,{r4,g4,b4},0,{x4,y4,z4},0}}, {{ {r5,g5,b5},0,{r5,g5,b5},0,{x5,y5,z5},0}}, {{ {r6,g6,b6},0,{r6,g6,b6},0,{x6,y6,z6},0}}} }
#define gdSPDefLights7(ar,ag,ab,r1,g1,b1,x1,y1,z1,r2,g2,b2,x2,y2,z2,r3,g3,b3,x3,y3,z3,r4,g4,b4,x4,y4,z4,r5,g5,b5,x5,y5,z5,r6,g6,b6,x6,y6,z6,r7,g7,b7,x7,y7,z7) { {{ {ar,ag,ab},0,{ar,ag,ab},0}}, {{{ {r1,g1,b1},0,{r1,g1,b1},0,{x1,y1,z1},0}}, {{ {r2,g2,b2},0,{r2,g2,b2},0,{x2,y2,z2},0}}, {{ {r3,g3,b3},0,{r3,g3,b3},0,{x3,y3,z3},0}}, {{ {r4,g4,b4},0,{r4,g4,b4},0,{x4,y4,z4},0}}, {{ {r5,g5,b5},0,{r5,g5,b5},0,{x5,y5,z5},0}}, {{ {r6,g6,b6},0,{r6,g6,b6},0,{x6,y6,z6},0}}, {{ {r7,g7,b7},0,{r7,g7,b7},0,{x7,y7,z7},0}}} }
#define gDPLoadMultiBlock(pkt,timg,tmem,rtile,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, siz ##_LOAD_BLOCK, 1, timg); gDPSetTile(pkt, fmt, siz ##_LOAD_BLOCK, 0, tmem, G_TX_LOADTILE, 0, cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT)-1, CALC_DXT(width, siz ##_BYTES)); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, siz, (((width) * siz ##_LINE_BYTES)+7)>>3, tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, rtile, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define FLAGS_ZERO 16
#define ICON_anim_hand_8_palette 0x2D2E0
#define ASSERT(condition) if (!(condition)) { while (TRUE) {} }
#define API_CALLABLE(name) ApiStatus name(Evt* script, s32 isInitialCall)
#define EVT_SETUP_CAMERA_DEFAULT() EVT_CALL(SetCamPerspective, CAM_DEFAULT, 3, 25, 16, 4096) EVT_CALL(SetCamBGColor, CAM_DEFAULT, 0, 0, 0) EVT_CALL(SetCamEnabled, CAM_DEFAULT, TRUE)
#define AL_FX_FLANGE 4
#define TLBLO_NONCOHRNT 0x18
#define REDUCED_FLOWER_DROPS(attempts) { { F16(20), F16(40), attempts, F16(40) }, { F16(30), F16(40), attempts, F16(40) }, { F16(50), F16(40), attempts, F16(40) }, { F16(80), F16(40), attempts, F16(40) }, { F16(100), F16(30), attempts, F16(40) }, }
#define ICON_food_JellyShroom_disabled_palette 0x84C0
#define OS_PRIORITY_RMONSPIN 200
#define G_RDPHALF_1 0xe1
#define G_RDPHALF_2 0xf1
#define G_CC_REFLECTRGBDECALA ENVIRONMENT, 0, TEXEL0, SHADE, 0, 0, 0, TEXEL0
#define ICON_battle_StoneCap_disabled_raster 0x2B5C0
#define alSeqpSetProgram alSeqpSetChlProgram
#define G_RM_AA_ZB_TEX_TERR RM_AA_ZB_TEX_TERR(1)
#define _SHIFT _SHIFTL
#define ICON_food_Egg_raster 0x26280
#define RI_SELECT_REG (RI_BASE_REG+0x0C)
#define ICON_food_Mushroom_palette 0x239C0
#define A_RESAMPLE 5
#define G_RM_AA_OPA_TERR RM_AA_OPA_TERR(1)
#define AI_VAR_HITNPC_3 varTable[3]
#define AI_VAR_HITNPC_4 varTable[4]
#define BLOCKSIZE 32
#define ICON_food_SpecialShake_disabled_palette 0x4800
#define EVT_CASE_OR_EQ(RVAR) EVT_CMD(EVT_OP_CASE_OR_EQ, RVAR),
#define ICON_badge_AutoJump_palette 0x17A80
#define gsDPSetTexturePersp(type) gsSPSetOtherMode(G_SETOTHERMODE_H, G_MDSFT_TEXTPERSP, 1, type)
#define ICON_badge_FlowerSaver_palette 0x1B500
#define DEVICE_TYPE_BULK 1
#define PI_STATUS_IO_BUSY 0x02
#define ICON_badge_CrazyHeart_disabled_raster 0x1E6C0
#define VI_H_WIDTH_REG VI_WIDTH_REG
#define ICON_badge_FPPlus_palette 0x197C0
#define ICON_key_card_silver_raster 0x11680
#define ICON_key_CakePan_raster 0x660
#define VOICE_STATUS_READY 0
#define OS_IM_DP 0x00200401
#define ICON_badge_Refund_raster 0x1B0C0
#define ICON_badge_HappyHeart_disabled_palette 0x1A7A0
#define ERR_OSVISETYSCALE_VIMGR 42
#define UNK_FUN_ARG void(*)(void)
#define G_SC_ODD_INTERLACE 3
#define G_RM_AA_ZB_OPA_TERR RM_AA_ZB_OPA_TERR(1)
#define ICON_food_ElectroPop_raster 0x6320
#define EVT_SUBF(VAR,FLOAT_VALUE) EVT_CMD(EVT_OP_SUBF, VAR, FLOAT_VALUE),
#define ICON_food_BlueBerry_disabled_palette 0x249A0
#define ICON_peach_BakingSalt_disabled_palette 0x27B20
#define ICON_badge_MegaJump_raster 0x1BE40
#define G_IM_SIZ_8b_BYTES 1
#define OS_EVENT_RDB_FLUSH_PROF 21
#define M_HVQMTASK 7
#define C0_INX 0
#define RM_AA_ZB_OPA_INTER(clk) AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ALPHA_CVG_SEL | ZMODE_INTER | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define C0_WIRED 6
#define EVT_END_CHILD_THREAD EVT_CMD(EVT_OP_END_CHILD_THREAD),
#define ICON_key_ruins_stone_moon_raster 0xA9A0
#define ICON_food_StinkyHerb_palette 0x26B40
#define ICON_key_koot_empty_wallet_raster 0x11F20
#define ICON_unused_12D_raster 0x2C100
#define OS_IM_PI 0x00100401
#define AL_CMIDI_LOOPEND_CODE 0x2D
#define OS_IM_SI 0x00020401
#define OS_IM_SP 0x00010401
#define ICON_badge_Refund_disabled_palette 0x1B2E0
#define OS_VI_FPAL_HPN1 50
#define aEnvMixer(pkt,f,s) { Acmd *_a = (Acmd *)pkt; _a->words.w0 = _SHIFTL(A_ENVMIXER, 24, 8) | _SHIFTL(f, 16, 8); _a->words.w1 = (unsigned int)(s); }
#define ICON_food_StrangeLeaf_disabled_raster 0x25E00
#define UNK_ARGS 
#define hs_SetIcon(time,icon) HUD_ELEMENT_OP_SetImage, time, ICON_ ##icon ##_raster, ICON_ ##icon ##_palette, 0, 0,
#define OS_IM_VI 0x00080401
#define ICON_Boots3_raster 0x2E480
#define ICON_badge_HappyFlower_disabled_palette 0x1FD20
#define G_CCMUX_PRIMITIVE_ALPHA 10
#define ICON_badge_DefendPlus_disabled_palette 0x19EA0
#define ICON_key_EmptyBook_palette 0x134C0
#define CONT_RIGHT 0x0100
#define ICON_food_JellyUltra_palette 0x2F20
#define MI_INIT_MODE_REG (MI_BASE_REG+0x00)
#define OS_CYCLES_TO_NSEC(c) (((u64)(c)*(1000000000LL/15625000LL))/(OS_CPU_COUNTER/15625000LL))
#define ERR_ALSEQNUMTRACKS 116
#define ICON_peach_BakingEgg_raster 0x27D80
#define ICON_food_DriedShroom_palette 0x242C0
#define gDPSetHilite1Tile(pkt,tile,hilite,width,height) gDPSetTileSize(pkt, tile, (hilite)->h.x1 & 0xfff, (hilite)->h.y1 & 0xfff, ((((width)-1)*4)+(hilite)->h.x1) & 0xfff, ((((height)-1)*4)+(hilite)->h.y1) & 0xfff)
#define G_RM_ZB_OVL_SURF RM_ZB_OVL_SURF(1)
#define ERR_OSTHPROFILEREADCOUNTTH_LAR 145
#define A_ENVMIXER 3
#define AI_TEMP_STATE_AFTER_SUSPEND functionTemp[1]
#define ITEM_LAST_CONSUMABLE ITEM_JELLY_SHROOM1
#define ICON_key_Gift_raster 0x0
#define G_MW_NUMLIGHT 0x02
#define ICON_food_YellowBerry_palette 0x24E00
#define EVT_INDEX_OF_GAME_BYTE(v) ((v) + EVT_GAME_BYTE_OFFSET)
#define ICON_badge_LastStand_disabled_palette 0x1E460
#define G_IM_SIZ_16b_BYTES 2
#define spMove spX2Move
#define PFS_LABEL_AREA 7
#define SP_IBIST_CLEAR 0x04
#define _VA_LIST_T_H 
#define GPACK_RGBA5551(r,g,b,a) ((((r)<<8) & 0xf800) | (((g)<<3) & 0x7c0) | (((b)>>2) & 0x3e) | ((a) & 0x1))
#define ICON_badge_Multibounce_raster 0x15000
#define PI_BSD_DOM2_LAT_REG (PI_BASE_REG+0x24)
#define CHNL_ERR_COLLISION 0x40
#define AL_PAN_RIGHT 127
#define G_IM_FMT_YUV 1
#define TLBINX_PROBE 0x80000000
#define CVG_DST_FULL 0x200
#define PFS_ERR_INVALID 5
#define ICON_battle_RepelGel_disabled_raster 0x144C0
#define ICON_badge_TripleDip_raster 0x1B540
#define ICON_key_book_lyrics_palette 0xF640
#define EEPROM_MAXBLOCKS 64
#define ICON_battle_VoltShroom_palette 0x2BA00
#define PI_DOM_PWD_OFS 0x04
#define gsSPSprite2DScaleFlip(sx,sy,fx,fy) {{ (_SHIFTL(G_SPRITE2D_SCALEFLIP, 24, 8) | _SHIFTL((fx), 8, 8) | _SHIFTL((fy), 0, 8)), (_SHIFTL((sx), 16, 16) | _SHIFTL((sy), 0, 16)) }}
#define ICON_anim_shimmer_6_palette 0x303E0
#define G_TEXTURE_SCALE_FRAC 16
#define ICON_food_HoneyShroom_disabled_raster 0x5EA0
#define ICON_unused_0D5_disabled_palette 0x1EB20
#define gDPPipeSync(pkt) gDPNoParam(pkt, G_RDPPIPESYNC)
#define OS_VI_NTSC_HPF1 9
#define OS_VI_NTSC_HPF2 13
#define SP_UCODE_DATA_SIZE 2048
#define DPC_STATUS_FLUSH 0x004
#define ERR_OSPROFILEINIT_ORD 64
#define SP_PC_REG 0x04080000
#define SPRITE_ID(name,pal_anim) ((name) << 16 | (pal_anim))
#define EVT_USE_FBUF(FLOAT_PTR) EVT_CMD(EVT_OP_USE_FBUF, (Bytecode) FLOAT_PTR),
#define ICON_unused_0F2_disabled_raster 0x22A40
#define ICON_badge_FireShield_palette 0x173C0
#define ICON_anim_sp_4_palette 0x31440
#define ICON_badge_PayOff_palette 0x1A0C0
#define _OS_VI_H_ 
#define ICON_badge_HappyCoin_disabled_palette 0x1FF60
#define ICON_food_SuperSoda_disabled_palette 0x24760
#define ICON_badge_HeartFinder_disabled_palette 0x1D4A0
#define alCSPGetFXMix alCSPGetChlFXMix
#define SCREEN_WIDTH 320
#define ICON_unused_02D_raster 0x8720
#define AI_MAX_DAC_RATE 16384
#define G_MWO_MATRIX_ZZ_ZW_F 0x34
#define G_MWO_MATRIX_ZZ_ZW_I 0x14
#define ICON_unused_02F_disabled_palette 0x8DC0
#define OS_VI_NTSC_HPN1 8
#define ICON_peach_BakingEgg_palette 0x27F80
#define ERR_OSVIGETCURRENTFRAMEBUFFER 37
#define RM_AA_ZB_XLU_INTER(clk) AA_EN | Z_CMP | IM_RD | CVG_DST_WRAP | CLR_ON_CVG | FORCE_BL | ZMODE_INTER | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define OS_VI_MPAL_HPF1 37
#define OS_VI_MPAL_HPF2 41
#define ICON_food_SuperSoda_raster 0x24540
#define ICON_Boots2_raster 0x2E240
#define gDPSetTextureConvert(pkt,type) gSPSetOtherMode(pkt, G_SETOTHERMODE_H, G_MDSFT_TEXTCONV, 3, type)
#define MAX_LIL_OINKS 11
#define OS_RG_ALIGN_8B 8
#define CAM_FAR_CLIP 4096
#define G_BRANCH_Z 0x04
#define gsSPLoadGeometryMode(word) gsSPGeometryMode(-1,(word))
#define G_RM_AA_ZB_TEX_TERR2 RM_AA_ZB_TEX_TERR(2)
#define PFS_ID_BANK_256K 0
#define _FUNCTIONS_H_ 
#define ICON_battle_HustleDrink_disabled_raster 0x29880
#define G_IM_SIZ_4b_LOAD_BLOCK G_IM_SIZ_16b
#define gSPLoadGeometryMode(pkt,word) gSPGeometryMode((pkt),-1,(word))
#define ICON_anim_shimmer_3_palette 0x30320
#define ICON_unused_0F3_disabled_raster 0x22C80
#define GU_BLINKRDP_HILITE 1
#define G_RDPPIPESYNC 0xe7
#define OS_EVENT_COUNTER 3
#define TLBLO_PFNSHIFT 6
#define CONT_OVERRUN_ERROR 0x4
#define ERR_OSPISTARTDMA_DIR 30
#define OS_VI_MPAL_HPN1 36
#define OS_VI_MPAL_HPN2 40
#define _OS_CACHE_H_ 
#define SPRITE_WORLD_SCALE_D (5.0/7.0)
#define SPRITE_WORLD_SCALE_F (5.0f/7.0f)
#define ICON_food_BigCookie_disabled_raster 0x4820
#define EVT_SWITCH_CONST(LCONST) EVT_CMD(EVT_OP_SWITCH_CONST, LCONST),
#define DPC_CURRENT_REG (DPC_BASE_REG+0x08)
#define G_SETCOMBINE 0xfc
#define ICON_food_HoneyCandy_raster 0x60E0
#define ICON_food_WhackasBump_disabled_palette 0x276A0
#define hs_RandomRestart(max,cutoff) HUD_ELEMENT_OP_RandomRestart, max, cutoff,
#define FR_NEG_FRUSTRATIO_5 0x00000005
#define A_MIX 0x10
#define ICON_key_key_ruins_raster 0x9240
#define _VFUNC(name,n) _VFUNC_(name, n)
#define ICON_food_SpicySoup_disabled_raster 0x2420
#define gDPSetAlphaDither(pkt,mode) gSPSetOtherMode(pkt, G_SETOTHERMODE_H, G_MDSFT_ALPHADITHER, 2, mode)
#define ERR_OSSTARTTHREAD 3
#define ICON_badge_PowerRush_raster 0x1E000
#define RM_AA_SUB_TERR(clk) AA_EN | IM_RD | CVG_DST_FULL | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define ERR_OSRECVMESG 8
#define CONT_CARD_ON 0x01
#define ERR_OSSETTIME 75
#define ICON_food_JellyShroom_palette 0x84A0
#define UNK_PTR void*
#define ICON_badge_IcePower_disabled_raster 0x19A40
#define _SHIFTR(v,s,w) ((unsigned int)(((unsigned int)(v) >> (s)) & ((0x01 << (w)) - 1)))
#define ems_End ENTITY_MODEL_SCRIPT_OP_End,
#define G_BZ_PERSP 0
#define gDPScrollTextureTile_4b(pkt,timg,fmt,width,height,uls,ult,lrs,lrt,pal,cms,cmt,masks,maskt,shifts,shiftt,scrolls,scrollt) gDPSetTextureImage(pkt, fmt, G_IM_SIZ_8b, ((width)>>1), timg); gDPSetTile(pkt, fmt, G_IM_SIZ_8b, (((((lrs)-(uls)+1)>>1)+7)>>3), 0, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadTile( pkt, G_TX_LOADTILE, (uls)<<(G_TEXTURE_IMAGE_FRAC-1), (ult)<<(G_TEXTURE_IMAGE_FRAC), (lrs)<<(G_TEXTURE_IMAGE_FRAC-1), (lrt)<<(G_TEXTURE_IMAGE_FRAC)); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, G_IM_SIZ_4b, (((((lrs)-(uls)+1)>>1)+7)>>3), 0, G_TX_RENDERTILE, 0, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, G_TX_RENDERTILE, (uls + scrolls)<<G_TEXTURE_IMAGE_FRAC, (ult + scrollt)<<G_TEXTURE_IMAGE_FRAC, (lrs + scrolls)<<G_TEXTURE_IMAGE_FRAC, (lrt + scrollt)<<G_TEXTURE_IMAGE_FRAC)
#define ICON_key_Letter_disabled_raster 0x129C0
#define GIO_GIO_SYNC_REG (GIO_BASE_REG+0x400)
#define ICON_key_Postcard_disabled_palette 0x132A0
#define G_IM_SIZ_32b_BYTES 4
#define G_RM_AA_ZB_XLU_SURF RM_AA_ZB_XLU_SURF(1)
#define ICON_badge_BumpAttack_disabled_palette 0x1CDE0
#define G_TX_MIRROR 0x1
#define ICON_badge_HeartFinder_raster 0x1D280
#define C_HINV 0x10
#define gDPLoadSync(pkt) gDPNoParam(pkt, G_RDPLOADSYNC)
#define ICON_unused_02F_disabled_raster 0x8BA0
#define C0_RAND 1
#define FTOFIX32(x) (long)((x) * (float)0x00010000)
#define ICON_badge_HappyCoin_raster 0x1FD40
#define ICON_food_KookyCookie_disabled_raster 0x72E0
#define ICON_unused_0F5_disabled_raster 0x23100
#define ERR_ALEVENTNOFREE 124
#define ICON_badge_JumpCharge_raster 0x17400
#define ICON_badge_RightOn_disabled_palette 0x1AE60
#define G_SETTILESIZE 0xf2
#define ICON_food_CakeMix_disabled_raster 0x26040
#define FR_POS_FRUSTRATIO_6 0x0000fffa
#define ICON_badge_GroupFocus_disabled_raster 0x21600
#define C0_TAGHI 29
#define gSPSprite2DScaleFlip(pkt,sx,sy,fx,fy) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_SPRITE2D_SCALEFLIP, 24, 8) | _SHIFTL((fx), 8, 8) | _SHIFTL((fy), 0, 8)); _g->words.w1 = (_SHIFTL((sx), 16, 16) | _SHIFTL((sy), 0, 16)); }
#define G_MWO_MATRIX_YZ_YW_F 0x2c
#define G_MWO_MATRIX_YZ_YW_I 0x0c
#define ICON_key_toybox_train_palette 0xBCA0
#define ICON_food_Cake_palette 0x4C60
#define DPC_PIPEBUSY_REG (DPC_BASE_REG+0x18)
#define ICON_badge_MegaQuake_disabled_raster 0x16680
#define ICON_badge_QuickChange_disabled_raster 0x20880
#define _SCRIPT_API_MACROS_H_ 
#define RAMROM_FONTDATA_OFFSET 0xb70
#define gSPSetLights3(pkt,name) { gSPNumLights(pkt,NUMLIGHTS_3); gSPLight(pkt,&name.l[0],1); gSPLight(pkt,&name.l[1],2); gSPLight(pkt,&name.l[2],3); gSPLight(pkt,&name.a,4); }
#define ICON_peach_BakingCleanser_disabled_palette 0x288A0
#define RDRAM_REF_INTERVAL_REG (RDRAM_BASE_REG+0x10)
#define hs_SetAlpha(alpha) HUD_ELEMENT_OP_SetAlpha, alpha,
#define ICON_battle_SnowmanDoll_disabled_raster 0x2A600
#define MQ_IS_EMPTY(mq) (MQ_GET_COUNT(mq) == 0)
#define C0_TAGLO 28
#define GIO_BASE_REG 0x18000000
#define RAMROM_MSG_ADDR (RAMROM_SIZE - RAMROM_MSG_SIZE)
#define SP_WR_LEN_REG (SP_BASE_REG+0x0C)
#define OS_PRIORITY_IDLE 0
#define ICON_anim_hand_6_palette 0x2D060
#define K2SIZE 0x20000000
#define ICON_badge_JumpCharge_disabled_palette 0x17620
#define GBL_c1(m1a,m1b,m2a,m2b) (m1a) << 30 | (m1b) << 26 | (m2a) << 22 | (m2b) << 18
#define GBL_c2(m1a,m1b,m2a,m2b) (m1a) << 28 | (m1b) << 24 | (m2a) << 20 | (m2b) << 16
#define ICON_battle_13F_raster 0x14B80
#define TLBRAND_RANDSHIFT 0
#define ICON_unused_0F6_disabled_raster 0x23340
#define ICON_food_SpicySoup_raster 0x2420
#define ICON_key_gear_boots_3_raster 0x1760
#define PI_S 3.14159f
#define ICON_key_star_stone_palette 0xFA80
#define ICON_badge_LuckyDay_disabled_raster 0x1C740
#define PI_CLR_INTR PI_STATUS_CLR_INTR
#define ICON_Boots1_raster 0x2E000
#define VOICE_STATUS_END 7
#define SP_BASE_REG 0x04040000
#define G_SETBLENDCOLOR 0xf9
#define NPC_DISPOSE_LOCATION 0,-1000,0
#define RI_CURRENT_LOAD_REG (RI_BASE_REG+0x08)
#define VOICE_WARN_NOT_FIT 0x4000
#define __STDC_HOSTED__ 0
#define RAMROM_RELEASE_OFFSET 0xc
#define ICON_anim_sp_small_3_raster 0x31D60
#define ICON_unused_0EF_disabled_palette 0x225A0
#define gsSP1Quadrangle(v0,v1,v2,v3,flag) {{ (_SHIFTL(G_QUAD, 24, 8)| __gsSP1Quadrangle_w1f(v0, v1, v2, v3, flag)), __gsSP1Quadrangle_w2f(v0, v1, v2, v3, flag) }}
#define EEP16K_MAXBLOCKS 256
#define G_LIGHTING 0x00020000
#define EXC_CPU EXC_CODE(11)
#define ICON_unused_0F7_disabled_raster 0x23580
#define ICON_anim_sp_small_4_palette 0x31DC0
#define ICON_unused_127_palette 0x2B580
#define FPCSR_RM_RM 0x00000003
#define FPCSR_RM_RN 0x00000000
#define FPCSR_RM_RP 0x00000002
#define FPCSR_RM_RZ 0x00000001
#define VI_CTRL_GAMMA_ON 0x00008
#define gsSPTexture(s,t,level,tile,on) {{ (_SHIFTL(G_TEXTURE,24,8) | _SHIFTL(BOWTIE_VAL,16,8) | _SHIFTL((level),11,3) | _SHIFTL((tile),8,3) | _SHIFTL((on),1,7)), (_SHIFTL((s),16,16) | _SHIFTL((t),0,16)) }}
#define DPC_STATUS_CMD_BUSY 0x040
#define ems_SetRenderMode(mode) ENTITY_MODEL_SCRIPT_OP_SetRenderMode, mode,
#define C0_COUNT 9
#define gsDPPipeSync() gsDPNoParam(G_RDPPIPESYNC)
#define ICON_badge_AttackFXD_disabled_palette 0x21A60
#define gSPSegment(pkt,segment,base) gMoveWd(pkt, G_MW_SEGMENT, (segment)*4, base)
#define ICON_food_StrangeLeaf_disabled_palette 0x26020
#define ICON_badge_FlowerSaver_disabled_palette 0x1B520
#define NPC_DISPOSE_POS_X 0
#define RM_AA_ZB_OPA_DECAL(clk) AA_EN | Z_CMP | IM_RD | CVG_DST_WRAP | ALPHA_CVG_SEL | ZMODE_DEC | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define ICON_food_Egg_disabled_raster 0x26280
#define ICON_badge_PowerPlus_disabled_raster 0x15240
#define COLLISION_WITH_NPC_BIT 0x2000
#define gsDPTextureRectangleFlip(xl,yl,xh,yh,tile,s,t,dsdx,dtdy) {{ (_SHIFTL(G_TEXRECTFLIP, 24, 8) | _SHIFTL(xh, 12, 12) | _SHIFTL(yh, 0, 12)), (_SHIFTL(tile, 24, 3) | _SHIFTL(xl, 12, 12) | _SHIFTL(yl, 0, 12)), }}, {{ _SHIFTL(s, 16, 16) | _SHIFTL(t, 0, 16), _SHIFTL(dsdx, 16, 16) | _SHIFTL(dtdy, 0, 16) }}
#define gsImmp21(c,p0,p1,dat) {{ _SHIFTL((c), 24, 8) | _SHIFTL((p0), 8, 16) | _SHIFTL((p1), 0, 8), (unsigned int) (dat) }}
#define G_CCMUX_PRIMITIVE 3
#define AI_PAL_MIN_FREQ 3050
#define ALFailIf(condition,error) if (condition) { return; }
#define gDPSetConvert(pkt,k0,k1,k2,k3,k4,k5) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_SETCONVERT, 24, 8) | _SHIFTL(k0, 13, 9) | _SHIFTL(k1, 4, 9) | _SHIFTR(k2, 5, 4)); _g->words.w1 = (_SHIFTL(k2, 27, 5) | _SHIFTL(k3, 18, 9) | _SHIFTL(k4, 9, 9) | _SHIFTL(k5, 0, 9)); }
#define EVT_SET_GROUP(GROUP) EVT_CMD(EVT_OP_SET_GROUP, GROUP),
#define CAUSE_IPSHIFT 8
#define ICON_food_CakeMix_raster 0x26040
#define gsSP1Triangle(v0,v1,v2,flag) {{ _SHIFTL(G_TRI1, 24, 8)|__gsSP1Triangle_w1f(v0, v1, v2, flag), 0 }}
#define G_ZS_PIXEL (0 << G_MDSFT_ZSRCSEL)
#define G_MWO_MATRIX_XZ_XW_F 0x24
#define G_MWO_MATRIX_XZ_XW_I 0x04
#define gsSPCullDisplayList(vstart,vend) {{ _SHIFTL(G_CULLDL, 24, 8) | _SHIFTL((vstart)*2, 0, 16), _SHIFTL((vend)*2, 0, 16) }}
#define ICON_badge_MegaJump_disabled_palette 0x1C060
#define G_RDP_TRI_TXTR_MASK 0x02
#define gsDPLoadMultiTile(timg,tmem,rtile,fmt,siz,width,height,uls,ult,lrs,lrt,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, siz, width, timg), gsDPSetTile(fmt, siz, (((((lrs)-(uls)+1) * siz ##_TILE_BYTES)+7)>>3), tmem, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadTile( G_TX_LOADTILE, (uls)<<G_TEXTURE_IMAGE_FRAC, (ult)<<G_TEXTURE_IMAGE_FRAC, (lrs)<<G_TEXTURE_IMAGE_FRAC, (lrt)<<G_TEXTURE_IMAGE_FRAC), gsDPPipeSync(), gsDPSetTile(fmt, siz, (((((lrs)-(uls)+1) * siz ##_LINE_BYTES)+7)>>3), tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(rtile, (uls)<<G_TEXTURE_IMAGE_FRAC, (ult)<<G_TEXTURE_IMAGE_FRAC, (lrs)<<G_TEXTURE_IMAGE_FRAC, (lrt)<<G_TEXTURE_IMAGE_FRAC)
#define G_RM_AA_ZB_SUB_SURF2 RM_AA_ZB_SUB_SURF(2)
#define C0_LLADDR 17
#define DPC_STATUS_REG (DPC_BASE_REG+0x0C)
#define G_MDSFT_RGBDITHER 6
#define G_AD_NOTPATTERN (1 << G_MDSFT_ALPHADITHER)
#define G_MDSFT_CYCLETYPE 20
#define ICON_badge_FeelingFine_palette 0x18A40
#define ERR_OSSPTASKLOAD_DRAM 57
#define ICON_food_Goomnut_disabled_raster 0x25080
#define ICON_key_Letter_palette 0x12BC0
#define ICON_key_dojo_card_4_raster 0x10E00
#define gsSPLoadUcode(uc_start,uc_dstart) gsSPLoadUcodeEx((uc_start), (uc_dstart), SP_UCODE_DATA_SIZE)
#define G_TX_NOMASK 0
#define OS_CYCLES_TO_USEC(c) (((u64)(c)*(1000000LL/15625LL))/(OS_CPU_COUNTER/15625LL))
#define OS_K0_TO_PHYSICAL(x) (u32)(((char *)(x)-0x80000000))
#define ICON_battle_13E_raster 0x14940
#define RDRAM_LENGTH (2*512*2048)
#define ERR_OSVIGETCURRENTMODE 36
#define ICON_key_artifact_raster 0xA120
#define ICON_badge_SSmashChg_disabled_palette 0x16F60
#define ERR_OSSETEVENTMESG 9
#define ICON_battle_FrightJar_disabled_raster 0x14040
#define SP_MEM_ADDR_REG (SP_BASE_REG+0x00)
#define ICON_battle_SnowmanDoll_palette 0x2A800
#define MAX_ANIMATED_MESHES 16
#define OS_IM_SW1 0x00000501
#define OS_IM_SW2 0x00000601
#define SEGMENT_NUMBER(a) (((unsigned int)(a) << 4) >> 28)
#define gsDPLoadTLUT_pal256(dram) gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, dram), gsDPTileSync(), gsDPSetTile(0, 0, 0, 256, G_TX_LOADTILE, 0 , 0, 0, 0, 0, 0, 0), gsDPLoadSync(), gsDPLoadTLUTCmd(G_TX_LOADTILE, 255), gsDPPipeSync()
#define ICON_badge_DoubleDip_disabled_palette 0x16420
#define ICON_key_Postcard_palette 0x13280
#define ERR_OSPIRAWREADIO 19
#define ICON_badge_CrazyHeart_palette 0x1E8C0
#define RAMROM_MSG_HDR_SIZE (3*4)
#define ICON_battle_ShootingStar_disabled_raster 0x2ACC0
#define ERR_OSCREATEREGION_SIZE 51
#define ICON_battle_PowerStar_raster 0x2BA40
#define OS_MESG_TYPE_EDMAREAD (OS_MESG_TYPE_BASE+5)
#define ICON_key_koot_red_jar_raster 0xF000
#define ICON_key_TealLetter_disabled_raster 0x12E40
#define G_CD_NOISE (2 << G_MDSFT_RGBDITHER)
#define ICON_badge_DDownPound_disabled_palette 0x17CE0
#define _OS_EXCEPTION_H_ 
#define ems_SetFlags(flags) ENTITY_MODEL_SCRIPT_OP_SetFlags, flags,
#define gdSPDefLights3(ar,ag,ab,r1,g1,b1,x1,y1,z1,r2,g2,b2,x2,y2,z2,r3,g3,b3,x3,y3,z3) { {{ {ar,ag,ab},0,{ar,ag,ab},0}}, {{{ {r1,g1,b1},0,{r1,g1,b1},0,{x1,y1,z1},0}}, {{ {r2,g2,b2},0,{r2,g2,b2},0,{x2,y2,z2},0}}, {{ {r3,g3,b3},0,{r3,g3,b3},0,{x3,y3,z3},0}}} }
#define gdSPDefLights4(ar,ag,ab,r1,g1,b1,x1,y1,z1,r2,g2,b2,x2,y2,z2,r3,g3,b3,x3,y3,z3,r4,g4,b4,x4,y4,z4) { {{ {ar,ag,ab},0,{ar,ag,ab},0}}, {{{ {r1,g1,b1},0,{r1,g1,b1},0,{x1,y1,z1},0}}, {{ {r2,g2,b2},0,{r2,g2,b2},0,{x2,y2,z2},0}}, {{ {r3,g3,b3},0,{r3,g3,b3},0,{x3,y3,z3},0}}, {{ {r4,g4,b4},0,{r4,g4,b4},0,{x4,y4,z4},0}}} }
#define gDPSetTileSize(pkt,t,uls,ult,lrs,lrt) gDPLoadTileGeneric(pkt, G_SETTILESIZE, t, uls, ult, lrs, lrt)
#define ERR_OSVISETYSCALE_VALUE 41
#define TLBLO_PFNMASK 0x3fffffc0
#define G_MDSFT_ZSRCSEL 2
#define LIGHT_1 1
#define LIGHT_2 2
#define LIGHT_3 3
#define LIGHT_6 6
#define LIGHT_7 7
#define LIGHT_8 8
#define gsDPSetTile(fmt,siz,line,tmem,tile,palette,cmt,maskt,shiftt,cms,masks,shifts) {{ (_SHIFTL(G_SETTILE, 24, 8) | _SHIFTL(fmt, 21, 3) | _SHIFTL(siz, 19, 2) | _SHIFTL(line, 9, 9) | _SHIFTL(tmem, 0, 9)), (_SHIFTL(tile, 24, 3) | _SHIFTL(palette, 20, 4) | _SHIFTL(cmt, 18, 2) | _SHIFTL(maskt, 14, 4) | _SHIFTL(shiftt, 10, 4) | _SHIFTL(cms, 8, 2) | _SHIFTL(masks, 4, 4) | _SHIFTL(shifts, 0, 4)) }}
#define ICON_badge_PUpDDown_disabled_palette 0x1D020
#define ICON_food_Lemon_raster 0x25980
#define AL_MAX_CHANNELS 16
#define ICON_key_dojo_card_4_palette 0x11000
#define ICON_food_JellySuper_disabled_raster 0x55A0
#define ICON_food_MapleSuper_disabled_raster 0x5360
#define ICON_unused_0D7_raster 0x1ED80
#define EXC_DBE EXC_CODE(7)
#define ICON_key_crystal_berry_raster 0xCDC0
#define DEG_TO_RAD(deg) (((deg) * TAU) / 360.0f)
#define ICON_food_StinkyHerb_disabled_raster 0x26940
#define G_MWO_MATRIX_WZ_WW_F 0x3c
#define G_MWO_MATRIX_WZ_WW_I 0x1c
#define EVT_UNBIND EVT_CMD(EVT_OP_UNBIND),
#define ICON_food_BlandMeal_disabled_palette 0x4140
#define G_CULL_FRONT 0x00000200
#define G_MWO_CLIP_RPX 0x14
#define ICON_anim_sp_small_6_palette 0x31E40
#define ICON_key_CakePan_palette 0x860
#define G_CC_ADDRGB 1, 0, TEXEL0, SHADE, 0, 0, 0, SHADE
#define ICON_badge_AllorNothing_palette 0x18EC0
#define G_SETKEYR 0xeb
#define _OS_GIO_H_ 
#define RI_BASE_REG 0x04700000
#define ERR_ALBNKFNEW 113
#define hs_End HUD_ELEMENT_OP_End,
#define G_CC_PASS2 0, 0, 0, COMBINED, 0, 0, 0, COMBINED
#define gDPSetCombineKey(pkt,type) gSPSetOtherMode(pkt, G_SETOTHERMODE_H, G_MDSFT_COMBKEY, 1, type)
#define G_IM_SIZ_4b_BYTES 0
#define ICON_anim_fp_1_palette 0x2F380
#define EEPROM_TYPE_16K 0x02
#define ICON_unused_08F_disabled_palette 0x13BA0
#define RM_RA_OPA_SURF(clk) AA_EN | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define CONT_EEPROM 0x8000
#define ICON_food_TastyTonic_palette 0x24500
#define gSPPopMatrixN(pkt,n,num) gDma2p((pkt),G_POPMTX,(num)*64,64,2,0)
#define ICON_key_dojo_card_3_raster 0x10BC0
#define ICON_battle_ThunderBolt_palette 0x2AC80
#define RDRAM_RESET_MODE 0
#define EVT_CASE_DEFAULT EVT_CMD(EVT_OP_CASE_DEFAULT),
#define FR_POS_FRUSTRATIO_1 0x0000ffff
#define FR_POS_FRUSTRATIO_2 0x0000fffe
#define FR_POS_FRUSTRATIO_3 0x0000fffd
#define FR_POS_FRUSTRATIO_4 0x0000fffc
#define FR_POS_FRUSTRATIO_5 0x0000fffb
#define ICON_key_screwdriver_raster 0xDEE0
#define G_ACMUX_PRIMITIVE 3
#define ICON_badge_Berserker_disabled_raster 0x1AA00
#define ICON_badge_MegaSmash_palette 0x1C700
#define ICON_badge_DDownJump_raster 0x1F440
#define gsDPSetBlendMask(mask) gsDPNoOp()
#define OS_WRITE 1
#define ICON_anim_shimmer_1_palette 0x302A0
#define ERR_OSPIRAWSTARTDMA_DEVADDR 22
#define ICON_badge_Refund_palette 0x1B2C0
#define gsSPDmaRead(dmem,dram,size) gsSPDma_io(0,(dmem),(dram),(size))
#define OS_USEC_TO_CYCLES(n) (((u64)(n)*(OS_CPU_COUNTER/15625LL))/(1000000LL/15625LL))
#define ICON_key_gear_boots_1_raster 0x1320
#define ICON_food_ApplePie_disabled_raster 0x2660
#define ICON_unused_0D5_palette 0x1EB00
#define ADPCMFSIZE 16
#define ICON_unused_08F_disabled_raster 0x13980
#define ICON_battle_DizzyDial_disabled_raster 0x29D00
#define DL_SPRITE_OVERHEAD (24)
#define ICON_badge_MegaRush_disabled_palette 0x19A20
#define ICON_badge_DefendPlus_disabled_raster 0x19C80
#define G_RM_AA_ZB_SUB_TERR2 RM_AA_ZB_SUB_TERR(2)
#define EVT_INDEX_OF_LOCAL_FLAG(v) ((v) + EVT_LOCAL_FLAG_OFFSET)
#define _SP_H_ 
#define ICON_key_boo_record_mask_palette 0xAFE0
#define ICON_food_Goomnut_palette 0x25280
#define ICON_badge_MegaHPDrain_palette 0x1CB80
#define gsDPSetTextureLOD(type) gsSPSetOtherMode(G_SETOTHERMODE_H, G_MDSFT_TEXTLOD, 1, type)
#define ICON_badge_AttackFXE_disabled_raster 0x21CC0
#define ICON_anim_coin_9_palette 0x30220
#define RAMROM_SIZE (0x1000000)
#define G_RM_ZB_OPA_SURF2 RM_ZB_OPA_SURF(2)
#define hs_Delete HUD_ELEMENT_OP_Delete,
#define ICON_badge_FlowerFinder_raster 0x1D4C0
#define MAP_STATIC_PAD(n,name) static s32 N(static_pad_ ##name)[n];
#define gDPLoadTextureTile(pkt,timg,fmt,siz,width,height,uls,ult,lrs,lrt,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, siz, width, timg); gDPSetTile(pkt, fmt, siz, (((((lrs)-(uls)+1) * siz ##_TILE_BYTES)+7)>>3), 0, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadTile( pkt, G_TX_LOADTILE, (uls)<<G_TEXTURE_IMAGE_FRAC, (ult)<<G_TEXTURE_IMAGE_FRAC, (lrs)<<G_TEXTURE_IMAGE_FRAC, (lrt)<<G_TEXTURE_IMAGE_FRAC); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, siz, (((((lrs)-(uls)+1) * siz ##_LINE_BYTES)+7)>>3), 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, G_TX_RENDERTILE, (uls)<<G_TEXTURE_IMAGE_FRAC, (ult)<<G_TEXTURE_IMAGE_FRAC, (lrs)<<G_TEXTURE_IMAGE_FRAC, (lrt)<<G_TEXTURE_IMAGE_FRAC) }
#define G_TX_CLAMP 0x2
#define ICON_key_miracle_water_palette 0xD840
#define PROF_MIN_INTERVAL 50
#define gsDPSetTextureLUT(type) gsSPSetOtherMode(G_SETOTHERMODE_H, G_MDSFT_TEXTLUT, 2, type)
#define gsSPDmaWrite(dmem,dram,size) gsSPDma_io(1,(dmem),(dram),(size))
#define SP_CLR_INTR_BREAK 0x00080
#define MAXCONTROLLERS 4
#define gSPBranchLessZ(pkt,dl,vtx,zval,near,far,flag) gSPBranchLessZrg(pkt, dl, vtx, zval, near, far, flag, 0, G_MAXZ)
#define VI_MPAL_CLOCK 48628316
#define AL_FX_BIGROOM 2
#define CAUSE_IP5 0x00001000
#define CAUSE_IP7 0x00004000
#define CAUSE_IP8 0x00008000
#define ICON_badge_SpinAttack_palette 0x1DD80
#define SR_CUMASK 0xf0000000
#define G_ACMUX_LOD_FRACTION 0
#define ICON_food_BubbleBerry_disabled_palette 0x25060
#define DPS_TEST_MODE_REG (DPS_BASE_REG+0x04)
#define G_RM_CLD_SURF RM_CLD_SURF(1)
#define _SHIFTL(v,s,w) ((unsigned int) (((unsigned int)(v) & ((0x01 << (w)) - 1)) << (s)))
#define A_OUT 0x02
#define EVT_ARRAY_FLAG_CUTOFF -200000000
#define EVT_IGNORE_ARG -250000000
#define TWEETSER_PATH_STOP 0x80000000
#define ICON_key_CakeBerries_raster 0x1100
#define ICON_unused_02F_raster 0x8BA0
#define OS_PIM_STACKSIZE 4096
#define ICON_food_LemonCandy_palette 0x6E20
#define PAL_PTR u16*
#define ICON_unused_02F_palette 0x8DA0
#define ERR_OSAISETNEXTBUFFER_ADDR 15
#define PI_DOM_LAT_OFS 0x00
#define G_IM_SIZ_4b_INCR 3
#define BOOT_ADDRESS_INDY 0x88100000
#define G_RM_NOOP2 RM_NOOP(2)
#define gDPSetDepthImage(pkt,i) gSetImage(pkt, G_SETZIMG, 0, 0, 1, i)
#define ICON_badge_HappyFlower_disabled_raster 0x1FB00
#define C0_REVMASK 0xff
#define VI_H_SYNC_LEAP_REG VI_LEAP_REG
#define G_RM_AA_DEC_LINE2 RM_AA_DEC_LINE(2)
#define G_RM_AA_TEX_EDGE2 RM_AA_TEX_EDGE(2)
#define ALIGNOFFST (ALIGNSZ-1)
#define ICON_key_dojo_card_2_raster 0x109A0
#define ICON_key_calculator_raster 0xDCC0
#define ICON_battle_FireFlower_palette 0x2A5C0
#define PCLEANEXCL 0x0080
#define ICON_badge_PowerBounce_raster 0x156C0
#define EVT_KILL_THREAD(TID) EVT_CMD(EVT_OP_KILL_THREAD, TID),
#define G_TRI_SHADE_TXTR 0xce
#define RDRAM_DELAY_REG (RDRAM_BASE_REG+0x08)
#define ICON_food_BubbleBerry_palette 0x25040
#define SEGMENT_OFFSET(a) ((unsigned int)(a) & 0x00ffffff)
#define AL_PHASE_SUSTREL 4
#define ICON_badge_SpeedySpin_disabled_palette 0x1DB60
#define ERR_OSDPSETNEXTBUFFER_ADDR 17
#define ICON_badge_Refund_disabled_raster 0x1B0C0
#define G_LOADBLOCK 0xf3
#define ICON_unused_0F6_raster 0x23340
#define ICON_peach_BakingFlour_disabled_palette 0x28D20
#define G_RM_AA_SUB_TERR RM_AA_SUB_TERR(1)
#define gDPSetOtherMode(pkt,mode0,mode1) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_RDPSETOTHERMODE,24,8)|_SHIFTL(mode0,0,24); _g->words.w1 = (unsigned int)(mode1); }
#define ICON_badge_SpikeShield_disabled_palette 0x15B20
#define HOST_DBG_CMD_READY 2
#define ICON_Items_palette 0x2E8C0
#define G_AD_NOISE (2 << G_MDSFT_ALPHADITHER)
#define gSPLineW3D(pkt,v0,v1,wd,flag) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_LINE3D, 24, 8)| __gsSPLine3D_w1f(v0, v1, wd, flag); _g->words.w1 = 0; }
#define GameByte(INDEX) ((INDEX) - EVT_GAME_BYTE_OFFSET)
#define ICON_badge_CloseCall_disabled_palette 0x1E6A0
#define ICON_food_Lemon_palette 0x25B80
#define DPC_STATUS_DMA_BUSY 0x100
#define ICON_key_snowman_scarf_raster 0xE760
#define RDRAM_START RDRAM_0_START
#define ICON_food_Spaghetti_disabled_palette 0x5A00
#define SR_IMASK0 0x0000ff00
#define SR_IMASK1 0x0000fe00
#define SR_IMASK2 0x0000fc00
#define SR_IMASK3 0x0000f800
#define SR_IMASK4 0x0000f000
#define SR_IMASK5 0x0000e000
#define SR_IMASK6 0x0000c000
#define SR_IMASK8 0x00000000
#define ICON_food_DeluxeFeast_disabled_palette 0x45C0
#define RM_XLU_SURF(clk) IM_RD | CVG_DST_FULL | FORCE_BL | ZMODE_OPA | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define ICON_food_JamminJelly_disabled_palette 0x27460
#define RAMROM_LOG_ADDR (RAMROM_MSG_ADDR + (5*RAMROM_BUF_SIZE))
#define ICON_badge_Kaiden_palette 0x20840
#define G_SETZIMG 0xfe
#define EVT_BIND_PADLOCK(EVT_SOURCE,TRIGGER,COLLIDER_ID,ITEM_LIST,UNK_A3,TRIGGER_PTR_OUTVAR) EVT_CMD(EVT_OP_BIND_PADLOCK, (Bytecode) EVT_SOURCE, TRIGGER, COLLIDER_ID, (Bytecode) ITEM_LIST, UNK_A3, TRIGGER_PTR_OUTVAR),
#define ICON_badge_DeepFocus_palette 0x203C0
#define TLBINX_INXMASK 0x3f
#define PFS_ERR_BAD_DATA 6
#define gsSPClearGeometryMode(word) gsSPGeometryMode((word),0)
#define ICON_badge_HPPlus_disabled_palette 0x15FA0
#define DCACHE_SIZE 0x2000
#define ICON_food_SpicySoup_disabled_palette 0x2640
#define SP_IBIST_FAILED 0x78
#define ICON_Items_raster 0x2E6C0
#define hs_PlaySound(arg0) HUD_ELEMENT_OP_PlaySound, arg0,
#define gsDPLoadTileGeneric(c,tile,uls,ult,lrs,lrt) {{ _SHIFTL(c, 24, 8) | _SHIFTL(uls, 12, 12) | _SHIFTL(ult, 0, 12), _SHIFTL(tile, 24, 3) | _SHIFTL(lrs, 12, 12) | _SHIFTL(lrt, 0, 12)}}
#define A_LOOP 0x02
#define OS_VI_BIT_NORMALINTERLACE 0x0004
#define ICON_food_JellyPop_disabled_palette 0x7080
#define ICON_food_Lime_palette 0x25940
#define MI_INTR_MASK_AI 0x04
#define ICON_food_Coconut_raster 0x264C0
#define G_RDPFULLSYNC 0xe9
#define hs_SetSizesFixedScale(size1,size2) HUD_ELEMENT_OP_SetSizesFixedScale, size1, size2,
#define ICON_badge_SJumpChg_disabled_raster 0x17640
#define alCSPSetProgram alCSPSetChlProgram
#define gsDPNoOpTag(tag) gsDPParam(G_NOOP, tag)
#define MI_INTR_MASK_DP 0x20
#define G_CC_HILITERGBA2 ENVIRONMENT, COMBINED, TEXEL0, COMBINED, ENVIRONMENT, COMBINED, TEXEL0, COMBINED
#define ICON_food_KoopaTea_palette 0x50E0
#define ICON_peach_BakingFlour_palette 0x28D00
#define G_RM_AA_TEX_TERR RM_AA_TEX_TERR(1)
#define ICON_unused_0F4_disabled_raster 0x22EC0
#define NS(x,y,z) _NS(x, y, z)
#define OS_VI_PAL_LAF1 17
#define TAU 6.28318f
#define CONT_DOWN 0x0400
#define hs_SetTileSize(size) HUD_ELEMENT_OP_SetTileSize, size,
#define ERR_OSSTOPTIMER 77
#define PI 3.141592f
#define MapVar(INDEX) ((INDEX) - EVT_MAP_VAR_OFFSET)
#define ERR_OSTHPROFILESTOP_LAR 147
#define RP(x) rp->r_ ##x
#define _OS_EEPROM_H_ 
#define G_AC_DITHER (3 << G_MDSFT_ALPHACOMPARE)
#define ICON_food_TastyTonic_disabled_raster 0x24300
#define SR_BEV 0x00400000
#define ICON_food_FriedShroom_palette 0x33A0
#define _G_CC_SPARSEST PRIMITIVE, TEXEL0, LOD_FRACTION, TEXEL0, PRIMITIVE, TEXEL0, LOD_FRACTION, TEXEL0
#define RAMROM_APP_READ_ADDR (RAMROM_MSG_ADDR + (0*RAMROM_BUF_SIZE))
#define EXC_RMISS EXC_CODE(2)
#define G_DL 0xde
#define ICON_food_StrangeCake_raster 0x70A0
#define ICON_badge_SlowGo_raster 0x19380
#define ICON_badge_HPPlus_palette 0x15F80
#define OS_VI_PAL_LAN1 16
#define OS_VI_PAL_LAN2 20
#define ICON_anim_hand_1_palette 0x2CA20
#define MI_INTR_MASK_PI 0x10
#define ICON_food_KoopaLeaf_disabled_raster 0x252C0
#define ICON_anim_shimmer_5_raster 0x30380
#define ICON_badge_ShrinkSmash_disabled_raster 0x1EFC0
#define SCREEN_HEIGHT 240
#define A_NOAUX 0x00
#define MI_INTR_MASK_SI 0x02
#define ICON_badge_LastStand_disabled_raster 0x1E240
#define MI_INTR_MASK_SP 0x01
#define CONT_LEFT 0x0200
#define G_CC_MODULATEIDECALA_PRIM TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, TEXEL0
#define MI_INTR_MASK_VI 0x08
#define es_SetCallback(func,time) ENTITY_SCRIPT_OP_SetCallback, time, (s32)func,
#define ICON_badge_DizzyAttack_palette 0x1D900
#define G_MW_LIGHTCOL 0x0a
#define ICON_key_Letter_disabled_palette 0x12BE0
#define G_ON (1)
#define ArrayVar(INDEX) ((INDEX) - EVT_ARRAY_VAR_OFFSET)
#define ICON_badge_HammerThrow_palette 0x18380
#define LEO_SECTOR_MODE 3
#define ICON_anim_heart_1_raster 0x30BA0
#define OS_MESG_TYPE_COUNTER (OS_MESG_TYPE_BASE+4)
#define ICON_key_dojo_card_2_palette 0x10BA0
#define BATTLE_ENTITY_ID_MASK 0x800
#define AL_CMIDI_CNTRL_LOOPCOUNT_BIG 105
#define OS_IM_NONE 0x00000001
#define ICON_battle_137_disabled_palette 0x2A3A0
#define gSPGeometryMode(pkt,c,s) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_GEOMETRYMODE,24,8)|_SHIFTL(~(u32)(c),0,24); _g->words.w1 = (u32)(s); }
#define G_ACMUX_COMBINED 0
#define gDPLoadTextureBlock_4b(pkt,timg,fmt,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, G_IM_SIZ_16b, 1, timg); gDPSetTile(pkt, fmt, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height)+3)>>2)-1, CALC_DXT_4b(width)); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, G_IM_SIZ_4b, ((((width)>>1)+7)>>3), 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define aClearBuffer(pkt,d,c) { Acmd *_a = (Acmd *)pkt; _a->words.w0 = _SHIFTL(A_CLEARBUFF, 24, 8) | _SHIFTL(d, 0, 24); _a->words.w1 = (unsigned int)(c); }
#define ICON_food_RedBerry_palette 0x24BC0
#define ICON_key_key_tubba_castle_raster 0x9460
#define aPoleFilter(pkt,f,g,s) { Acmd *_a = (Acmd *)pkt; _a->words.w0 = (_SHIFTL(A_POLEF, 24, 8) | _SHIFTL(f, 16, 8) | _SHIFTL(g, 0, 16)); _a->words.w1 = (unsigned int)(s); }
#define AL_GAIN_CHANGE_TIME 1000
#define ICON_unused_12D_disabled_raster 0x2C100
#define ICON_battle_XBandage_raster 0x29400
#define OS_GBPAK_POWER_ON 0x01
#define G_TP_NONE (0 << G_MDSFT_TEXTPERSP)
#define ICON_anim_heart_1_palette 0x30CC0
#define A(sym) NS(AREA, sym, NAMESUFFIX)
#define N(sym) NS(NAMESPACE, sym, NAMESUFFIX)
#define ICON_badge_RunawayPay_raster 0x1AE80
#define G_SCALE_FRAC 8
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long long u64;
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef long long s64;
typedef volatile unsigned char vu8;
typedef volatile unsigned short vu16;
typedef volatile unsigned long vu32;
typedef volatile unsigned long long vu64;
typedef volatile signed char vs8;
typedef volatile short vs16;
typedef volatile long vs32;
typedef volatile long long vs64;
typedef float f32;
typedef double f64;
typedef unsigned int size_t;
#define NPTR    0       // Leftover strings in the CV64 ROM suggest the usage of "NPTR" instead of "NULL"
typedef float MtxF[4][4];
typedef float mf[4][4];
typedef s32 OSPri;
typedef s32 OSId;
typedef union { struct { f32 f_odd; f32 f_even; } f; f64 d; } __OSfp;
typedef struct {
 u64 at, v0, v1, a0, a1, a2, a3;
 u64 t0, t1, t2, t3, t4, t5, t6, t7;
 u64 s0, s1, s2, s3, s4, s5, s6, s7;
 u64 t8, t9, gp, sp, s8, ra;
 u64 lo, hi;
 u32 sr, pc, cause, badvaddr, rcp;
 u32 fpcsr;
 __OSfp fp0, fp2, fp4, fp6, fp8, fp10, fp12, fp14;
 __OSfp fp16, fp18, fp20, fp22, fp24, fp26, fp28, fp30;
} __OSThreadContext;
typedef struct {
    u32 flag;
    u32 count;
    u64 time;
} __OSThreadprofile_s;
typedef struct OSThread_s {
 struct OSThread_s *next;
 OSPri priority;
 struct OSThread_s **queue;
 struct OSThread_s *tlnext;
 u16 state;
 u16 flags;
 OSId id;
 int fp;
 __OSThreadprofile_s *thprof;
 __OSThreadContext context;
} OSThread;
extern void osCreateThread(OSThread *, OSId, void (*)(void *),
           void *, void *, OSPri);
extern void osDestroyThread(OSThread *);
extern void osYieldThread(void);
extern void osStartThread(OSThread *);
extern void osStopThread(OSThread *);
extern OSId osGetThreadId(OSThread *);
extern void osSetThreadPri(OSThread *, OSPri);
extern OSPri osGetThreadPri(OSThread *);
typedef u32 OSEvent;
typedef void * OSMesg;
typedef struct OSMesgQueue_s {
 OSThread *mtqueue;
 OSThread *fullqueue;
 s32 validCount;
 s32 first;
 s32 msgCount;
 OSMesg *msg;
} OSMesgQueue;
extern void osCreateMesgQueue(OSMesgQueue *, OSMesg *, s32);
extern s32 osSendMesg(OSMesgQueue *, OSMesg, s32);
extern s32 osJamMesg(OSMesgQueue *, OSMesg, s32);
extern s32 osRecvMesg(OSMesgQueue *, OSMesg *, s32);
extern void osSetEventMesg(OSEvent, OSMesgQueue *, OSMesg);
typedef u32 OSIntMask;
typedef u32 OSHWIntr;
extern OSIntMask osGetIntMask(void);
extern OSIntMask osSetIntMask(OSIntMask);
typedef u32 OSPageMask;
extern void osMapTLB(s32, OSPageMask, void *, u32, u32, s32);
extern void osMapTLBRdb(void);
extern void osUnmapTLB(s32);
extern void osUnmapTLBAll(void);
extern void osSetTLBASID(s32);
typedef struct {
 u32 errStatus;
        void *dramAddr;
 void *C2Addr;
 u32 sectorSize;
 u32 C1ErrNum;
 u32 C1ErrSector[4];
} __OSBlockInfo;
typedef struct {
 u32 cmdType;
 u16 transferMode;
 u16 blockNum;
 s32 sectorNum;
 u32 devAddr;
 u32 bmCtlShadow;
 u32 seqCtlShadow;
 __OSBlockInfo block[2];
} __OSTranxInfo;
typedef struct OSPiHandle_s {
        struct OSPiHandle_s *next;
        u8 type;
        u8 latency;
        u8 pageSize;
        u8 relDuration;
        u8 pulse;
 u8 domain;
        u32 baseAddress;
        u32 speed;
        __OSTranxInfo transferInfo;
} OSPiHandle;
typedef struct {
        u8 type;
        u32 address;
} OSPiInfo;
typedef struct {
        u16 type;
        u8 pri;
        u8 status;
 OSMesgQueue *retQueue;
} OSIoMesgHdr;
typedef struct {
 OSIoMesgHdr hdr;
 void * dramAddr;
 u32 devAddr;
 u32 size;
 OSPiHandle *piHandle;
} OSIoMesg;
typedef struct {
        s32 active;
 OSThread *thread;
        OSMesgQueue *cmdQueue;
        OSMesgQueue *evtQueue;
        OSMesgQueue *acsQueue;
        s32 (*dma)(s32, u32, void *, u32);
        s32 (*edma)(OSPiHandle *, s32, u32, void *, u32);
} OSDevMgr;
extern OSPiHandle *__osPiTable;
extern u32 osPiGetStatus(void);
extern s32 osPiGetDeviceType(void);
extern s32 osPiWriteIo(u32, u32);
extern s32 osPiReadIo(u32, u32 *);
extern s32 osPiStartDma(OSIoMesg *, s32, s32, u32, void *, u32,
         OSMesgQueue *);
extern void osCreatePiManager(OSPri, OSMesgQueue *, OSMesg *, s32);
extern OSPiHandle *osCartRomInit(void);
extern OSPiHandle *osLeoDiskInit(void);
extern OSPiHandle *osDriveRomInit(void);
extern s32 osEPiDeviceType(OSPiHandle *, OSPiInfo *);
extern s32 osEPiWriteIo(OSPiHandle *, u32 , u32 );
extern s32 osEPiReadIo(OSPiHandle *, u32 , u32 *);
extern s32 osEPiStartDma(OSPiHandle *, OSIoMesg *, s32);
extern s32 osEPiLinkHandle(OSPiHandle *);
typedef struct {
    u32 ctrl;
    u32 width;
    u32 burst;
    u32 vSync;
    u32 hSync;
    u32 leap;
    u32 hStart;
    u32 xScale;
    u32 vCurrent;
} OSViCommonRegs;
typedef struct {
    u32 origin;
    u32 yScale;
    u32 vStart;
    u32 vBurst;
    u32 vIntr;
} OSViFieldRegs;
typedef struct {
    u8 type;
    OSViCommonRegs comRegs;
    OSViFieldRegs fldRegs[2];
} OSViMode;
extern OSViMode osViModeTable[];
extern OSViMode osViModeNtscLpn1;
extern OSViMode osViModeNtscLpf1;
extern OSViMode osViModeNtscLan1;
extern OSViMode osViModeNtscLaf1;
extern OSViMode osViModeNtscLpn2;
extern OSViMode osViModeNtscLpf2;
extern OSViMode osViModeNtscLan2;
extern OSViMode osViModeNtscLaf2;
extern OSViMode osViModeNtscHpn1;
extern OSViMode osViModeNtscHpf1;
extern OSViMode osViModeNtscHan1;
extern OSViMode osViModeNtscHaf1;
extern OSViMode osViModeNtscHpn2;
extern OSViMode osViModeNtscHpf2;
extern OSViMode osViModePalLpn1;
extern OSViMode osViModePalLpf1;
extern OSViMode osViModePalLan1;
extern OSViMode osViModePalLaf1;
extern OSViMode osViModePalLpn2;
extern OSViMode osViModePalLpf2;
extern OSViMode osViModePalLan2;
extern OSViMode osViModePalLaf2;
extern OSViMode osViModePalHpn1;
extern OSViMode osViModePalHpf1;
extern OSViMode osViModePalHan1;
extern OSViMode osViModePalHaf1;
extern OSViMode osViModePalHpn2;
extern OSViMode osViModePalHpf2;
extern OSViMode osViModeMpalLpn1;
extern OSViMode osViModeMpalLpf1;
extern OSViMode osViModeMpalLan1;
extern OSViMode osViModeMpalLaf1;
extern OSViMode osViModeMpalLpn2;
extern OSViMode osViModeMpalLpf2;
extern OSViMode osViModeMpalLan2;
extern OSViMode osViModeMpalLaf2;
extern OSViMode osViModeMpalHpn1;
extern OSViMode osViModeMpalHpf1;
extern OSViMode osViModeMpalHan1;
extern OSViMode osViModeMpalHaf1;
extern OSViMode osViModeMpalHpn2;
extern OSViMode osViModeMpalHpf2;
extern OSViMode osViModeFpalLpn1;
extern OSViMode osViModeFpalLpf1;
extern OSViMode osViModeFpalLan1;
extern OSViMode osViModeFpalLaf1;
extern OSViMode osViModeFpalLpn2;
extern OSViMode osViModeFpalLpf2;
extern OSViMode osViModeFpalLan2;
extern OSViMode osViModeFpalLaf2;
extern OSViMode osViModeFpalHpn1;
extern OSViMode osViModeFpalHpf1;
extern OSViMode osViModeFpalHan1;
extern OSViMode osViModeFpalHaf1;
extern OSViMode osViModeFpalHpn2;
extern OSViMode osViModeFpalHpf2;
extern u32 osViGetStatus(void);
extern u32 osViGetCurrentMode(void);
extern u32 osViGetCurrentLine(void);
extern u32 osViGetCurrentField(void);
extern void *osViGetCurrentFramebuffer(void);
extern void *osViGetNextFramebuffer(void);
extern void osViSetXScale(f32);
extern void osViSetYScale(f32);
extern void osViExtendVStart(u32);
extern void osViSetSpecialFeatures(u32);
extern void osViSetMode(OSViMode *);
extern void osViSetEvent(OSMesgQueue *, OSMesg, u32);
extern void osViSwapBuffer(void *);
extern void osViBlack(u8);
extern void osViFade(u8, u16);
extern void osViRepeatLine(u8);
extern void osCreateViManager(OSPri);
extern u32 osAiGetStatus(void);
extern u32 osAiGetLength(void);
extern s32 osAiSetFrequency(u32);
extern s32 osAiSetNextBuffer(void *, u32);
typedef u64 OSTime;
typedef struct OSTimer_s {
 struct OSTimer_s *next;
 struct OSTimer_s *prev;
 OSTime interval;
 OSTime value;
 OSMesgQueue *mq;
 OSMesg msg;
} OSTimer;
extern OSTime osGetTime(void);
extern void osSetTime(OSTime);
extern int osSetTimer(OSTimer *, OSTime, OSTime,
       OSMesgQueue *, OSMesg);
extern int osStopTimer(OSTimer *);
typedef struct {
 u16 type;
 u8 status;
 u8 errno;
}OSContStatus;
typedef struct {
 u16 button;
 s8 stick_x;
 s8 stick_y;
 u8 errno;
} OSContPad;
typedef struct {
 void *address;
 u8 databuffer[32];
        u8 addressCrc;
 u8 dataCrc;
 u8 errno;
} OSContRamIo;
extern s32 osContInit(OSMesgQueue *, u8 *, OSContStatus *);
extern s32 osContReset(OSMesgQueue *, OSContStatus *);
extern s32 osContStartQuery(OSMesgQueue *);
extern s32 osContStartReadData(OSMesgQueue *);
extern s32 osContSetCh(u8);
extern void osContGetQuery(OSContStatus *);
extern void osContGetReadData(OSContPad *);
typedef struct {
 int status;
 OSMesgQueue *queue;
 int channel;
 u8 id[32];
 u8 label[32];
 int version;
 int dir_size;
 int inode_table;
 int minode_table;
 int dir_table;
 int inode_start_page;
 u8 banks;
 u8 activebank;
} OSPfs;
typedef struct {
 u32 file_size;
   u32 game_code;
   u16 company_code;
   char ext_name[4];
   char game_name[16];
} OSPfsState;
extern s32 osPfsInitPak(OSMesgQueue *, OSPfs *, int);
extern s32 osPfsRepairId(OSPfs *);
extern s32 osPfsInit(OSMesgQueue *, OSPfs *, int);
extern s32 osPfsReFormat(OSPfs *, OSMesgQueue *, int);
extern s32 osPfsChecker(OSPfs *);
extern s32 osPfsAllocateFile(OSPfs *, u16, u32, u8 *, u8 *, int, s32 *);
extern s32 osPfsFindFile(OSPfs *, u16, u32, u8 *, u8 *, s32 *);
extern s32 osPfsDeleteFile(OSPfs *, u16, u32, u8 *, u8 *);
extern s32 osPfsReadWriteFile(OSPfs *, s32, u8, int, int, u8 *);
extern s32 osPfsFileState(OSPfs *, s32, OSPfsState *);
extern s32 osPfsGetLabel(OSPfs *, u8 *, int *);
extern s32 osPfsSetLabel(OSPfs *, u8 *);
extern s32 osPfsIsPlug(OSMesgQueue *, u8 *);
extern s32 osPfsFreeBlocks(OSPfs *, s32 *);
extern s32 osPfsNumFiles(OSPfs *, s32 *, s32 *);
typedef struct {
  u16 fixed1;
  u16 start_address;
  u8 nintendo_chr[0x30];
  u8 game_title[16];
  u16 company_code;
  u8 body_code;
  u8 cart_type;
  u8 rom_size;
  u8 ram_size;
  u8 country_code;
  u8 fixed2;
  u8 version;
  u8 isum;
  u16 sum;
} OSGbpakId;
extern s32 osGbpakInit(OSMesgQueue *, OSPfs *, int);
extern s32 osGbpakPower(OSPfs *, s32);
extern s32 osGbpakGetStatus(OSPfs *, u8 *);
extern s32 osGbpakReadWrite(OSPfs *, u16, u16, u8 *, u16);
extern s32 osGbpakReadId(OSPfs *, OSGbpakId *, u8 *);
extern s32 osGbpakCheckConnector(OSPfs *, u8 *);
typedef struct {
  OSMesgQueue *__mq;
  int __channel;
  s32 __mode;
  u8 cmd_status;
} OSVoiceHandle;
typedef struct {
  u16 warning;
  u16 answer_num;
  u16 voice_level;
  u16 voice_sn;
  u16 voice_time;
  u16 answer[5];
  u16 distance[5];
} OSVoiceData;
extern s32 osVoiceInit(OSMesgQueue *, OSVoiceHandle *, int);
extern s32 osVoiceCheckWord(u8 *data);
extern s32 osVoiceClearDictionary(OSVoiceHandle *, u8);
extern s32 osVoiceControlGain(OSVoiceHandle *, s32, s32);
extern s32 osVoiceSetWord(OSVoiceHandle *, u8 *);
extern s32 osVoiceStartReadData(OSVoiceHandle *);
extern s32 osVoiceStopReadData(OSVoiceHandle *);
extern s32 osVoiceGetReadData(OSVoiceHandle *, OSVoiceData *);
extern s32 osVoiceMaskDictionary(OSVoiceHandle *, u8 *, int);
extern void osVoiceCountSyllables(u8 *, u32 *);
extern void osInvalDCache(void *, s32);
extern void osInvalICache(void *, s32);
extern void osWritebackDCache(void *, s32);
extern void osWritebackDCacheAll(void);
typedef struct {
 u16 *histo_base;
 u32 histo_size;
 u32 *text_start;
 u32 *text_end;
} OSProf;
extern void osProfileInit(OSProf *, u32 profcnt);
extern void osProfileStart(u32);
extern void osProfileFlush(void);
extern void osProfileStop(void);
extern void osThreadProfileClear(OSId);
extern void osThreadProfileInit(void);
extern void osThreadProfileStart(void);
extern void osThreadProfileStop(void);
extern u32 osThreadProfileReadCount(OSId);
extern u32 osThreadProfileReadCountTh(OSThread*);
extern OSTime osThreadProfileReadTime(OSId);
extern OSTime osThreadProfileReadTimeTh(OSThread*);
extern u32 osGetCount(void);
extern s32 osRomType;
extern void *osRomBase;
extern s32 osTvType;
extern s32 osResetType;
extern s32 osCicId;
extern s32 osVersion;
extern u32 osMemSize;
extern s32 osAppNMIBuffer[];
extern u64 osClockRate;
extern OSIntMask __OSGlobalIntMask;
extern void osExit(void);
extern u32 osGetMemSize(void);
extern s32 osAfterPreNMI(void);
extern s32 osEepromProbe(OSMesgQueue *);
extern s32 osEepromRead(OSMesgQueue *, u8, u8 *);
extern s32 osEepromWrite(OSMesgQueue *, u8, u8 *);
extern s32 osEepromLongRead(OSMesgQueue *, u8, u8 *, int);
extern s32 osEepromLongWrite(OSMesgQueue *, u8, u8 *, int);
extern void __osInitialize_common(void);
extern void __osInitialize_autodetect(void);
extern void __osInitialize_msp(void);
extern void __osInitialize_kmc(void);
extern void __osInitialize_isv(void);
extern void __osInitialize_emu(void);
extern s32 osTestHost(void);
extern void osReadHost(void *, u32);
extern void osWriteHost(void *, u32);
extern void osAckRamromRead(void);
extern void osAckRamromWrite(void);
extern void osInitRdb(u8 *sendBuf, u32 sendSize);
extern u32 osVirtualToPhysical(void *);
extern void * osPhysicalToVirtual(u32);
extern u32 osDpGetStatus(void);
extern void osDpSetStatus(u32);
extern void osDpGetCounters(u32 *);
extern s32 osDpSetNextBuffer(void *, u64);
extern s32 osMotorInit(OSMesgQueue *, OSPfs *, int);
extern s32 __osMotorAccess(OSPfs *, s32);
extern void bcopy(const void *, void *, int);
extern int bcmp(const void *, const void *, int);
extern void bzero(void *, int);
extern int sprintf(char *s, const char *fmt, ...);
extern void osSyncPrintf(const char *fmt, ...);
typedef struct _Region_s {
 u8 *r_startBufferAddress;
 u8 *r_endAddress;
 s32 r_bufferSize;
 s32 r_bufferCount;
 u16 r_freeList;
 u16 r_alignSize;
} OSRegion;
extern void *osCreateRegion(void *, u32, u32, u32);
extern void *osMalloc(void *);
extern void osFree(void *, void *);
extern s32 osGetRegionBufCount(void *);
extern s32 osGetRegionBufSize(void *);
extern void rmonMain( void * );
extern void rmonPrintf( const char *, ... );
typedef struct {
 u32 type;
 u32 flags;
 u64 *ucode_boot;
 u32 ucode_boot_size;
 u64 *ucode;
 u32 ucode_size;
 u64 *ucode_data;
 u32 ucode_data_size;
 u64 *dram_stack;
 u32 dram_stack_size;
 u64 *output_buff;
 u64 *output_buff_size;
 u64 *data_ptr;
 u32 data_size;
 u64 *yield_data_ptr;
 u32 yield_data_size;
} OSTask_t;
typedef union {
    OSTask_t t;
    long long int force_structure_alignment;
} OSTask;
typedef u32 OSYieldResult;
extern void osSpTaskLoad(OSTask *tp);
extern void osSpTaskStartGo(OSTask *tp);
extern void osSpTaskYield(void);
extern OSYieldResult osSpTaskYielded(OSTask *tp);
typedef struct {
 short ob[3];
 unsigned short flag;
 short tc[2];
 unsigned char cn[4];
} Vtx_t;
typedef struct {
 short ob[3];
 unsigned short flag;
 short tc[2];
 signed char n[3];
 unsigned char a;
} Vtx_tn;
typedef union {
    Vtx_t v;
    Vtx_tn n;
    long long int force_structure_alignment;
} Vtx;
typedef struct {
  void *SourceImagePointer;
  void *TlutPointer;
  short Stride;
  short SubImageWidth;
  short SubImageHeight;
  char SourceImageType;
  char SourceImageBitSize;
  short SourceImageOffsetS;
  short SourceImageOffsetT;
  char dummy[4];
} uSprite_t;
typedef union {
  uSprite_t s;
  long long int force_structure_allignment[3];
} uSprite;
typedef struct {
 unsigned char flag;
 unsigned char v[3];
} Tri;
typedef long Mtx_t[4][4];
typedef union {
    Mtx_t m;
    long long int force_structure_alignment;
} Mtx;
typedef struct {
 short vscale[4];
 short vtrans[4];
} Vp_t;
typedef union {
    Vp_t vp;
    long long int force_structure_alignment;
} Vp;
typedef struct {
  unsigned char col[3];
  char pad1;
  unsigned char colc[3];
  char pad2;
  signed char dir[3];
  char pad3;
} Light_t;
typedef struct {
  unsigned char col[3];
  char pad1;
  unsigned char colc[3];
  char pad2;
} Ambient_t;
typedef struct {
  int x1,y1,x2,y2;
} Hilite_t;
typedef union {
    Light_t l;
    long long int force_structure_alignment[2];
} Light;
typedef union {
    Ambient_t l;
    long long int force_structure_alignment[1];
} Ambient;
typedef struct {
    Ambient a;
    Light l[7];
} Lightsn;
typedef struct {
    Ambient a;
    Light l[1];
} Lights0;
typedef struct {
    Ambient a;
    Light l[1];
} Lights1;
typedef struct {
    Ambient a;
    Light l[2];
} Lights2;
typedef struct {
    Ambient a;
    Light l[3];
} Lights3;
typedef struct {
    Ambient a;
    Light l[4];
} Lights4;
typedef struct {
    Ambient a;
    Light l[5];
} Lights5;
typedef struct {
    Ambient a;
    Light l[6];
} Lights6;
typedef struct {
    Ambient a;
    Light l[7];
} Lights7;
typedef struct {
    Light l[2];
} LookAt;
typedef union {
    Hilite_t h;
    long int force_structure_alignment[4];
} Hilite;
typedef struct {
 int cmd:8;
 unsigned int par:8;
 unsigned int len:16;
 unsigned int addr;
} Gdma;
typedef struct {
  int cmd:8;
  int pad:24;
  Tri tri;
} Gtri;
typedef struct {
  int cmd:8;
  int pad1:24;
  int pad2:24;
  unsigned char param:8;
} Gpopmtx;
typedef struct {
  int cmd:8;
  int pad0:8;
  int mw_index:8;
  int number:8;
  int pad1:8;
  int base:24;
} Gsegment;
typedef struct {
  int cmd:8;
  int pad0:8;
  int sft:8;
  int len:8;
  unsigned int data:32;
} GsetothermodeL;
typedef struct {
  int cmd:8;
  int pad0:8;
  int sft:8;
  int len:8;
  unsigned int data:32;
} GsetothermodeH;
typedef struct {
  unsigned char cmd;
  unsigned char lodscale;
  unsigned char tile;
  unsigned char on;
  unsigned short s;
  unsigned short t;
} Gtexture;
typedef struct {
  int cmd:8;
  int pad:24;
  Tri line;
} Gline3D;
typedef struct {
  int cmd:8;
  int pad1:24;
  short int pad2;
  short int scale;
} Gperspnorm;
typedef struct {
                int cmd:8;
                unsigned int fmt:3;
                unsigned int siz:2;
                unsigned int pad:7;
                unsigned int wd:12;
                unsigned int dram;
} Gsetimg;
typedef struct {
  int cmd:8;
  unsigned int muxs0:24;
  unsigned int muxs1:32;
} Gsetcombine;
typedef struct {
  int cmd:8;
  unsigned char pad;
  unsigned char prim_min_level;
  unsigned char prim_level;
  unsigned long color;
} Gsetcolor;
typedef struct {
  int cmd:8;
  int x0:10;
  int x0frac:2;
  int y0:10;
  int y0frac:2;
  unsigned int pad:8;
  int x1:10;
  int x1frac:2;
  int y1:10;
  int y1frac:2;
} Gfillrect;
typedef struct {
  int cmd:8;
  unsigned int fmt:3;
  unsigned int siz:2;
  unsigned int pad0:1;
  unsigned int line:9;
  unsigned int tmem:9;
  unsigned int pad1:5;
  unsigned int tile:3;
  unsigned int palette:4;
  unsigned int ct:1;
  unsigned int mt:1;
  unsigned int maskt:4;
  unsigned int shiftt:4;
  unsigned int cs:1;
  unsigned int ms:1;
  unsigned int masks:4;
  unsigned int shifts:4;
} Gsettile;
typedef struct {
  int cmd:8;
  unsigned int sl:12;
  unsigned int tl:12;
  int pad:5;
  unsigned int tile:3;
  unsigned int sh:12;
  unsigned int th:12;
} Gloadtile;
typedef Gloadtile Gloadblock;
typedef Gloadtile Gsettilesize;
typedef Gloadtile Gloadtlut;
typedef struct {
  unsigned int cmd:8;
  unsigned int xl:12;
  unsigned int yl:12;
  unsigned int pad1:5;
  unsigned int tile:3;
  unsigned int xh:12;
  unsigned int yh:12;
  unsigned int s:16;
  unsigned int t:16;
  unsigned int dsdx:16;
  unsigned int dtdy:16;
} Gtexrect;
typedef struct {
    unsigned long w0;
    unsigned long w1;
    unsigned long w2;
    unsigned long w3;
} TexRect;
typedef struct {
 unsigned int w0;
 unsigned int w1;
} Gwords;
typedef union {
 Gwords words;
 Gdma dma;
 Gtri tri;
 Gline3D line;
 Gpopmtx popmtx;
 Gsegment segment;
 GsetothermodeH setothermodeH;
 GsetothermodeL setothermodeL;
 Gtexture texture;
 Gperspnorm perspnorm;
 Gsetimg setimg;
 Gsetcombine setcombine;
 Gsetcolor setcolor;
 Gfillrect fillrect;
 Gsettile settile;
 Gloadtile loadtile;
 Gsettilesize settilesize;
 Gloadtlut loadtlut;
        long long int force_structure_alignment;
} Gfx;
typedef struct {
   unsigned int cmd:8;
 unsigned int flags:8;
 unsigned int gain:16;
 unsigned int addr;
} Aadpcm;
typedef struct {
   unsigned int cmd:8;
 unsigned int flags:8;
 unsigned int gain:16;
 unsigned int addr;
} Apolef;
typedef struct {
   unsigned int cmd:8;
 unsigned int flags:8;
 unsigned int pad1:16;
 unsigned int addr;
} Aenvelope;
typedef struct {
   unsigned int cmd:8;
 unsigned int pad1:8;
 unsigned int dmem:16;
 unsigned int pad2:16;
 unsigned int count:16;
} Aclearbuff;
typedef struct {
   unsigned int cmd:8;
 unsigned int pad1:8;
 unsigned int pad2:16;
 unsigned int inL:16;
        unsigned int inR:16;
} Ainterleave;
typedef struct {
   unsigned int cmd:8;
 unsigned int pad1:24;
 unsigned int addr;
} Aloadbuff;
typedef struct {
   unsigned int cmd:8;
 unsigned int flags:8;
 unsigned int pad1:16;
 unsigned int addr;
} Aenvmixer;
typedef struct {
   unsigned int cmd:8;
 unsigned int flags:8;
 unsigned int gain:16;
 unsigned int dmemi:16;
 unsigned int dmemo:16;
} Amixer;
typedef struct {
   unsigned int cmd:8;
 unsigned int flags:8;
 unsigned int dmem2:16;
 unsigned int addr;
} Apan;
typedef struct {
   unsigned int cmd:8;
 unsigned int flags:8;
 unsigned int pitch:16;
 unsigned int addr;
} Aresample;
typedef struct {
   unsigned int cmd:8;
 unsigned int flags:8;
 unsigned int pad1:16;
 unsigned int addr;
} Areverb;
typedef struct {
   unsigned int cmd:8;
 unsigned int pad1:24;
 unsigned int addr;
} Asavebuff;
typedef struct {
   unsigned int cmd:8;
 unsigned int pad1:24;
 unsigned int pad2:2;
 unsigned int number:4;
 unsigned int base:24;
} Asegment;
typedef struct {
   unsigned int cmd:8;
 unsigned int flags:8;
 unsigned int dmemin:16;
 unsigned int dmemout:16;
 unsigned int count:16;
} Asetbuff;
typedef struct {
   unsigned int cmd:8;
 unsigned int flags:8;
 unsigned int vol:16;
 unsigned int voltgt:16;
 unsigned int volrate:16;
} Asetvol;
typedef struct {
    unsigned int cmd:8;
    unsigned int pad1:8;
    unsigned int dmemin:16;
    unsigned int dmemout:16;
    unsigned int count:16;
} Admemmove;
typedef struct {
    unsigned int cmd:8;
    unsigned int pad1:8;
    unsigned int count:16;
    unsigned int addr;
} Aloadadpcm;
typedef struct {
    unsigned int cmd:8;
    unsigned int pad1:8;
    unsigned int pad2:16;
    unsigned int addr;
} Asetloop;
typedef struct {
 unsigned int w0;
 unsigned int w1;
} Awords;
typedef union {
 Awords words;
 Aadpcm adpcm;
        Apolef polef;
 Aclearbuff clearbuff;
 Aenvelope envelope;
        Ainterleave interleave;
 Aloadbuff loadbuff;
        Aenvmixer envmixer;
 Aresample resample;
 Areverb reverb;
 Asavebuff savebuff;
 Asegment segment;
 Asetbuff setbuff;
 Asetvol setvol;
        Admemmove dmemmove;
        Aloadadpcm loadadpcm;
        Amixer mixer;
        Asetloop setloop;
        long long int force_union_align;
} Acmd;
typedef short ADPCM_STATE[16];
typedef short POLEF_STATE[4];
typedef short RESAMPLE_STATE[16];
typedef short ENVMIX_STATE[40];
typedef s32 ALMicroTime;
typedef u8 ALPan;
typedef struct ALLink_s {
    struct ALLink_s *next;
    struct ALLink_s *prev;
} ALLink;
void alUnlink(ALLink *element);
void alLink(ALLink *element, ALLink *after);
typedef s32 (*ALDMAproc)(s32 addr, s32 len, void *state);
typedef ALDMAproc (*ALDMANew)(void *state);
void alCopy(void *src, void *dest, s32 len);
typedef struct {
    u8 *base;
    u8 *cur;
    s32 len;
    s32 count;
} ALHeap;
void alHeapInit(ALHeap *hp, u8 *base, s32 len);
void *alHeapDBAlloc(u8 *file, s32 line, ALHeap *hp, s32 num, s32 size);
s32 alHeapCheck(ALHeap *hp);
typedef u8 ALFxId;
typedef void *ALFxRef;
enum {AL_ADPCM_WAVE = 0,
         AL_RAW16_WAVE};
typedef struct {
    s32 order;
    s32 npredictors;
    s16 book[1];
} ALADPCMBook;
typedef struct {
    u32 start;
    u32 end;
    u32 count;
    ADPCM_STATE state;
} ALADPCMloop;
typedef struct {
    u32 start;
    u32 end;
    u32 count;
} ALRawLoop;
typedef struct {
    ALMicroTime attackTime;
    ALMicroTime decayTime;
    ALMicroTime releaseTime;
    u8 attackVolume;
    u8 decayVolume;
} ALEnvelope;
typedef struct {
    u8 velocityMin;
    u8 velocityMax;
    u8 keyMin;
    u8 keyMax;
    u8 keyBase;
    s8 detune;
} ALKeyMap;
typedef struct {
    ALADPCMloop *loop;
    ALADPCMBook *book;
} ALADPCMWaveInfo;
typedef struct {
    ALRawLoop *loop;
} ALRAWWaveInfo;
typedef struct ALWaveTable_s {
    u8 *base;
    s32 len;
    u8 type;
    u8 flags;
    union {
        ALADPCMWaveInfo adpcmWave;
        ALRAWWaveInfo rawWave;
    } waveInfo;
} ALWaveTable;
typedef struct ALSound_s {
    ALEnvelope *envelope;
    ALKeyMap *keyMap;
    ALWaveTable *wavetable;
    ALPan samplePan;
    u8 sampleVolume;
    u8 flags;
} ALSound;
typedef struct {
    u8 volume;
    ALPan pan;
    u8 priority;
    u8 flags;
    u8 tremType;
    u8 tremRate;
    u8 tremDepth;
    u8 tremDelay;
    u8 vibType;
    u8 vibRate;
    u8 vibDepth;
    u8 vibDelay;
    s16 bendRange;
    s16 soundCount;
    ALSound *soundArray[1];
} ALInstrument;
typedef struct ALBank_s {
    s16 instCount;
    u8 flags;
    u8 pad;
    s32 sampleRate;
    ALInstrument *percussion;
    ALInstrument *instArray[1];
} ALBank;
typedef struct {
    s16 revision;
    s16 bankCount;
    ALBank *bankArray[1];
} ALBankFile;
void alBnkfNew(ALBankFile *f, u8 *table);
typedef struct {
    u8 *offset;
    s32 len;
} ALSeqData;
typedef struct {
    s16 revision;
    s16 seqCount;
    ALSeqData seqArray[1];
} ALSeqFile;
void alSeqFileNew(ALSeqFile *f, u8 *base);
typedef ALMicroTime (*ALVoiceHandler)(void *);
typedef struct {
    s32 maxVVoices;
    s32 maxPVoices;
    s32 maxUpdates;
    s32 maxFXbusses;
    void *dmaproc;
    ALHeap *heap;
    s32 outputRate;
    ALFxId fxType;
    s32 *params;
} ALSynConfig;
typedef struct ALPlayer_s {
    struct ALPlayer_s *next;
    void *clientData;
    ALVoiceHandler handler;
    ALMicroTime callTime;
    s32 samplesLeft;
} ALPlayer;
typedef struct ALVoice_s {
    ALLink node;
    struct PVoice_s *pvoice;
    ALWaveTable *table;
    void *clientPrivate;
    s16 state;
    s16 priority;
    s16 fxBus;
    s16 unityPitch;
} ALVoice;
typedef struct ALVoiceConfig_s {
    s16 priority;
    s16 fxBus;
    u8 unityPitch;
} ALVoiceConfig;
typedef struct {
    ALPlayer *head;
    ALLink pFreeList;
    ALLink pAllocList;
    ALLink pLameList;
    s32 paramSamples;
    s32 curSamples;
    ALDMANew dma;
    ALHeap *heap;
    struct ALParam_s *paramList;
    struct ALMainBus_s *mainBus;
    struct ALAuxBus_s *auxBus;
    struct ALFilter_s *outputFilter;
    s32 numPVoices;
    s32 maxAuxBusses;
    s32 outputRate;
    s32 maxOutSamples;
} ALSynth;
void alSynNew(ALSynth *s, ALSynConfig *config);
void alSynDelete(ALSynth *s);
void alSynAddPlayer(ALSynth *s, ALPlayer *client);
void alSynRemovePlayer(ALSynth *s, ALPlayer *client);
s32 alSynAllocVoice(ALSynth *s, ALVoice *v, ALVoiceConfig *vc);
void alSynFreeVoice(ALSynth *s, ALVoice *voice);
void alSynStartVoice(ALSynth *s, ALVoice *voice, ALWaveTable *w);
void alSynStartVoiceParams(ALSynth *s, ALVoice *voice, ALWaveTable *w,
                              f32 pitch, s16 vol, ALPan pan, u8 fxmix,
                              ALMicroTime t);
void alSynStopVoice(ALSynth *s, ALVoice *voice);
void alSynSetVol(ALSynth *s, ALVoice *v, s16 vol, ALMicroTime delta);
void alSynSetPitch(ALSynth *s, ALVoice *voice, f32 ratio);
void alSynSetPan(ALSynth *s, ALVoice *voice, ALPan pan);
void alSynSetFXMix(ALSynth *s, ALVoice *voice, u8 fxmix);
void alSynSetPriority(ALSynth *s, ALVoice *voice, s16 priority);
s16 alSynGetPriority(ALSynth *s, ALVoice *voice);
ALFxRef *alSynAllocFX(ALSynth *s, s16 bus, ALSynConfig *c, ALHeap *hp);
ALFxRef alSynGetFXRef(ALSynth *s, s16 bus, s16 index);
void alSynFreeFX(ALSynth *s, ALFxRef *fx);
void alSynSetFXParam(ALSynth *s, ALFxRef fx, s16 paramID, void *param);
typedef struct {
    ALSynth drvr;
} ALGlobals;
extern ALGlobals *alGlobals;
void alInit(ALGlobals *glob, ALSynConfig *c);
void alClose(ALGlobals *glob);
Acmd *alAudioFrame(Acmd *cmdList, s32 *cmdLen, s16 *outBuf, s32 outLen);
enum ALMsg {
    AL_SEQ_REF_EVT,
    AL_SEQ_MIDI_EVT,
    AL_SEQP_MIDI_EVT,
    AL_TEMPO_EVT,
    AL_SEQ_END_EVT,
    AL_NOTE_END_EVT,
    AL_SEQP_ENV_EVT,
    AL_SEQP_META_EVT,
    AL_SEQP_PROG_EVT,
    AL_SEQP_API_EVT,
    AL_SEQP_VOL_EVT,
    AL_SEQP_LOOP_EVT,
    AL_SEQP_PRIORITY_EVT,
    AL_SEQP_SEQ_EVT,
    AL_SEQP_BANK_EVT,
    AL_SEQP_PLAY_EVT,
    AL_SEQP_STOP_EVT,
    AL_SEQP_STOPPING_EVT,
    AL_TRACK_END,
    AL_CSP_LOOPSTART,
    AL_CSP_LOOPEND,
    AL_CSP_NOTEOFF_EVT,
    AL_TREM_OSC_EVT,
    AL_VIB_OSC_EVT
};
enum AL_MIDIstatus {
    AL_MIDI_ChannelMask = 0x0F,
    AL_MIDI_StatusMask = 0xF0,
    AL_MIDI_ChannelVoice = 0x80,
    AL_MIDI_NoteOff = 0x80,
    AL_MIDI_NoteOn = 0x90,
    AL_MIDI_PolyKeyPressure = 0xA0,
    AL_MIDI_ControlChange = 0xB0,
    AL_MIDI_ChannelModeSelect = 0xB0,
    AL_MIDI_ProgramChange = 0xC0,
    AL_MIDI_ChannelPressure = 0xD0,
    AL_MIDI_PitchBendChange = 0xE0,
    AL_MIDI_SysEx = 0xF0,
    AL_MIDI_SystemCommon = 0xF1,
    AL_MIDI_TimeCodeQuarterFrame = 0xF1,
    AL_MIDI_SongPositionPointer = 0xF2,
    AL_MIDI_SongSelect = 0xF3,
    AL_MIDI_Undefined1 = 0xF4,
    AL_MIDI_Undefined2 = 0xF5,
    AL_MIDI_TuneRequest = 0xF6,
    AL_MIDI_EOX = 0xF7,
    AL_MIDI_SystemRealTime = 0xF8,
    AL_MIDI_TimingClock = 0xF8,
    AL_MIDI_Undefined3 = 0xF9,
    AL_MIDI_Start = 0xFA,
    AL_MIDI_Continue = 0xFB,
    AL_MIDI_Stop = 0xFC,
    AL_MIDI_Undefined4 = 0xFD,
    AL_MIDI_ActiveSensing = 0xFE,
    AL_MIDI_SystemReset = 0xFF,
    AL_MIDI_Meta = 0xFF
};
enum AL_MIDIctrl {
    AL_MIDI_VOLUME_CTRL = 0x07,
    AL_MIDI_PAN_CTRL = 0x0A,
    AL_MIDI_PRIORITY_CTRL = 0x10,
    AL_MIDI_FX_CTRL_0 = 0x14,
    AL_MIDI_FX_CTRL_1 = 0x15,
    AL_MIDI_FX_CTRL_2 = 0x16,
    AL_MIDI_FX_CTRL_3 = 0x17,
    AL_MIDI_FX_CTRL_4 = 0x18,
    AL_MIDI_FX_CTRL_5 = 0x19,
    AL_MIDI_FX_CTRL_6 = 0x1A,
    AL_MIDI_FX_CTRL_7 = 0x1B,
    AL_MIDI_FX_CTRL_8 = 0x1C,
    AL_MIDI_FX_CTRL_9 = 0x1D,
    AL_MIDI_SUSTAIN_CTRL = 0x40,
    AL_MIDI_FX1_CTRL = 0x5B,
    AL_MIDI_FX3_CTRL = 0x5D
};
enum AL_MIDImeta {
    AL_MIDI_META_TEMPO = 0x51,
    AL_MIDI_META_EOT = 0x2f
};
typedef struct {
    u8 *curPtr;
    s32 lastTicks;
    s32 curTicks;
    s16 lastStatus;
} ALSeqMarker;
typedef struct {
    s32 ticks;
    u8 status;
    u8 byte1;
    u8 byte2;
    u32 duration;
} ALMIDIEvent;
typedef struct {
    s32 ticks;
    u8 status;
    u8 type;
    u8 len;
    u8 byte1;
    u8 byte2;
    u8 byte3;
} ALTempoEvent;
typedef struct {
    s32 ticks;
    u8 status;
    u8 type;
    u8 len;
} ALEndEvent;
typedef struct {
    struct ALVoice_s *voice;
} ALNoteEvent;
typedef struct {
    struct ALVoice_s *voice;
    ALMicroTime delta;
    u8 vol;
} ALVolumeEvent;
typedef struct {
    s16 vol;
} ALSeqpVolEvent;
typedef struct {
    ALSeqMarker *start;
    ALSeqMarker *end;
    s32 count;
} ALSeqpLoopEvent;
typedef struct {
    u8 chan;
    u8 priority;
} ALSeqpPriorityEvent;
typedef struct {
    void *seq;
} ALSeqpSeqEvent;
typedef struct {
    ALBank *bank;
} ALSeqpBankEvent;
typedef struct {
    struct ALVoiceState_s *vs;
    void *oscState;
    u8 chan;
} ALOscEvent;
typedef struct {
    s16 type;
    union {
        ALMIDIEvent midi;
        ALTempoEvent tempo;
        ALEndEvent end;
        ALNoteEvent note;
        ALVolumeEvent vol;
        ALSeqpLoopEvent loop;
        ALSeqpVolEvent spvol;
 ALSeqpPriorityEvent sppriority;
 ALSeqpSeqEvent spseq;
 ALSeqpBankEvent spbank;
        ALOscEvent osc;
    } msg;
} ALEvent;
typedef struct {
    ALLink node;
    ALMicroTime delta;
    ALEvent evt;
} ALEventListItem;
typedef struct {
    ALLink freeList;
    ALLink allocList;
    s32 eventCount;
} ALEventQueue;
void alEvtqNew(ALEventQueue *evtq, ALEventListItem *items,
                          s32 itemCount);
ALMicroTime alEvtqNextEvent(ALEventQueue *evtq, ALEvent *evt);
void alEvtqPostEvent(ALEventQueue *evtq, ALEvent *evt,
                                ALMicroTime delta);
void alEvtqFlush(ALEventQueue *evtq);
void alEvtqFlushType(ALEventQueue *evtq, s16 type);
typedef struct ALVoiceState_s {
    struct ALVoiceState_s *next;
    ALVoice voice;
    ALSound *sound;
    ALMicroTime envEndTime;
    f32 pitch;
    f32 vibrato;
    u8 envGain;
    u8 channel;
    u8 key;
    u8 velocity;
    u8 envPhase;
    u8 phase;
    u8 tremelo;
    u8 flags;
} ALVoiceState;
typedef struct {
    ALInstrument *instrument;
    s16 bendRange;
    ALFxId fxId;
    ALPan pan;
    u8 priority;
    u8 vol;
    u8 fxmix;
    u8 sustain;
    f32 pitchBend;
} ALChanState;
typedef struct ALSeq_s {
    u8 *base;
    u8 *trackStart;
    u8 *curPtr;
    s32 lastTicks;
    s32 len;
    f32 qnpt;
    s16 division;
    s16 lastStatus;
} ALSeq;
typedef struct {
    u32 trackOffset[16];
    u32 division;
} ALCMidiHdr;
typedef struct ALCSeq_s {
    ALCMidiHdr *base;
    u32 validTracks;
    f32 qnpt;
    u32 lastTicks;
    u32 lastDeltaTicks;
    u32 deltaFlag;
    u8 *curLoc[16];
    u8 *curBUPtr[16];
    u8 curBULen[16];
    u8 lastStatus[16];
    u32 evtDeltaTicks[16];
} ALCSeq;
typedef struct {
    u32 validTracks;
    s32 lastTicks;
    u32 lastDeltaTicks;
    u8 *curLoc[16];
    u8 *curBUPtr[16];
    u8 curBULen[16];
    u8 lastStatus[16];
    u32 evtDeltaTicks[16];
} ALCSeqMarker;
typedef struct {
    s32 maxVoices;
    s32 maxEvents;
    u8 maxChannels;
    u8 debugFlags;
    ALHeap *heap;
    void *initOsc;
    void *updateOsc;
    void *stopOsc;
} ALSeqpConfig;
typedef ALMicroTime (*ALOscInit)(void **oscState,f32 *initVal, u8 oscType,
                                   u8 oscRate, u8 oscDepth, u8 oscDelay);
typedef ALMicroTime (*ALOscUpdate)(void *oscState, f32 *updateVal);
typedef void (*ALOscStop)(void *oscState);
typedef struct {
    ALPlayer node;
    ALSynth *drvr;
    ALSeq *target;
    ALMicroTime curTime;
    ALBank *bank;
    s32 uspt;
    s32 nextDelta;
    s32 state;
    u16 chanMask;
    s16 vol;
    u8 maxChannels;
    u8 debugFlags;
    ALEvent nextEvent;
    ALEventQueue evtq;
    ALMicroTime frameTime;
    ALChanState *chanState;
    ALVoiceState *vAllocHead;
    ALVoiceState *vAllocTail;
    ALVoiceState *vFreeList;
    ALOscInit initOsc;
    ALOscUpdate updateOsc;
    ALOscStop stopOsc;
    ALSeqMarker *loopStart;
    ALSeqMarker *loopEnd;
    s32 loopCount;
} ALSeqPlayer;
typedef struct {
    ALPlayer node;
    ALSynth *drvr;
    ALCSeq *target;
    ALMicroTime curTime;
    ALBank *bank;
    s32 uspt;
    s32 nextDelta;
    s32 state;
    u16 chanMask;
    s16 vol;
    u8 maxChannels;
    u8 debugFlags;
    ALEvent nextEvent;
    ALEventQueue evtq;
    ALMicroTime frameTime;
    ALChanState *chanState;
    ALVoiceState *vAllocHead;
    ALVoiceState *vAllocTail;
    ALVoiceState *vFreeList;
    ALOscInit initOsc;
    ALOscUpdate updateOsc;
    ALOscStop stopOsc;
} ALCSPlayer;
void alSeqNew(ALSeq *seq, u8 *ptr, s32 len);
void alSeqNextEvent(ALSeq *seq, ALEvent *event);
s32 alSeqGetTicks(ALSeq *seq);
f32 alSeqTicksToSec(ALSeq *seq, s32 ticks, u32 tempo);
u32 alSeqSecToTicks(ALSeq *seq, f32 sec, u32 tempo);
void alSeqNewMarker(ALSeq *seq, ALSeqMarker *m, u32 ticks);
void alSeqSetLoc(ALSeq *seq, ALSeqMarker *marker);
void alSeqGetLoc(ALSeq *seq, ALSeqMarker *marker);
void alCSeqNew(ALCSeq *seq, u8 *ptr);
void alCSeqNextEvent(ALCSeq *seq,ALEvent *evt);
s32 alCSeqGetTicks(ALCSeq *seq);
f32 alCSeqTicksToSec(ALCSeq *seq, s32 ticks, u32 tempo);
u32 alCSeqSecToTicks(ALCSeq *seq, f32 sec, u32 tempo);
void alCSeqNewMarker(ALCSeq *seq, ALCSeqMarker *m, u32 ticks);
void alCSeqSetLoc(ALCSeq *seq, ALCSeqMarker *marker);
void alCSeqGetLoc(ALCSeq *seq, ALCSeqMarker *marker);
f32 alCents2Ratio(s32 cents);
void alSeqpNew(ALSeqPlayer *seqp, ALSeqpConfig *config);
void alSeqpDelete(ALSeqPlayer *seqp);
void alSeqpSetSeq(ALSeqPlayer *seqp, ALSeq *seq);
ALSeq *alSeqpGetSeq(ALSeqPlayer *seqp);
void alSeqpPlay(ALSeqPlayer *seqp);
void alSeqpStop(ALSeqPlayer *seqp);
s32 alSeqpGetState(ALSeqPlayer *seqp);
void alSeqpSetBank(ALSeqPlayer *seqp, ALBank *b);
void alSeqpSetTempo(ALSeqPlayer *seqp, s32 tempo);
s32 alSeqpGetTempo(ALSeqPlayer *seqp);
s16 alSeqpGetVol(ALSeqPlayer *seqp);
void alSeqpSetVol(ALSeqPlayer *seqp, s16 vol);
void alSeqpLoop(ALSeqPlayer *seqp, ALSeqMarker *start, ALSeqMarker *end, s32 count);
void alSeqpSetChlProgram(ALSeqPlayer *seqp, u8 chan, u8 prog);
s32 alSeqpGetChlProgram(ALSeqPlayer *seqp, u8 chan);
void alSeqpSetChlFXMix(ALSeqPlayer *seqp, u8 chan, u8 fxmix);
u8 alSeqpGetChlFXMix(ALSeqPlayer *seqp, u8 chan);
void alSeqpSetChlVol(ALSeqPlayer *seqp, u8 chan, u8 vol);
u8 alSeqpGetChlVol(ALSeqPlayer *seqp, u8 chan);
void alSeqpSetChlPan(ALSeqPlayer *seqp, u8 chan, ALPan pan);
ALPan alSeqpGetChlPan(ALSeqPlayer *seqp, u8 chan);
void alSeqpSetChlPriority(ALSeqPlayer *seqp, u8 chan, u8 priority);
u8 alSeqpGetChlPriority(ALSeqPlayer *seqp, u8 chan);
void alSeqpSendMidi(ALSeqPlayer *seqp, s32 ticks, u8 status, u8 byte1, u8 byte2);
void alCSPNew(ALCSPlayer *seqp, ALSeqpConfig *config);
void alCSPDelete(ALCSPlayer *seqp);
void alCSPSetSeq(ALCSPlayer *seqp, ALCSeq *seq);
ALCSeq *alCSPGetSeq(ALCSPlayer *seqp);
void alCSPPlay(ALCSPlayer *seqp);
void alCSPStop(ALCSPlayer *seqp);
s32 alCSPGetState(ALCSPlayer *seqp);
void alCSPSetBank(ALCSPlayer *seqp, ALBank *b);
void alCSPSetTempo(ALCSPlayer *seqp, s32 tempo);
s32 alCSPGetTempo(ALCSPlayer *seqp);
s16 alCSPGetVol(ALCSPlayer *seqp);
void alCSPSetVol(ALCSPlayer *seqp, s16 vol);
void alCSPSetChlProgram(ALCSPlayer *seqp, u8 chan, u8 prog);
s32 alCSPGetChlProgram(ALCSPlayer *seqp, u8 chan);
void alCSPSetChlFXMix(ALCSPlayer *seqp, u8 chan, u8 fxmix);
u8 alCSPGetChlFXMix(ALCSPlayer *seqp, u8 chan);
void alCSPSetChlPan(ALCSPlayer *seqp, u8 chan, ALPan pan);
ALPan alCSPGetChlPan(ALCSPlayer *seqp, u8 chan);
void alCSPSetChlVol(ALCSPlayer *seqp, u8 chan, u8 vol);
u8 alCSPGetChlVol(ALCSPlayer *seqp, u8 chan);
void alCSPSetChlPriority(ALCSPlayer *seqp, u8 chan, u8 priority);
u8 alCSPGetChlPriority(ALCSPlayer *seqp, u8 chan);
void alCSPSendMidi(ALCSPlayer *seqp, s32 ticks, u8 status,
                       u8 byte1, u8 byte2);
typedef struct {
    s32 maxSounds;
    s32 maxEvents;
    ALHeap *heap;
} ALSndpConfig;
typedef struct {
    ALPlayer node;
    ALEventQueue evtq;
    ALEvent nextEvent;
    ALSynth *drvr;
    s32 target;
    void *sndState;
    s32 maxSounds;
    ALMicroTime frameTime;
    ALMicroTime nextDelta;
    ALMicroTime curTime;
} ALSndPlayer;
typedef s16 ALSndId;
void alSndpNew(ALSndPlayer *sndp, ALSndpConfig *c);
void alSndpDelete(ALSndPlayer *sndp);
ALSndId alSndpAllocate(ALSndPlayer *sndp, ALSound *sound);
void alSndpDeallocate(ALSndPlayer *sndp, ALSndId id);
void alSndpSetSound(ALSndPlayer *sndp, ALSndId id);
ALSndId alSndpGetSound(ALSndPlayer *sndp);
void alSndpPlay(ALSndPlayer *sndp);
void alSndpPlayAt(ALSndPlayer *sndp, ALMicroTime delta);
void alSndpStop(ALSndPlayer *sndp);
void alSndpSetVol(ALSndPlayer *sndp, s16 vol);
void alSndpSetPitch(ALSndPlayer *sndp, f32 pitch);
void alSndpSetPan(ALSndPlayer *sndp, ALPan pan);
void alSndpSetPriority(ALSndPlayer *sndp, ALSndId id, u8 priority);
void alSndpSetFXMix(ALSndPlayer *sndp, u8 mix);
s32 alSndpGetState(ALSndPlayer *sndp);
void alParseAbiCL(Acmd *cmdList, u32 nbytes);
typedef struct {
 unsigned char *base;
 int fmt, siz;
 int xsize, ysize;
 int lsize;
 int addr;
 int w, h;
 int s, t;
} Image;
typedef struct {
 float col[3];
 float pos[3];
 float a1, a2;
} PositionalLight;
extern int guLoadTextureBlockMipMap(Gfx **glist, unsigned char *tbuf, Image *im,
  unsigned char startTile, unsigned char pal, unsigned char cms,
  unsigned char cmt, unsigned char masks, unsigned char maskt,
  unsigned char shifts, unsigned char shiftt, unsigned char cfs,
  unsigned char cft);
extern int guGetDPLoadTextureTileSz (int ult, int lrt);
extern void guDPLoadTextureTile (Gfx *glistp, void *timg,
   int texl_fmt, int texl_size,
   int img_width, int img_height,
   int uls, int ult, int lrs, int lrt,
   int palette,
   int cms, int cmt,
   int masks, int maskt,
   int shifts, int shiftt);
extern void guMtxIdent(Mtx *m);
extern void guMtxIdentF(float mf[4][4]);
extern void guOrtho(Mtx *m, float l, float r, float b, float t,
      float n, float f, float scale);
extern void guOrthoF(float mf[4][4], float l, float r, float b, float t,
       float n, float f, float scale);
extern void guFrustum(Mtx *m, float l, float r, float b, float t,
        float n, float f, float scale);
extern void guFrustumF(float mf[4][4], float l, float r, float b, float t,
         float n, float f, float scale);
extern void guPerspective(Mtx *m, u16 *perspNorm, float fovy,
     float aspect, float near, float far, float scale);
extern void guPerspectiveF(float mf[4][4], u16 *perspNorm, float fovy,
      float aspect, float near, float far, float scale);
extern void guLookAt(Mtx *m,
   float xEye, float yEye, float zEye,
   float xAt, float yAt, float zAt,
   float xUp, float yUp, float zUp);
extern void guLookAtF(float mf[4][4], float xEye, float yEye, float zEye,
        float xAt, float yAt, float zAt,
        float xUp, float yUp, float zUp);
extern void guLookAtReflect(Mtx *m, LookAt *l,
   float xEye, float yEye, float zEye,
   float xAt, float yAt, float zAt,
   float xUp, float yUp, float zUp);
extern void guLookAtReflectF(float mf[4][4], LookAt *l,
        float xEye, float yEye, float zEye,
        float xAt, float yAt, float zAt,
        float xUp, float yUp, float zUp);
extern void guLookAtHilite(Mtx *m, LookAt *l, Hilite *h,
                float xEye, float yEye, float zEye,
                float xAt, float yAt, float zAt,
                float xUp, float yUp, float zUp,
                float xl1, float yl1, float zl1,
                float xl2, float yl2, float zl2,
  int twidth, int theight);
extern void guLookAtHiliteF(float mf[4][4], LookAt *l, Hilite *h,
  float xEye, float yEye, float zEye,
  float xAt, float yAt, float zAt,
  float xUp, float yUp, float zUp,
  float xl1, float yl1, float zl1,
  float xl2, float yl2, float zl2,
  int twidth, int theight);
extern void guLookAtStereo(Mtx *m,
   float xEye, float yEye, float zEye,
   float xAt, float yAt, float zAt,
   float xUp, float yUp, float zUp,
   float eyedist);
extern void guLookAtStereoF(float mf[4][4],
         float xEye, float yEye, float zEye,
         float xAt, float yAt, float zAt,
         float xUp, float yUp, float zUp,
   float eyedist);
extern void guRotate(Mtx *m, float a, float x, float y, float z);
extern void guRotateF(float mf[4][4], float a, float x, float y, float z);
extern void guRotateRPY(Mtx *m, float r, float p, float y);
extern void guRotateRPYF(float mf[4][4], float r, float p, float h);
extern void guAlign(Mtx *m, float a, float x, float y, float z);
extern void guAlignF(float mf[4][4], float a, float x, float y, float z);
extern void guScale(Mtx *m, float x, float y, float z);
extern void guScaleF(float mf[4][4], float x, float y, float z);
extern void guTranslate(Mtx *m, float x, float y, float z);
extern void guTranslateF(float mf[4][4], float x, float y, float z);
extern void guPosition(Mtx *m, float r, float p, float h, float s,
         float x, float y, float z);
extern void guPositionF(float mf[4][4], float r, float p, float h, float s,
   float x, float y, float z);
extern void guMtxF2L(float mf[4][4], Mtx *m);
extern void guMtxL2F(float mf[4][4], Mtx *m);
extern void guMtxCatF(float m[4][4], float n[4][4], float r[4][4]);
extern void guMtxCatL(Mtx *m, Mtx *n, Mtx *res);
extern void guMtxXFMF(float mf[4][4], float x, float y, float z,
        float *ox, float *oy, float *oz);
extern void guMtxXFML(Mtx *m, float x, float y, float z,
        float *ox, float *oy, float *oz);
extern void guNormalize(float *x, float *y, float *z);
void guPosLight(PositionalLight *pl, Light *l,
                float xOb, float yOb, float zOb);
void guPosLightHilite(PositionalLight *pl1, PositionalLight *pl2,
                Light *l1, Light *l2,
                LookAt *l, Hilite *h,
                float xEye, float yEye, float zEye,
                float xOb, float yOb, float zOb,
                float xUp, float yUp, float zUp,
                int twidth, int theight);
extern int guRandom(void);
extern float sinf(float angle);
extern float cosf(float angle);
extern signed short sins (unsigned short angle);
extern signed short coss (unsigned short angle);
extern float sqrtf(float value);
extern void guParseRdpDL(u64 *rdp_dl, u64 nbytes, u8 flags);
extern void guParseString(char *StringPointer, u64 nbytes);
extern void
guBlinkRdpDL(u64 *rdp_dl_in, u64 nbytes_in,
             u64 *rdp_dl_out, u64 *nbytes_out,
             u32 x, u32 y, u32 radius,
             u8 red, u8 green, u8 blue,
             u8 flags);
extern void guParseGbiDL(u64 *gbi_dl, u32 nbytes, u8 flags);
extern void guDumpGbiDL(OSTask *tp,u8 flags);
typedef struct {
    int dataSize;
    int dlType;
    int flags;
    u32 paddr;
} guDLPrintCB;
void guSprite2DInit(uSprite *SpritePointer,
      void *SourceImagePointer,
      void *TlutPointer,
      int Stride,
      int SubImageWidth,
      int SubImageHeight,
      int SourceImageType,
      int SourceImageBitSize,
      int SourceImageOffsetS,
      int SourceImageOffsetT);
typedef struct {
    long type;
    long length;
    long magic;
    char userdata[(((4096)*6)-(3*4))];
} RamRomBuffer;
struct bitmap {
 s16 width;
 s16 width_img;
 s16 s;
 s16 t;
 void *buf;
 s16 actualHeight;
 s16 LUToffset;
};
typedef struct bitmap Bitmap;
struct sprite {
 s16 x,y;
 s16 width, height;
 f32 scalex, scaley;
 s16 expx, expy;
 u16 attr;
 s16 zdepth;
 u8 red;
 u8 green;
 u8 blue;
 u8 alpha;
 s16 startTLUT;
 s16 nTLUT;
 int *LUT;
 s16 istart;
 s16 istep;
 s16 nbitmaps;
 s16 ndisplist;
 s16 bmheight;
 s16 bmHreal;
 u8 bmfmt;
 u8 bmsiz;
 Bitmap *bitmap;
 Gfx *rsp_dl;
 Gfx *rsp_dl_next;
 s16 frac_s,
  frac_t;
};
typedef struct sprite Sprite;
void spSetAttribute (Sprite *sp, s32 attr);
void spClearAttribute (Sprite *sp, s32 attr);
void spX2Move (Sprite *sp, s32 x, s32 y);
void spScale (Sprite *sp, f32 sx, f32 sy);
void spX2SetZ (Sprite *sp, s32 z );
void spColor (Sprite *sp, u8 red, u8 green, u8 blue, u8 alpha);
Gfx *spX2Draw (Sprite *sp);
void spX2Init( Gfx **glistp );
void spX2Scissor( s32 xmin, s32 xmax, s32 ymin, s32 ymax );
void spX2Finish( Gfx **glistp );
extern long long int rspbootTextStart[], rspbootTextEnd[];
extern long long int gspFast3DTextStart[], gspFast3DTextEnd[];
extern long long int gspFast3DDataStart[], gspFast3DDataEnd[];
extern long long int gspFast3D_dramTextStart[], gspFast3D_dramTextEnd[];
extern long long int gspFast3D_dramDataStart[], gspFast3D_dramDataEnd[];
extern long long int gspFast3D_fifoTextStart[], gspFast3D_fifoTextEnd[];
extern long long int gspFast3D_fifoDataStart[], gspFast3D_fifoDataEnd[];
extern long long int gspF3DNoNTextStart[], gspF3DNoNTextEnd[];
extern long long int gspF3DNoNDataStart[], gspF3DNoNDataEnd[];
extern long long int gspF3DNoN_dramTextStart[];
extern long long int gspF3DNoN_dramTextEnd[];
extern long long int gspF3DNoN_dramDataStart[];
extern long long int gspF3DNoN_dramDataEnd[];
extern long long int gspF3DNoN_fifoTextStart[];
extern long long int gspF3DNoN_fifoTextEnd[];
extern long long int gspF3DNoN_fifoDataStart[];
extern long long int gspF3DNoN_fifoDataEnd[];
extern long long int gspLine3DTextStart[], gspLine3DTextEnd[];
extern long long int gspLine3DDataStart[], gspLine3DDataEnd[];
extern long long int gspLine3D_dramTextStart[], gspLine3D_dramTextEnd[];
extern long long int gspLine3D_dramDataStart[], gspLine3D_dramDataEnd[];
extern long long int gspLine3D_fifoTextStart[], gspLine3D_fifoTextEnd[];
extern long long int gspLine3D_fifoDataStart[], gspLine3D_fifoDataEnd[];
extern long long int gspSprite2DTextStart[], gspSprite2DTextEnd[];
extern long long int gspSprite2DDataStart[], gspSprite2DDataEnd[];
extern long long int gspSprite2D_dramTextStart[], gspSprite2D_dramTextEnd[];
extern long long int gspSprite2D_dramDataStart[], gspSprite2D_dramDataEnd[];
extern long long int gspSprite2D_fifoTextStart[], gspSprite2D_fifoTextEnd[];
extern long long int gspSprite2D_fifoDataStart[], gspSprite2D_fifoDataEnd[];
extern long long int aspMainTextStart[], aspMainTextEnd[];
extern long long int aspMainDataStart[], aspMainDataEnd[];
extern long long int gspF3DEX_fifoTextStart[], gspF3DEX_fifoTextEnd[];
extern long long int gspF3DEX_fifoDataStart[], gspF3DEX_fifoDataEnd[];
extern long long int gspF3DEX_NoN_fifoTextStart[], gspF3DEX_NoN_fifoTextEnd[];
extern long long int gspF3DEX_NoN_fifoDataStart[], gspF3DEX_NoN_fifoDataEnd[];
extern long long int gspF3DLX_fifoTextStart[], gspF3DLX_fifoTextEnd[];
extern long long int gspF3DLX_fifoDataStart[], gspF3DLX_fifoDataEnd[];
extern long long int gspF3DLX_NoN_fifoTextStart[], gspF3DLX_NoN_fifoTextEnd[];
extern long long int gspF3DLX_NoN_fifoDataStart[], gspF3DLX_NoN_fifoDataEnd[];
extern long long int gspF3DLX_Rej_fifoTextStart[], gspF3DLX_Rej_fifoTextEnd[];
extern long long int gspF3DLX_Rej_fifoDataStart[], gspF3DLX_Rej_fifoDataEnd[];
extern long long int gspF3DLP_Rej_fifoTextStart[], gspF3DLP_Rej_fifoTextEnd[];
extern long long int gspF3DLP_Rej_fifoDataStart[], gspF3DLP_Rej_fifoDataEnd[];
extern long long int gspL3DEX_fifoTextStart[], gspL3DEX_fifoTextEnd[];
extern long long int gspL3DEX_fifoDataStart[], gspL3DEX_fifoDataEnd[];
extern long long int gspF3DEX2_fifoTextStart[], gspF3DEX2_fifoTextEnd[];
extern long long int gspF3DEX2_fifoDataStart[], gspF3DEX2_fifoDataEnd[];
extern long long int gspF3DEX2_NoN_fifoTextStart[],gspF3DEX2_NoN_fifoTextEnd[];
extern long long int gspF3DEX2_NoN_fifoDataStart[],gspF3DEX2_NoN_fifoDataEnd[];
extern long long int gspF3DEX2_Rej_fifoTextStart[],gspF3DEX2_Rej_fifoTextEnd[];
extern long long int gspF3DEX2_Rej_fifoDataStart[],gspF3DEX2_Rej_fifoDataEnd[];
extern long long int gspF3DLX2_Rej_fifoTextStart[],gspF3DLX2_Rej_fifoTextEnd[];
extern long long int gspF3DLX2_Rej_fifoDataStart[],gspF3DLX2_Rej_fifoDataEnd[];
extern long long int gspL3DEX2_fifoTextStart[], gspL3DEX2_fifoTextEnd[];
extern long long int gspL3DEX2_fifoDataStart[], gspL3DEX2_fifoDataEnd[];
extern long long int gspF3DEX2_xbusTextStart[], gspF3DEX2_xbusTextEnd[];
extern long long int gspF3DEX2_xbusDataStart[], gspF3DEX2_xbusDataEnd[];
extern long long int gspF3DEX2_NoN_xbusTextStart[],gspF3DEX2_NoN_xbusTextEnd[];
extern long long int gspF3DEX2_NoN_xbusDataStart[],gspF3DEX2_NoN_xbusDataEnd[];
extern long long int gspF3DEX2_Rej_xbusTextStart[],gspF3DEX2_Rej_xbusTextEnd[];
extern long long int gspF3DEX2_Rej_xbusDataStart[],gspF3DEX2_Rej_xbusDataEnd[];
extern long long int gspF3DLX2_Rej_xbusTextStart[],gspF3DLX2_Rej_xbusTextEnd[];
extern long long int gspF3DLX2_Rej_xbusDataStart[],gspF3DLX2_Rej_xbusDataEnd[];
extern long long int gspL3DEX2_xbusTextStart[], gspL3DEX2_xbusTextEnd[];
extern long long int gspL3DEX2_xbusDataStart[], gspL3DEX2_xbusDataEnd[];
typedef void (*OSErrorHandler)(s16, s16, ...);
OSErrorHandler osSetErrorHandler(OSErrorHandler);
typedef struct {
    u32 magic;
    u32 len;
    u32 *base;
    s32 startCount;
    s32 writeOffset;
} OSLog;
typedef struct {
    u32 magic;
    u32 timeStamp;
    u16 argCount;
    u16 eventID;
} OSLogItem;
typedef struct {
    u32 magic;
    u32 version;
} OSLogFileHdr;
void osCreateLog(OSLog *log, u32 *base, s32 len);
void osLogEvent(OSLog *log, s16 code, s16 numArgs, ...);
void osFlushLog(OSLog *log);
u32 osLogFloat(f32);
extern void osDelay(int count);
typedef void (*StateFunc)(void);
typedef char* (*PrintCallback)(void*, const char*, u32);

/**************************************************************************
 					        CV64-specific content
 **************************************************************************/

#define MODULE_SIZE        0x74
#define MODULE_HEADER_SIZE 0x20

enum module_execution_flags {
    PAUSE      = (1 << 14),
    TOP        = (1 << 15)
};

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

extern void* module_create(void* parent, s32 ID);
extern void* module_createAndSetChild(void* parent, s32 ID);
extern void goToNextFunc(u16 current_functionInfo[], s16* functionInfo_ID);
extern void goToFunc(u16 current_functionInfo[], s16* functionInfo_ID, s32 function);
extern void module_allocEntryInList(ModuleHeader* module, s32 allocatedBlockInfo_index, u32 size, u32 ptrs_array_index);
extern void* moduleList_findFirstModuleByID(u16 ID);
extern void func_8000E860(ModuleHeader* self);

// Mostly used inside entrypoint functions
// Commas at the end of statements needed for matching
#define ENTER(self, functions_array)                                                       \
    s16 funcID;                                                                            \
    funcID = self->header.functionInfo_ID + 1;                                             \
    self->header.functionInfo_ID = funcID,                                                 \
    self->header.current_function[funcID].timer++;                                         \
    functions_array[self->header.current_function[funcID].function](self);                 \
    self->header.functionInfo_ID--;

// functionInfo* curFunc;
// void (*ptr_goToFunc)(u16[], s16*, s32) = goToFunc;
#define GO_TO_FUNC(self, functions_array, curFunc, goToFunc, function_array_ID)                            \
    goToFunc(self->header.current_function, &self->header.functionInfo_ID, function_array_ID);             \
    curFunc = &self->header.current_function[self->header.functionInfo_ID];                                \
    curFunc->timer++,                                                                                      \
    functions_array[curFunc->function](self);

// functionInfo* curFunc;
// void (*ptr_goToNextFunc)(u16[], s16*) = goToNextFunc;
#define GO_TO_NEXT_FUNC(self, functions_array, curFunc, goToNextFunc)                                      \
    goToNextFunc(self->header.current_function, &self->header.functionInfo_ID);                            \
    curFunc = &self->header.current_function[self->header.functionInfo_ID];                                \
    curFunc->timer++,                                                                                      \
    functions_array[curFunc->function](self);

typedef struct {
    s16 x, y;
} vec2s;

typedef struct {
    f32 x, y;
} vec2f;

typedef struct {
    s16 x, y, z;
} vec3s;

typedef struct {
    f32 x, y, z;
} vec3f;

typedef struct {
    s16 pitch, yaw, roll;
} angle;

typedef struct {
    u8 R;
    u8 G;
    u8 B;
    u8 A;
} Color8;

typedef union {
    u32 color_u32;
    Color8 color_u8;
} color_union;

typedef struct {
    s16 type;
    u16 flags;
    struct model_info* prev;
    struct model_info* sibling;
    struct model_info* next;
    struct model_info* parent;
    color_union primitive_color;
    color_union environment_color;
    color_union blend_color;
    color_union fog_color;
    u16 texture;
    u16 palette;
    u8 field24_0x28;
    u8 field25_0x29;
    u8 field26_0x2a;
    u8 field27_0x2b;
    u8 field28_0x2c;
    u8 field29_0x2d;
    u8 field30_0x2e;
    u8 field31_0x2f;
    u32 material_dlist;
    u32 dlist;
    u32 field34_0x38;
    s32 assets_file_ID;
    vec3f position;
    angle model_angle;
    angle field41_0x52;
    vec3f size;
    void* field45_0x64;          // map_actor_model*
    mf matrix;
} model_info;

extern void modelInfo_setPosVec3s(model_info* self, vec3s* position);
extern model_info* modelInfo_createRootNode(u32 type, void* parent);
extern model_info* modelInfo_createNextNode(u32 parent_type, void* parent);
extern void modelInfo_showModelAndItsChildren(model_info*, u16);
extern void modelInfo_hideModelAndItsChildren(model_info*, u16);

typedef struct {
    vec3s position;
    s16 actor_ID;
    u16 variable_1;
    u16 variable_2;
    u16 variable_3;
    u8 difficulty__spawn_setting_1;
    u8 spawn_setting_2;
} actor_settings;

// Generic actor struct
typedef struct {
    ModuleHeader header;
    u8 padding1[4];
    model_info* model;
    u8 field_0x28[MODULE_SIZE - 0x28];
    actor_settings* settings;
} Actor;

// Maybe put this in another header
typedef union {
    void* on_map_object_currently_stepping_triangle;       // struct_74*
    Actor* actor;
} map_object_actor_collision_union;

extern void actor_model_set_pos(Actor* actor, model_info* actor_model);
extern void actor_model_set_pos_and_angle(Actor* actor, model_info* actor_model);
extern s32 actor_checkSpawn(Actor* actor, f32 actor_pos_X, f32 actor_pos_Y, f32 actor_pos_Z);

typedef struct {
    u8 type;
    u8 variable;        // For example, footstep_sfx. If 0x80, fall death. If 0xA2, lava death
    vec3s vertices_position[3];
} collision_triangle;

typedef struct {
    u32 field_0x00;
    u32 field_0x04;
    Actor* field_0x08;
    f32 field_0x0C;
    collision_triangle* field_0x10;
    Actor* field_0x14;
    f32 player_height_with_respect_to_the_closest_floor;
} struct_8;

typedef struct {
    u32 field_0x00;
    // The current triangle from the collision model the Player is stepping
    collision_triangle* map_currently_stepping_collision_triangle;
    map_object_actor_collision_union map_object_actor;
    map_object_actor_collision_union field_0x0C;
    f32 negative_player_Y_pos;
    vec3f steepness_of_floor_under_player;
    u8 field_0x20;
    u8 field_0x21;
    u8 field_0x22;
    u8 field_0x23;
    // How close the player is to certain damage sources, like the Forest of Silence river
    f32 damage_source_closeness;
    struct_8 field_0x28;
} playerCollisionInfoFloor;

typedef union {
    collision_triangle* field_0x00;
    Actor* field_0x04;
} union_player_wall_related;

typedef struct {
    u32 field_0x00;
    collision_triangle* touching_wall_triangle;
    union_player_wall_related field_0x08;
    f32 player_wall_closeness;                      // How close the player is to the nearest wall
    f32 field_0x10;
    f32 field_0x14;
    collision_triangle* field_0x18;
    f32 field_0x1C;
    f32 field_0x20;
    f32 field_0x24;                                 // Related to falling off from an edge near a wall and a corner?
    f32 field_0x28;                                 // Related to falling off from an edge near a wall and a corner?
} playerCollisionInfoWall;

typedef struct {
    u32 field_0x00;
    collision_triangle* field_0x04;
    Actor* field_0x08;                              // Maybe "map_object_actor_collision_union"?
    f32 field_0x0C;
    u32 field_0x10;
    u32 field_0x14;
    f32 field_0x18;
} playerCollisionInfoCeiling;

extern playerCollisionInfoFloor   playerCollFloor;
extern playerCollisionInfoWall    playerCollWall;
extern playerCollisionInfoCeiling playerCollCeiling;

typedef struct {
    s16 screen_width;
    s16 screen_height;
    s16 field2_0x4;
    s16 field3_0x6;
    s16 screen_offset_X;
    s16 screen_offset_Y;
    s16 field6_0xc;
    s16 field7_0xe;
    s16 field8_0x10;
    s16 field9_0x12;
    s16 field10_0x14;
    s16 field11_0x16;
    s16 field12_0x18;
    s16 field13_0x1a;
    s16 field14_0x1c;
    s16 field15_0x1e;
} screen_params;

typedef struct {
    f32 fovy;
    f32 aspect;
    f32 near;
    f32 far;
    f32 scale;
} projection_matrix_params;

// More info: http://n64devkit.square7.ch/n64man/gu/guFrustumF.htm
typedef struct {
    f32 l;
    f32 r;
    f32 b;
    f32 t;
    f32 n;
    f32 f;
    f32 scale;
} projection_matrix_params_ORTHO;

typedef union {
    projection_matrix_params* perspective;
    projection_matrix_params_ORTHO* ortho;
} union_projection_matrix;

typedef struct {
    s16 type;
    u16 flags;
    struct camera* prev;
    struct camera* sibling;
    struct camera* next;
    struct camera* parent;
    u8 field1_0x14;
    u8 field2_0x15;
    u8 field3_0x16;
    u8 field4_0x17;
    u8 field5_0x18;
    u8 field6_0x19;
    u8 field7_0x1a;
    u8 field8_0x1b;
    u8 field9_0x1c;
    u8 field10_0x1d;
    u8 field11_0x1e;
    u8 field12_0x1f;
    u8 field13_0x20;
    u8 field14_0x21;
    u8 field15_0x22;
    u8 field16_0x23;
    u16 perspNorm;
    u8 field18_0x26;
    u8 field19_0x27;
    u8 field20_0x28;
    u8 field21_0x29;
    u8 field22_0x2a;
    u8 field23_0x2b;
    u8 field24_0x2c;
    u8 field25_0x2d;
    u8 field26_0x2e;
    u8 field27_0x2f;
    screen_params* screen_params;
    union_projection_matrix projection_matrix_params;
    u8 field30_0x38;
    u8 field31_0x39;
    u8 field32_0x3a;
    u8 field33_0x3b;
    Gfx* clip_ratio_dl;
    vec3f position;
    vec3s field36_0x4c;
    angle camera_angle;
    vec3f look_at_direction;
    u8 field39_0x64;
    u8 field40_0x65;
    u8 field41_0x66;
    u8 field42_0x67;
    mf matrix;
} camera;

typedef struct {
    camera* field_0x00;
    camera* field_0x04;
    camera* game_view;          // 3D view
    camera* effects;            // Items, shadows, and some other effects
    camera* field_0x10;         // Normal / Action / Battle / Boss view text
    camera* field_0x14;         // Background elements, like in the pause menu
    camera* field_0x18;         // Used for the scrolls?
    camera* field_0x1C;         // Used for the pause menu scroll?
    camera* HUD;                // Used for the gameplay HUD and text
} common_cameras;

extern common_cameras common_cameras_array;

// TODO: Fill this
typedef struct {
    u8 field_0x00[0x78];
} struct_48;

// TODO: Figure this out better
typedef struct {
    s16 type;
    u16 flags;
    struct struct_47* prev;
    struct struct_47* sibling;
    struct struct_47* next;
    struct struct_47* parent;
    u8 field1_0x14[28];
    void* field2_0x30;
    struct_48* field3_0x34;
    u8 field4_0x38[4];
    s32 field5_0x3c;
    u8 field6_0x40[40];
    color_union primitive_color;
    color_union environment_color;
    color_union blend_color;
    color_union fog_color;
    u8 field11_0x78[48];
} struct_47;

extern struct_47* func_80004C40(u16 type);
extern void* func_80004CE8(void* current, void* prev);      // TODO: Put this in another header

// ID: 0x006E
// TODO: Fill this
typedef struct {
    u8 field_0x[MODULE_SIZE];
} Module_006E;

// ID: 0x20A3
typedef struct {
    ModuleHeader header;
    u8 field_0x20[MODULE_SIZE - MODULE_HEADER_SIZE];
} moduleA3;

void moduleA3_entrypoint(moduleA3* self);    // 0x0F000000

// ID: 0x20A4
typedef struct {
    ModuleHeader header;
    u8 field_0x20[MODULE_SIZE - MODULE_HEADER_SIZE];
} moduleA4;

void moduleA4_entrypoint(moduleA4* self);    // 0x0F000000

// ID: 0x20A5
typedef struct {
    ModuleHeader header;
    u8 field_0x20[MODULE_SIZE - MODULE_HEADER_SIZE];
} moduleA5;

void moduleA5_entrypoint(moduleA5* self);    // 0x0F000000

// ID: 0x20B7
typedef struct {
    ModuleHeader header;
    u8 field_0x20[MODULE_SIZE - MODULE_HEADER_SIZE];
} moduleB7;

void moduleB7_entrypoint(moduleB7* self);    // 0x0F000000

typedef struct {
    u8 chunk_buffer[0x800];
    u8* ROM_address_chunk;
    u8* ROM_address_chunk_current_u8_to_load; /* Added by +1 */
    s32 file_chunk_read_limit; /* Ex. 0xA800, Substracted by -800 when "file_u8s_left_to_read" is equal to this variable */
    s32 file_u8s_left_to_read; /* Ex. 0xAFFF, Substracted by -1 */
    s32 chunk_u8s_left_to_read; /* Substracted by -1 */
    u8 field6_0x814;
    u8 field7_0x815;
    u8 field8_0x816;
    u8 field9_0x817;
    u8* ptr_u8_to_load_from_chunk_buffer;
    u8 field11_0x81c;
    u8 field12_0x81d;
    u8 field13_0x81e;
    u8 field14_0x81f;
    u8 field15_0x820;
    u8 field16_0x821;
    u8 field17_0x822;
    u8 field18_0x823;
    u8 field19_0x824;
    u8 field20_0x825;
    u8 field21_0x826;
    u8 field22_0x827;
    u8* file_ROM_start_address;
    u8* file_RAM_start_address;
    s32 file_size;
    u32 field26_0x834;
    u32 file_alignment;
    u32 field28_0x83c;
    s32 file_ID;
    s16 field30_0x844;
    s16 field31_0x846;
    u8 ROM_start_address_array;
    u8 field33_0x849;
    u8 field34_0x84a;
    u8 field35_0x84b;
    u8 RAM_address_array;
    u8 field37_0x84d;
    u8 field38_0x84e;
    u8 field39_0x84f;
    u8 size_array;
    u8 field41_0x851;
    u8 field42_0x852;
    u8 field43_0x853;
    u8 compressed_file_ID_array;
    u8 field45_0x855;
    u8 field46_0x856;
    u8 field47_0x857;
    void* field48_0x858;
} DMAChunkMgr;

// ID: 0x0004
typedef struct {
    ModuleHeader header;
    u8 field1_0x20;
    u8 field2_0x21;
    s16 field3_0x22;
    void* field4_0x24;
    void* field5_0x28;
    void* field6_0x2c;
    void* field7_0x30;
    DMAChunkMgr* DMAChunkMgr;
    void* field9_0x38;
    void* field10_0x3c;
    void* field11_0x40;
    void* field12_0x44;
    void* field13_0x48;
    void* field14_0x4c;
    void* field15_0x50;
    void* field16_0x54;
    void* field17_0x58;
    void* field18_0x5c;
    void* field19_0x60;
    void* field20_0x64;
    void* field21_0x68;
    void* field22_0x6c;
    void* field23_0x70;
} DMAMgr;

extern DMAMgr* ptr_DMAMgr;
extern void* DMAMgr_loadNisitenmaIchigoFile(DMAMgr* self, s32 file_ID, u32 dest, void* param_4);

// ID: 0x201B
typedef struct {
    ModuleHeader header;
    u8 field_0x20[20];
    u32 field_0x34[16];
} creditsMgr;

void creditsMgr_entrypoint(creditsMgr* self);              // 0x0F000000
void creditsMgr_init(creditsMgr* self);                    // 0x0F000070
void creditsMgr_loop(creditsMgr* self);                    // 0x0F00016C
void creditsMgr_exit(creditsMgr* self);                    // 0x0F0001F0

void (*creditsMgr_functions[])(creditsMgr* self) = 
{
    creditsMgr_init,
    creditsMgr_loop,
    creditsMgr_exit
};

// ID: 0x000E
typedef struct {
    ModuleHeader header;
    u8 padding1[4];
    model_info* model;
    u8 padding2[MODULE_SIZE - 0x28];
} konamiLogo;

void konamiLogo_entrypoint(konamiLogo* self);              // 0x801cfcd0
void konamiLogo_checkButtonPress(konamiLogo* self);        // 0x801cfd40
void konamiLogo_init(konamiLogo* self);                    // 0x801cfda0
void konamiLogo_fade_in(konamiLogo* self);                 // 0x801cfe7c
void konamiLogo_wait(konamiLogo* self);                    // 0x801cff08
void konamiLogo_fade_out(konamiLogo* self);                // 0x801cff7c
void konamiLogo_KCEK_fade_in(konamiLogo* self);            // 0x801cffdc
void konamiLogo_KCEK_wait(konamiLogo* self);               // 0x801d0058
void konamiLogo_KCEK_fade_out(konamiLogo* self);           // 0x801d00e0

enum konamiLogo_functions_IDs {
    INIT,
    LOGO_FADE_IN,
    WAIT,
    LOGO_FADE_OUT,
    KCEK_FADE_IN,
    KCEK_WAIT,
    KCEK_FADE_OUT,
    FUNC_8000E860
};

void (*konamiLogo_functions[])(konamiLogo* self) = 
{
    konamiLogo_init,
    konamiLogo_fade_in,
    konamiLogo_wait,
    konamiLogo_fade_out,
    konamiLogo_KCEK_fade_in,
    konamiLogo_KCEK_wait,
    konamiLogo_KCEK_fade_out,
    func_8000E860
};

// These variables need to be extern'd,
// otherwise the code will vary slightly and won't match.
extern const u32 KONAMI_LOGO_DL;
extern const u32 KCEK_LOGO_DL;

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

enum textbox_flags {
    MENU_TEXT_ID_PRINTS_ITEM        = (1 << 0),
    MENU_TEXT_ID_PRINTS_MENU_STRING = (1 << 1),
    PRINT_NUMBER                    = (1 << 4),
    ALLOC_TEXTBOX_IN_MENU_DATA_HEAP = (1 << 14),
    SLOW_TEXT_TRANSITION            = (1 << 20),
    FAST_TEXT_TRANSITION            = (1 << 21),
    UPDATE_STRING                   = (1 << 24),
    CLOSE_TEXTBOX                   = (1 << 26),
    OPEN_TEXTBOX                    = (1 << 27),
    TEXTBOX_IS_ACTIVE               = (1 << 30)
};

// TODO: Fill this
typedef struct {
    u8 field_0x00[0x1A];
} mfds_number_work;

typedef struct {
    u16 color;
    u16 max_transition_time;
} text_color_anim_data;

typedef struct {
    u8 field_0x00;
    u8 transition_time[4];
    u8 field_0x05[4];
    u8 transition_point[4];
    u8 field_0x0D[3];                           // Probably padding
    text_color_anim_data* color_anim_data[4];
    u8 max_transition_time[4];
} mfds_color_animation_state;

typedef struct {
    u32 field0_0x0;
    camera* display_camera;
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
    f32 closing_speed;
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
    u8 display_time;
    u8 field35_0x2f;
    mfds_color_animation_state* color_anim_state;
} mfds_work;

typedef struct {
    u32 flags;
    camera* display_camera;                 // The camera that displays the text
    u16* text;                              // Officially known as "str1"
    u16* item_amount_number_text;
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
    u8 menu_text_ID;                        // ID in the text pool that starts at 0x8016ceb8. Appears to be used for item names in the pause menu too?
    u8 field19_0x36;
    u8 field20_0x37;
    u8 field21_0x38;
    u8 field22_0x39;
    u8 number_of_chars;
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

extern mfds_state* textbox_create(void* parent_module, void* param_2, u32 flags);              // 0x8012cb88
extern void textbox_setDimensions(mfds_state* self, s8 height, s16 width, u8 param_4, u8 character_spacing);       // 0x8012cd14
extern void textbox_setPos(mfds_state* self, u16 text_X_pos, u16 text_Y_pos, s32 unused);      // 0x8012ccfc
extern void textbox_setMessagePtr(mfds_state* self, u16* text, s32 param_3, s16 param_4);      // 0x8012cd38
extern void textbox_8012cda4(mfds_state* self, u32 param_2, f32 closing_speed);                // 0x8012cda4
extern void textbox_printNumber(mfds_state*, u8, u32 number);
extern void* text_getMessageFromPool(u16* message_pool_base_ptr, s32 id);                      // 0x8012ce7c
extern void text_convertIntNumberToText(u32, u16*, u8, u32);
extern u16* text_findCharInString(u16* text, u16 char_to_find);
extern text_color_anim_data text_color_anim_data_table[4][8];

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

// ID: 0x2140
typedef struct {
    ModuleHeader header;
    u8 field_0x20[28];
    mfds_state* ending_textbox;
    u32 active_time;
    u8 field_0x44[48];
} endingMessageEasy;

void endingMessageEasy_entrypoint(endingMessageEasy* self);               // 0x0F000000
void endingMessageEasy_init(endingMessageEasy* self);                     // 0x0F000070
void func_0F00018C();                                                     // 0x0F00018C
void endingMessageEasy_loop(endingMessageEasy* self);                     // 0x0F000194
void endingMessageEasy_destroy(endingMessageEasy* self);                  // 0x0F0002E0

// 0x0F000350
/*
 *   You have completed
 *   the game in EASY mode.
 *   If you want to face
 *   the challenge
 *       of more stages,
 *   try NORMAL mode.
*/
u16 ending_text[120] = {
    0xA000, 0x003B, 0x0051, 0x0057, 0x0002, 0x004A, 0x0043, 0x0058,
    0x0047, 0x0002, 0x0045, 0x0051, 0x004F, 0x0052, 0x004E, 0x0047,
    0x0056, 0x0047, 0x0046, 0x0001, 0x0056, 0x004A, 0x0047, 0x0002,
    0x0049, 0x0043, 0x004F, 0x0047, 0x0002, 0x004B, 0x0050, 0x0002,
    0x0027, 0x0023, 0x0035, 0x003B, 0x0002, 0x004F, 0x0051, 0x0046,
    0x0047, 0x0010, 0x0001, 0x002B, 0x0048, 0x0002, 0x005B, 0x0051,
    0x0057, 0x0002, 0x0059, 0x0043, 0x0050, 0x0056, 0x0002, 0x0056,
    0x0051, 0x0002, 0x0048, 0x0043, 0x0045, 0x0047, 0x0002, 0x0001,
    0x0056, 0x004A, 0x0047, 0x0002, 0x0045, 0x004A, 0x0043, 0x004E,
    0x004E, 0x0047, 0x0050, 0x0049, 0x0047, 0x0002, 0x0001, 0x0002,
    0x0002, 0x0002, 0x0002, 0x0002, 0x0051, 0x0048, 0x0002, 0x004F,
    0x0051, 0x0054, 0x0047, 0x0002, 0x0055, 0x0056, 0x0043, 0x0049,
    0x0047, 0x0055, 0x000E, 0x0001, 0x0056, 0x0054, 0x005B, 0x0002,
    0x0030, 0x0031, 0x0034, 0x002F, 0x0023, 0x002E, 0x0002, 0x004F,
    0x0051, 0x0046, 0x0047, 0x0010, 0xA300, 0xFFFF
};

// 0x0F000440
void (*endingMessageEasy_functions[])(endingMessageEasy* self) = 
{
    endingMessageEasy_init,
    endingMessageEasy_loop,
    endingMessageEasy_destroy
};

extern void* endingMessage_fileBuffer;       // 0x803880A4. Buffer where the overlay file is stored.

enum HUD_flags {
    SHOW_BOSS_BAR             = 0x00000004,
    UPDATE_HUD_GOLD_AND_JEWEL = 0x00000008,
    CLOSE_CLOCK_UNUSED        = 0x00000020,
    DESTROY_HUD               = 0x00000080
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

// ID: 0x213F
typedef struct {
    ModuleHeader header;
    u8 field_0x20[MODULE_SIZE - MODULE_HEADER_SIZE];
} module13F;

void module13F_entrypoint(module13F* self);                     // 0x0F000000
void module13F_isDraculaCutsceneWatched(module13F* self);       // 0x0F000070
void module13F_isPlayerDroppingDown(module13F* self);           // 0x0F0000DC
void module13F_playSound(module13F* self);                      // 0x0F000130
void module13F_destroy(module13F* self);                        // 0x0F000174

// 0x0F0001A0
void (*module13F_functions[])(module13F* self) = 
{
    module13F_isDraculaCutsceneWatched,
    module13F_isPlayerDroppingDown,
    module13F_playSound,
    module13F_destroy
};

// TODO: Fill this
typedef struct {
    u8 field_0x[MODULE_SIZE];
} attackManager;

enum player_flags {
    RUNNING = 0x00000001,
    JOGGING = 0x00000002,
    WALKING = 0x00000004,
    CROUCHING = 0x00000008,
    PLAY_TIRED_SFX_WHILE_IDLING_WITH_LOW_HEALTH = 0x00000020,     // Unused
    OPENING_DOOR = 0x00000040,
    ACTION_PERFORMED = 0x00000080,                                // pressed C-Right over item or door
    ATTACK_IS_ACTIVE = 0x00000200,
    MELEE_ATTACK = 0x00000800,
    B_ATTACK = 0x00001000,
    SUBWEAPON_ATTACK = 0x00002000,
    AIRBORNE = 0x00004000,
    JUMP_UP = 0x00008000,
    JUMPING = 0x00010000,
    SLOW_DOWN = 0x00100000,                                      // See 0x80024158
    SLIDING = 0x00200000,
    STO = 0x00400000,                                            // Unused
    VAMP = 0x08000000,
    POISON = 0x10000000,
    TIRED = 0x20000000,
    DAMAGED_AT_LEAST_ONCE = 0x40000000,
    DEAD = 0x80000000
};

typedef struct {
    u16 flags;
    s16 field_0x02;
    s16 field_0x04;
    s16 damage;
    s16 field_0x08;
    s16 field_0x0A;
    s16 field_0x0C;
    s16 field_0x0E;
    u8 field_0x10[2];
    angle direction;
    vec3f center_point;
    vec2f size;
    model_info* attached_bone;
    struct atari_data_work* field_0x30;
    struct atari_data_work* field_0x34;
    f32 field_0x38;
    f32 field_0x3C;
    vec3f position;
    vec3f field_0x4C;
    vec3f field_0x58;
    f32 field_0x64;
    model_info* field_0x68;
    struct atari_data_work* field_0x6C;
    vec3f field_0x70;
    vec3f field_0x7C;
    f32 field_0x88;
    f32 field_0x8C;
    s16 field_0x90;
    s16 field_0x92;
    s16 field_0x94;
    s16 field_0x96;
    u8 field_0x98[4];
} atari_data_work;

typedef struct {
    u16 flags;
    s16 field_0x02;
    s16 field_0x04;
    s16 field_0x06;
    s16 field_0x08;
    s16 field_0x0A;
    u8 field_0x0C;
    u8 field_0x0D;
    s16 field_0x0E;
    vec3f field_0x10;
    atari_data_work* field_0x1C;
    atari_data_work* field_0x20;
    vec3f field_0x24;
    vec3f field_0x30;
    f32 field_0x3C;
    f32 field_0x40;
    s16 field_0x44;
    s16 field_0x46;
    u16 field_0x48;
    u16 damage_received;
    u32 field_0x4C;
    s32 field_0x50;
    s32 field_0x54;
    model_info* attached_bone;
    atari_data_work* field_0x5C[4];
    atari_data_work* field_0x6C[4];
    s32 field_0x7C;
    u8 field_0x80;
    u8 field_0x81[3];
    s32 field_0x84;
    u8 field_0x88[8];
    s16 field_0x90;
    s16 field_0x92;
    s16 field_0x94;
    s16 field_0x96;
    u8 field_0x98[4];
} atari_base_work;

extern void atari_work_table_init();
extern atari_base_work* atariBaseWork_create(model_info* attached_bone);
extern atari_data_work* atariDataWork_create(model_info* attached_bone, u16 param_2);
extern u32 atariBaseWork_attachCollider(atari_base_work* self, atari_data_work* collider, u32 param_3);

typedef struct {
    u8 flags;
    u8 field_0x01;
    u8 field_0x02;                      // Animation speed * 16. Used for calculating the new frame interpolation speed
    u8 current_animation_keyframe;
    u8 current_interpolation_frame;
    u8 frame_interpolation_speed;       // Also used for face overlay texture
    u8 number_of_limbs;                 // ASSUMPTION. Number of limbs + "frame interpolation speed" field (0x10 for Carrie)
    u8 field_0x07;                      // model_info flags?
    void* current_animation_translation_data_ptr;
    void* current_animation_rotation_data_ptr;
    s32 field_0x10;
} animation_info;

typedef struct {
    animation_info current_anim;
    animation_info previous_anim;
    // & 1 -> Anim index: 0 = Current anim, 1 = Previous anim.
    // Anything other than the less significant 3 bits --> current anim flags? See the end of animationMgr_animateFrame()
    u8 flags;
    u8 current_animation_switching_time;
    u8 animation_switch_time;
    u8 field_0x2B;
    void (*field_0x2C)(model_info*, s32);       // Usually function 0x80022120?
} animationMgr;

typedef struct {
    u32 flags;          // Player flags. See player_flags.h
    atari_base_work* atari_base;
    model_info* model;
    Module_006E* module_006E;
    animationMgr animMgr;
} playerVisualData;

typedef struct {
    s16 field0_0x0;
    u8 field1_0x2;
    u8 field2_0x3;
    u8 field3_0x4;
    u8 field4_0x5;
    u8 field5_0x6;
    u8 field6_0x7;
    f32 field7_0x8;
    f32 field8_0xc;
    f32 field9_0x10;
    f32 field10_0x14;
    f32 ledge_moving_speed_multiplier;
    f32 field12_0x1c;
    f32 max_jogging_XZ_speed;
    f32 max_running_XZ_speed;
    f32 jump_height;
    f32 jump_gravity_accel;
    f32 field17_0x30;
    f32 field18_0x34;
    vec3f field19_0x38;
    s16 damage_received;
    s16 current_health_depletion_rate_while_poisoned;
    u8 field22_0x48;
    u8 field23_0x49;
    u8 player_invincibility_time;
    u8 damage_type;                     // Type of damage received by the player from an enemy
    u8 field26_0x4c;
    u8 field27_0x4d;
    u8 field28_0x4e;
    u8 field29_0x4f;
    u8 field30_0x50;
    u8 field31_0x51;
    u8 field32_0x52;
    u8 field33_0x53;
    u8 field34_0x54;
    u8 field35_0x55;
    u8 field36_0x56;
    u8 field37_0x57;
    u8 field38_0x58;
    u8 field39_0x59;
    u8 field40_0x5a;
    u8 field41_0x5b;
    u8 field42_0x5c;
    u8 field43_0x5d;
    u8 field44_0x5e;
    u8 field45_0x5f;
    u8 field46_0x60;
    u8 field47_0x61;
    u8 field48_0x62;
    u8 field49_0x63;
    u8 field50_0x64;
    u8 field51_0x65;
    u8 field52_0x66;
    u8 field53_0x67;
    u8 field54_0x68;
    u8 field55_0x69;
    u8 field56_0x6a;
    u8 field57_0x6b;
    u8 field58_0x6c;
    u8 field59_0x6d;
    u8 field60_0x6e;
    u8 field61_0x6f;
    u8 field62_0x70;
    u8 field63_0x71;
    u8 field64_0x72;
    u8 field65_0x73;
} playerParams;

typedef union {
    vec3f player_hit_launch_velocity;
    u32 openingLightDoor;
} unk_union_playerData;

typedef struct {
    u16 field0_0x0;
    vec3s field1_0x2;
    vec3f field2_0x8;
    f32 field3_0x14;
    f32 field4_0x18;
    animation_info field5_0x1c;
    Actor* enemy_targeted_actor_ptr;
    s16 field7_0x34;
    s16 field8_0x36;
    Actor* field9_0x38;
    vec3f field10_0x3c;
    vec3f field11_0x48;
    Actor* field12_0x54;
    vec3f field13_0x58;
    u8 field14_0x64;
    u8 field15_0x65;
    u8 field16_0x66;
    u8 field17_0x67;
    vec3f field18_0x68;
} struct_7;

typedef struct {
    u8 field_0x00[4];
    playerVisualData visualData;
    playerParams* params;
    u32 additionalFlags;
    s16 field_0x4C;
    s16 field_0x4E;
    u16 idleTimer;
    s16 field_0x52;
    s16 field_0x54;
    s16 damage_anim_array_index;
    unk_union_playerData field_0x58;
    u16 field_0x64;
    u16 field_0x66;
    u8 field_0x68[12];
    vec3f speed;
    f32 field_0x80;
    f32 gravity_accel;
    attackManager* attackMgr;
    struct_7* field_0x8C;
    u8 unable_to_jump_timer;
    u8 unable_to_throw_subweapon_timer;
    u8 field_0x92;
    u8 field_0x93;
    map_object_actor_collision_union field_0x94;
    void* field_0x98;       // roomMgr* ?
    f32 water_source_closeness;
    s16 currently_stepping_coll_type_and_variable;
    u8 field_0xA2[6];
} playerData;

typedef struct {
    u8 field0_0x0;
    u8 field1_0x1;
    u8 field2_0x2;
    u8 field3_0x3;
    u32 field4_0x4;
    u8 field5_0x8;
    u8 field6_0x9;
    u8 field7_0xa;
    u8 field8_0xb;
    u8 field9_0xc;
    u8 field10_0xd;
    s16 field11_0xe;
    u8 field12_0x10;
    u8 field13_0x11;
    u8 field14_0x12;
    u8 field15_0x13;
    u8 field16_0x14;
    u8 field17_0x15;
    u8 field18_0x16;
    u8 field19_0x17;
    s16 field20_0x18;
    u8 field21_0x1a;
    u8 field22_0x1b;
    animationMgr field23_0x1c;
    s32 field24_0x4c;
    s16 field25_0x50;
    s16 field26_0x52;
    animationMgr field27_0x54;
    s32 field28_0x84;
    u8 field29_0x88;
    u8 field30_0x89;
    u8 field31_0x8a;
    u8 field32_0x8b;
    u8 field33_0x8c;
    u8 field34_0x8d;
    u8 field35_0x8e;
    u8 field36_0x8f;
    u8 field37_0x90;
    u8 field38_0x91;
    u8 field39_0x92;
    u8 field40_0x93;
    u8 field41_0x94;
    u8 field42_0x95;
    u8 field43_0x96;
    u8 field44_0x97;
    u8 field45_0x98;
    u8 field46_0x99;
    u8 field47_0x9a;
    u8 field48_0x9b;
    u8 field49_0x9c;
    u8 field50_0x9d;
    u8 field51_0x9e;
    u8 field52_0x9f;
    u8 field53_0xa0;
    u8 field54_0xa1;
    u8 field55_0xa2;
    u8 field56_0xa3;
    u8 field57_0xa4;
    u8 field58_0xa5;
    u8 field59_0xa6;
    u8 field60_0xa7;
} struct_28;

// For "axis" argument from playerIsInsideActorSpawnRadius()
enum axis_enum {
    X =   1,
    Y =   2,
    Z =   4,
    XYZ = 8
};

extern playerData* ptr_playerData;
extern u32 playerIsInsideActorSpawnRadius(model_info* player_model, model_info* actor_model, f32 actor_spawn_radius, u32 axis);
extern void Player_calcPhysics(void* player, playerCollisionInfoFloor* floorInfo, playerCollisionInfoWall* wallInfo, playerCollisionInfoCeiling* ceilingInfo);

// ID 0x0074
typedef struct {
    ModuleHeader header;
    u8 padding1[4];
    model_info* model;
    playerData* data;
    struct_28* field_0x2C;
    u8 padding2[MODULE_SIZE - 0x30];
} Carrie;

typedef struct {
    u16 is_connected;
    u16 buttons_held;
    u16 buttons_pressed;
    s16 joystick_x;
    s16 joystick_y;
    s16 joystick_angle;
    s16 joystick_held;		// TODO: Maybe search another name for this variable.
} controller_struct;

extern controller_struct controllers[4];
extern controller_struct controller_player;
extern controller_struct controller_player_previous_frame;

extern void controller_readData();

enum fade_flags {
    FADE_IN  = 0x4000,
    FADE_OUT = 0x8000
};

typedef struct {
    u16 flags;
    color_union color;
    u16 current_time;
    u16 max_time;
} fade_settings_struct;

extern void fade_setAllFlags(u16);
extern void fade_setFlag(u16);
extern void fade_removeFlag(u16);
extern void fade_setColor(u8, u8, u8);
extern void fade_setSettings(u16 flags, s16 fade_time, u8 R, u8 G, u8 B);
extern u32 fade_isFading();
extern void fade_calc();

enum gameState_ID {
    KONAMI_LOGO = 1,
    GAMEPLAY = 2,
    GAME_OVER = 3,
    STAGE_SELECT = 4,
    INTRO_CUTSCENE = 5,
    TITLE_SCREEN = 6,
    DATA_MENU = 7,
    OPTIONS_MENU = 8,
    TITLE_DEMO = 9,
    GAMENOTE_DELETE = 10,
    CREDITS = 11
};

extern void createGameState(u32 game_state);
extern void changeGameState(u32 game_state);
extern void gameState_init();

enum maps {
    MORI,
    TOU,
    TOUOKUJI,
    NAKANIWA,
    BEKKAN_1F,
    BEKKAN_2F,
    MEIRO_TEIEN,
    CHIKA_KODO,
    CHIKA_SUIRO,
    HONMARU_B1F,
    HONMARU_1F,
    HONMARU_2F,
    HONMARU_3F_MINAMI,
    HONMARU_4F_MINAMI,
    HONMARU_3F_KITA,
    HONMARU_5F,
    SHOKEI_TOU,
    MAHOU_TOU,
    KAGAKU_TOU,
    KETTOU_TOU,
    TURO_TOKEITOU,
    TENSHU,
    ENDING_DUMMY,
    TOKEITOU_NAI,
    DRACULA,
    ROSE,
    BEKKAN_BOSS,
    TOU_TURO,
    ENDING,
    TEST_GRID
};

#define HEAP_MULTIPURPOSE_SIZE 0xD0000
#define HEAP_MENU_DATA_SIZE    0x40000

enum heap_kind {
    HEAP_KIND_MULTIPURPOSE,     // Most dynamically-allocated data is allocated on this heap
    HEAP_KIND_1,
    HEAP_KIND_MENU_DATA,        // Assets used on some menus (usually file 0x60 and 0x61). Some menu-related structs are also allocated on this heap
    HEAP_KIND_3,
    HEAP_KIND_4,
    HEAP_KIND_5,
    HEAP_KIND_6,
    HEAP_KIND_MAP_DATA          // Current map's data (assets file, collision data, etc)
};

// There's also 0x4000, see function 0x80001008
enum heap_block_flags_enum {
    FREE   = 0x0000,
    ACTIVE = 0x8000
};

enum heap_flags_enum {
    INACTIVE                = 0x0000,
    WRITE_BACK_CACHE_TO_RAM = 0x4000,       // Assumption based on function 0x80000C94
    HEAP_IS_ACTIVE          = 0x8000
};

typedef struct {
    u16 flags;
    u8 field_0x02[2];
    u32 size;                   // Size of the block
    void* field_0x08;           // Display List / GFX related?
    void* data_start;
    void* data_end;             // End of the allocated data, NOT end of the block
    u8 field_0x14[4];           // Related to file decompression?
} heapBlockHeader;

typedef struct {
    u16 flags;
    u8 field_0x02[2];
    u32 size;                       // Size of the heap
    heapBlockHeader* heap_start;    // Start of the block array
} heapInfo;

extern heapInfo heaps[8];
extern void* HEAP_MULTIPURPOSE_START;
extern void* HEAP_MENU_DATA_START;

extern void heap_init(s32 kind, heapBlockHeader* first_block_ptr, s32 heap_size, u16 additional_flags);
extern void heap_free(s32 kind);
extern void heap_writebackDCache();
extern void initHeaps();
extern void* heap_alloc(s32 kind, u32 data_size);   // CV64's malloc()
extern void* heap_allocWithAlignment(s32 kind, u32 data_size, u32 alignment);
extern s32 heapBlock_updateBlockMaxSize(void* data, u32 data_size);
extern void heapBlock_free(void* ptr);              // CV64's free()

#define MODULE_ID(FLAG, ID) ((FLAG << 8) | ID)

// The flags that are part of the "ID" field of ModuleHeader, NOT field 0x02
enum module_flags {
    NO_FLAG      = 0x00,
    STAGE_OBJECT = 0x10,        // Non-enemy map actors. Sometimes 0x18 is used as well.
    MAP_OVERLAY  = 0x20,
    DESTROY      = 0x80
};

enum module_raw_ID {
    ID_GAMESTATE_MGR = 0x001,
    MODULE_002 = 0x002,
    MODULE_003 = 0x003,
    ID_DMA_MGR = 0x004,
    ID_GAMEPLAY_MGR = 0x005,
    ID_MAP_OBJECT_PARENT = 0x006,
    ID_PLAYER_CONTROLLER = 0x007,
    ID_MAP_SETUP = 0x008,
    ID_ENEMY_PARENT = 0x009,
    MODULE_00A = 0x00A,
    MODULE_00B = 0x00B,
    MODULE_00C = 0x00C,
    MODULE_00D = 0x00D,
    MODULE_00E = 0x00E,
    MODULE_00F = 0x00F,
    MODULE_010 = 0x010,
    MODULE_011 = 0x011,
    MODULE_012 = 0x012,
    MODULE_013 = 0x013,
    MODULE_014 = 0x014,
    MODULE_015 = 0x015,
    MODULE_016 = 0x016,
    MODULE_017 = 0x017,
    MODULE_018 = 0x018,
    MODULE_019 = 0x019,
    MODULE_01A = 0x01A,
    MODULE_01B = 0x01B,
    MODULE_01C = 0x01C,
    MODULE_01D = 0x01D,
    MODULE_01E = 0x01E,
    MODULE_01F = 0x01F,
    MODULE_020 = 0x020,
    MODULE_021 = 0x021,
    MODULE_022 = 0x022,
    MODULE_023 = 0x023,
    MODULE_024 = 0x024,
    MODULE_025 = 0x025,
    MODULE_026 = 0x026,
    MODULE_027 = 0x027,
    MODULE_028 = 0x028,
    MODULE_029 = 0x029,
    ID_CUTSCENE_MGR = 0x02A,
    MODULE_02B = 0x02B,
    MODULE_02C = 0x02C,
    MODULE_02D = 0x02D,
    MODULE_02E = 0x02E,
    MODULE_02F = 0x02F,
    MODULE_030 = 0x030,
    MODULE_031 = 0x031,
    MODULE_032 = 0x032,
    MODULE_033 = 0x033,
    MODULE_034 = 0x034,
    MODULE_035 = 0x035,
    MODULE_036 = 0x036,
    MODULE_037 = 0x037,
    MODULE_038 = 0x038,
    MODULE_039 = 0x039,
    MODULE_03A = 0x03A,
    MODULE_03B = 0x03B,
    MODULE_03C = 0x03C,
    MODULE_03D = 0x03D,
    MODULE_03E = 0x03E,
    MODULE_03F = 0x03F,
    MODULE_040 = 0x040,
    MODULE_041 = 0x041,
    MODULE_042 = 0x042,
    MODULE_043 = 0x043,
    MODULE_044 = 0x044,
    MODULE_045 = 0x045,
    MODULE_046 = 0x046,
    MODULE_047 = 0x047,
    MODULE_048 = 0x048,
    MODULE_049 = 0x049,
    MODULE_04A = 0x04A,
    MODULE_04B = 0x04B,
    MODULE_04C = 0x04C,
    MODULE_04D = 0x04D,
    MODULE_04E = 0x04E,
    MODULE_04F = 0x04F,
    MODULE_050 = 0x050,
    MODULE_051 = 0x051,
    MODULE_052 = 0x052,
    MODULE_053 = 0x053,
    MODULE_054 = 0x054,
    MODULE_055 = 0x055,
    MODULE_056 = 0x056,
    MODULE_057 = 0x057,
    MODULE_058 = 0x058,
    MODULE_059 = 0x059,
    MODULE_05A = 0x05A,
    MODULE_05B = 0x05B,
    MODULE_05C = 0x05C,
    MODULE_05D = 0x05D,
    MODULE_05E = 0x05E,
    MODULE_05F = 0x05F,
    MODULE_060 = 0x060,
    MODULE_061 = 0x061,
    MODULE_062 = 0x062,
    MODULE_063 = 0x063,
    MODULE_064 = 0x064,
    MODULE_065 = 0x065,
    MODULE_066 = 0x066,
    MODULE_067 = 0x067,
    ID_CUTSCENE_CREDITS = 0x068,
    MODULE_069 = 0x069,
    MODULE_06A = 0x06A,
    MODULE_06B = 0x06B,
    MODULE_06C = 0x06C,
    MODULE_06D = 0x06D,
    MODULE_06E = 0x06E,
    MODULE_06F = 0x06F,
    ID_REINHARDT = 0x070,
    ID_REINHARDT_ALT = 0x071,
    ID_REINHARDT_ATTACK_MGR = 0x072,
    ID_REINHARDT_DYNAMIC_SCARF = 0x073,
    ID_CARRIE = 0x074,
    ID_CARRIE_ALT = 0x075,
    ID_CARRIE_ATTACK_MGR = 0x076,
    ID_CARRIE_DYNAMIC_SKIRT = 0x077,
    ID_CARRIE_DYNAMIC_RIGHT_STRIP = 0x078,
    ID_CARRIE_DYNAMIC_LEFT_STRIP = 0x079,
    MODULE_07A = 0x07A,
    MODULE_07B = 0x07B,
    MODULE_07C = 0x07C,
    MODULE_07D = 0x07D,
    MODULE_07E = 0x07E,
    MODULE_07F = 0x07F,
    MODULE_080 = 0x080,
    MODULE_081 = 0x081,
    MODULE_082 = 0x082,
    MODULE_083 = 0x083,
    MODULE_084 = 0x084,
    MODULE_085 = 0x085,
    MODULE_086 = 0x086,
    MODULE_087 = 0x087,
    MODULE_088 = 0x088,
    MODULE_089 = 0x089,
    MODULE_08A = 0x08A,
    MODULE_08B = 0x08B,
    MODULE_08C = 0x08C,
    MODULE_08D = 0x08D,
    MODULE_08E = 0x08E,
    MODULE_08F = 0x08F,
    ID_GARDENER = 0x090,
    MODULE_091 = 0x091,
    MODULE_092 = 0x092,
    MODULE_093 = 0x093,
    MODULE_094 = 0x094,
    MODULE_095 = 0x095,
    MODULE_096 = 0x096,
    MODULE_097 = 0x097,
    MODULE_098 = 0x098,
    MODULE_099 = 0x099,
    MODULE_09A = 0x09A,
    MODULE_09B = 0x09B,
    MODULE_09C = 0x09C,
    MODULE_09D = 0x09D,
    MODULE_09E = 0x09E,
    MODULE_09F = 0x09F,
    MODULE_0A0 = 0x0A0,
    MODULE_0A1 = 0x0A1,
    MODULE_0A2 = 0x0A2,
    MODULE_0A3 = 0x0A3,
    MODULE_0A4 = 0x0A4,
    MODULE_0A5 = 0x0A5,
    MODULE_0A6 = 0x0A6,
    MODULE_0A7 = 0x0A7,
    MODULE_0A8 = 0x0A8,
    MODULE_0A9 = 0x0A9,
    MODULE_0AA = 0x0AA,
    MODULE_0AB = 0x0AB,
    MODULE_0AC = 0x0AC,
    MODULE_0AD = 0x0AD,
    MODULE_0AE = 0x0AE,
    MODULE_0AF = 0x0AF,
    MODULE_0B0 = 0x0B0,
    MODULE_0B1 = 0x0B1,
    MODULE_0B2 = 0x0B2,
    MODULE_0B3 = 0x0B3,
    MODULE_0B4 = 0x0B4,
    MODULE_0B5 = 0x0B5,
    MODULE_0B6 = 0x0B6,
    MODULE_0B7 = 0x0B7,
    MODULE_0B8 = 0x0B8,
    MODULE_0B9 = 0x0B9,
    MODULE_0BA = 0x0BA,
    MODULE_0BB = 0x0BB,
    MODULE_0BC = 0x0BC,
    MODULE_0BD = 0x0BD,
    MODULE_0BE = 0x0BE,
    MODULE_0BF = 0x0BF,
    MODULE_0C0 = 0x0C0,
    MODULE_0C1 = 0x0C1,
    MODULE_0C2 = 0x0C2,
    MODULE_0C3 = 0x0C3,
    MODULE_0C4 = 0x0C4,
    MODULE_0C5 = 0x0C5,
    MODULE_0C6 = 0x0C6,
    MODULE_0C7 = 0x0C7,
    MODULE_0C8 = 0x0C8,
    MODULE_0C9 = 0x0C9,
    MODULE_0CA = 0x0CA,
    MODULE_0CB = 0x0CB,
    MODULE_0CC = 0x0CC,
    MODULE_0CD = 0x0CD,
    MODULE_0CE = 0x0CE,
    MODULE_0CF = 0x0CF,
    MODULE_0D0 = 0x0D0,
    MODULE_0D1 = 0x0D1,
    MODULE_0D2 = 0x0D2,
    MODULE_0D3 = 0x0D3,
    MODULE_0D4 = 0x0D4,
    MODULE_0D5 = 0x0D5,
    MODULE_0D6 = 0x0D6,
    MODULE_0D7 = 0x0D7,
    MODULE_0D8 = 0x0D8,
    MODULE_0D9 = 0x0D9,
    MODULE_0DA = 0x0DA,
    MODULE_0DB = 0x0DB,
    MODULE_0DC = 0x0DC,
    MODULE_0DD = 0x0DD,
    MODULE_0DE = 0x0DE,
    MODULE_0DF = 0x0DF,
    MODULE_0E0 = 0x0E0,
    MODULE_0E1 = 0x0E1,
    MODULE_0E2 = 0x0E2,
    MODULE_0E3 = 0x0E3,
    MODULE_0E4 = 0x0E4,
    MODULE_0E5 = 0x0E5,
    MODULE_0E6 = 0x0E6,
    MODULE_0E7 = 0x0E7,
    MODULE_0E8 = 0x0E8,
    MODULE_0E9 = 0x0E9,
    MODULE_0EA = 0x0EA,
    MODULE_0EB = 0x0EB,
    MODULE_0EC = 0x0EC,
    MODULE_0ED = 0x0ED,
    MODULE_0EE = 0x0EE,
    MODULE_0EF = 0x0EF,
    MODULE_0F0 = 0x0F0,
    MODULE_0F1 = 0x0F1,
    MODULE_0F2 = 0x0F2,
    MODULE_0F3 = 0x0F3,
    MODULE_0F4 = 0x0F4,
    MODULE_0F5 = 0x0F5,
    MODULE_0F6 = 0x0F6,
    MODULE_0F7 = 0x0F7,
    MODULE_0F8 = 0x0F8,
    MODULE_0F9 = 0x0F9,
    MODULE_0FA = 0x0FA,
    MODULE_0FB = 0x0FB,
    MODULE_0FC = 0x0FC,
    MODULE_0FD = 0x0FD,
    MODULE_0FE = 0x0FE,
    MODULE_0FF = 0x0FF,
    MODULE_100 = 0x100,
    MODULE_101 = 0x101,
    MODULE_102 = 0x102,
    MODULE_103 = 0x103,
    MODULE_104 = 0x104,
    MODULE_105 = 0x105,
    MODULE_106 = 0x106,
    MODULE_107 = 0x107,
    MODULE_108 = 0x108,
    MODULE_109 = 0x109,
    MODULE_10A = 0x10A,
    MODULE_10B = 0x10B,
    MODULE_10C = 0x10C,
    MODULE_10D = 0x10D,
    MODULE_10E = 0x10E,
    MODULE_10F = 0x10F,
    MODULE_110 = 0x110,
    MODULE_111 = 0x111,
    MODULE_112 = 0x112,
    MODULE_113 = 0x113,
    MODULE_114 = 0x114,
    MODULE_115 = 0x115,
    MODULE_116 = 0x116,
    MODULE_117 = 0x117,
    MODULE_118 = 0x118,
    MODULE_119 = 0x119,
    MODULE_11A = 0x11A,
    MODULE_11B = 0x11B,
    MODULE_11C = 0x11C,
    MODULE_11D = 0x11D,
    MODULE_11E = 0x11E,
    MODULE_11F = 0x11F,
    MODULE_120 = 0x120,
    MODULE_121 = 0x121,
    MODULE_122 = 0x122,
    MODULE_123 = 0x123,
    MODULE_124 = 0x124,
    MODULE_125 = 0x125,
    ID_GAMEPLAY_MENU_MGR = 0x126,
    MODULE_127 = 0x127,
    MODULE_128 = 0x128,
    MODULE_129 = 0x129,
    MODULE_12A = 0x12A,
    MODULE_12B = 0x12B,
    MODULE_12C = 0x12C,
    MODULE_12D = 0x12D,
    MODULE_12E = 0x12E,
    MODULE_12F = 0x12F,
    MODULE_130 = 0x130,
    MODULE_131 = 0x131,
    MODULE_132 = 0x132,
    MODULE_133 = 0x133,
    MODULE_134 = 0x134,
    MODULE_135 = 0x135,
    MODULE_136 = 0x136,
    MODULE_137 = 0x137,
    MODULE_138 = 0x138,
    MODULE_139 = 0x139,
    MODULE_13A = 0x13A,
    MODULE_13B = 0x13B,
    MODULE_13C = 0x13C,
    MODULE_13D = 0x13D,
    MODULE_13E = 0x13E,
    MODULE_13F = 0x13F,
    MODULE_140 = 0x140,
    ID_STAGE_SELECT = 0x141,
    MODULE_142 = 0x142,
    MODULE_143 = 0x143,
    MODULE_144 = 0x144,
    MODULE_145 = 0x145,
    MODULE_146 = 0x146,
    MODULE_147 = 0x147,
    MODULE_148 = 0x148,
    MODULE_149 = 0x149,
    MODULE_14A = 0x14A,
    MODULE_14B = 0x14B,
    MODULE_14C = 0x14C,
    MODULE_14D = 0x14D,
    MODULE_14E = 0x14E,
    MODULE_14F = 0x14F,
    MODULE_150 = 0x150,
    MODULE_151 = 0x151,
    MODULE_152 = 0x152,
    MODULE_153 = 0x153,
    MODULE_154 = 0x154,
    MODULE_155 = 0x155,
    MODULE_156 = 0x156,
    MODULE_157 = 0x157,
    MODULE_158 = 0x158,
    MODULE_159 = 0x159,
    MODULE_15A = 0x15A,
    MODULE_15B = 0x15B,
    MODULE_15C = 0x15C,
    MODULE_15D = 0x15D,
    MODULE_15E = 0x15E,
    MODULE_15F = 0x15F,
    MODULE_160 = 0x160,
    MODULE_161 = 0x161,
    MODULE_162 = 0x162,
    MODULE_163 = 0x163,
    MODULE_164 = 0x164,
    MODULE_165 = 0x165,
    MODULE_166 = 0x166,
    MODULE_167 = 0x167,
    MODULE_168 = 0x168,
    MODULE_169 = 0x169,
    MODULE_16A = 0x16A,
    MODULE_16B = 0x16B,
    MODULE_16C = 0x16C,
    MODULE_16D = 0x16D,
    MODULE_16E = 0x16E,
    MODULE_16F = 0x16F,
    MODULE_170 = 0x170,
    MODULE_171 = 0x171,
    MODULE_172 = 0x172,
    MODULE_173 = 0x173,
    MODULE_174 = 0x174,
    MODULE_175 = 0x175,
    MODULE_176 = 0x176,
    MODULE_177 = 0x177,
    MODULE_178 = 0x178,
    MODULE_179 = 0x179,
    MODULE_17A = 0x17A,
    MODULE_17B = 0x17B,
    MODULE_17C = 0x17C,
    MODULE_17D = 0x17D,
    MODULE_17E = 0x17E,
    MODULE_17F = 0x17F,
    MODULE_180 = 0x180,
    MODULE_181 = 0x181,
    MODULE_182 = 0x182,
    MODULE_183 = 0x183,
    MODULE_184 = 0x184,
    MODULE_185 = 0x185,
    MODULE_186 = 0x186,
    MODULE_187 = 0x187,
    MODULE_188 = 0x188,
    MODULE_189 = 0x189,
    MODULE_18A = 0x18A,
    MODULE_18B = 0x18B,
    MODULE_18C = 0x18C,
    MODULE_18D = 0x18D,
    MODULE_18E = 0x18E,
    MODULE_18F = 0x18F,
    MODULE_190 = 0x190,
    MODULE_191 = 0x191,
    MODULE_192 = 0x192,
    MODULE_193 = 0x193,
    MODULE_194 = 0x194,
    MODULE_195 = 0x195,
    MODULE_196 = 0x196,
    MODULE_197 = 0x197,
    MODULE_198 = 0x198,
    MODULE_199 = 0x199,
    MODULE_19A = 0x19A,
    MODULE_19B = 0x19B,
    MODULE_19C = 0x19C,
    MODULE_19D = 0x19D,
    MODULE_19E = 0x19E,
    MODULE_19F = 0x19F,
    MODULE_1A0 = 0x1A0,
    MODULE_1A1 = 0x1A1,
    MODULE_1A2 = 0x1A2,
    MODULE_1A3 = 0x1A3,
    MODULE_1A4 = 0x1A4,
    MODULE_1A5 = 0x1A5,
    MODULE_1A6 = 0x1A6,
    MODULE_1A7 = 0x1A7,
    MODULE_1A8 = 0x1A8,
    MODULE_1A9 = 0x1A9,
    MODULE_1AA = 0x1AA,
    MODULE_1AB = 0x1AB,
    MODULE_1AC = 0x1AC,
    MODULE_1AD = 0x1AD,
    MODULE_1AE = 0x1AE,
    MODULE_1AF = 0x1AF,
    MODULE_1B0 = 0x1B0,
    MODULE_1B1 = 0x1B1,
    MODULE_1B2 = 0x1B2,
    MODULE_1B3 = 0x1B3,
    MODULE_1B4 = 0x1B4,
    MODULE_1B5 = 0x1B5,
    MODULE_1B6 = 0x1B6,
    MODULE_1B7 = 0x1B7,
    MODULE_1B8 = 0x1B8,
    MODULE_1B9 = 0x1B9,
    MODULE_1BA = 0x1BA,
    MODULE_1BB = 0x1BB,
    MODULE_1BC = 0x1BC,
    MODULE_1BD = 0x1BD,
    MODULE_1BE = 0x1BE,
    MODULE_1BF = 0x1BF,
    MODULE_1C0 = 0x1C0,
    MODULE_1C1 = 0x1C1,
    MODULE_1C2 = 0x1C2,
    MODULE_1C3 = 0x1C3,
    MODULE_1C4 = 0x1C4,
    MODULE_1C5 = 0x1C5,
    MODULE_1C6 = 0x1C6,
    MODULE_1C7 = 0x1C7,
    MODULE_1C8 = 0x1C8,
    MODULE_1C9 = 0x1C9,
    MODULE_1CA = 0x1CA,
    MODULE_1CB = 0x1CB,
    MODULE_1CC = 0x1CC,
    MODULE_1CD = 0x1CD,
    MODULE_1CE = 0x1CE,
    MODULE_1CF = 0x1CF,
    MODULE_1D0 = 0x1D0,
    MODULE_1D1 = 0x1D1,
    MODULE_1D2 = 0x1D2,
    MODULE_1D3 = 0x1D3,
    MODULE_1D4 = 0x1D4,
    MODULE_1D5 = 0x1D5,
    MODULE_1D6 = 0x1D6,
    MODULE_1D7 = 0x1D7,
    MODULE_1D8 = 0x1D8,
    MODULE_1D9 = 0x1D9,
    MODULE_1DA = 0x1DA,
    MODULE_1DB = 0x1DB,
    MODULE_1DC = 0x1DC,
    MODULE_1DD = 0x1DD,
    MODULE_1DE = 0x1DE,
    MODULE_1DF = 0x1DF,
    MODULE_1E0 = 0x1E0,
    MODULE_1E1 = 0x1E1,
    MODULE_1E2 = 0x1E2,
    MODULE_1E3 = 0x1E3,
    MODULE_1E4 = 0x1E4,
    MODULE_1E5 = 0x1E5,
    MODULE_1E6 = 0x1E6,
    MODULE_1E7 = 0x1E7,
    MODULE_1E8 = 0x1E8,
    MODULE_1E9 = 0x1E9,
    MODULE_1EA = 0x1EA,
    MODULE_1EB = 0x1EB,
    MODULE_1EC = 0x1EC,
    MODULE_1ED = 0x1ED,
    MODULE_1EE = 0x1EE,
    MODULE_1EF = 0x1EF,
    MODULE_1F0 = 0x1F0,
    MODULE_1F1 = 0x1F1,
    MODULE_1F2 = 0x1F2,
    MODULE_1F3 = 0x1F3,
    MODULE_1F4 = 0x1F4,
    MODULE_1F5 = 0x1F5,
    MODULE_1F6 = 0x1F6,
    MODULE_1F7 = 0x1F7,
    MODULE_1F8 = 0x1F8,
    MODULE_1F9 = 0x1F9,
    MODULE_1FA = 0x1FA,
    MODULE_1FB = 0x1FB,
    MODULE_1FC = 0x1FC,
    MODULE_1FD = 0x1FD,
    MODULE_1FE = 0x1FE,
    MODULE_1FF = 0x1FF,
    MODULE_200 = 0x200,
    MODULE_201 = 0x201,
    MODULE_202 = 0x202,
    MODULE_203 = 0x203,
    MODULE_204 = 0x204,
    MODULE_205 = 0x205,
    MODULE_206 = 0x206,
    MODULE_207 = 0x207,
    MODULE_208 = 0x208,
    MODULE_209 = 0x209,
    MODULE_20A = 0x20A,
    MODULE_20B = 0x20B,
    MODULE_20C = 0x20C,
    MODULE_20D = 0x20D,
    MODULE_20E = 0x20E,
    MODULE_20F = 0x20F,
    MODULE_210 = 0x210,
    MODULE_211 = 0x211,
    MODULE_212 = 0x212,
    MODULE_213 = 0x213,
    MODULE_214 = 0x214,
    MODULE_215 = 0x215,
    MODULE_216 = 0x216,
    MODULE_217 = 0x217,
    MODULE_218 = 0x218,
    MODULE_219 = 0x219,
    MODULE_21A = 0x21A,
    MODULE_21B = 0x21B,
    MODULE_21C = 0x21C,
    MODULE_21D = 0x21D,
    MODULE_21E = 0x21E,
    MODULE_21F = 0x21F,
    MODULE_220 = 0x220,
    MODULE_221 = 0x221,
    MODULE_222 = 0x222,
    MODULE_223 = 0x223,
    MODULE_224 = 0x224,
    MODULE_225 = 0x225,
    MODULE_226 = 0x226,
    MODULE_227 = 0x227,
    MODULE_228 = 0x228,
    MODULE_229 = 0x229,
    MODULE_22A = 0x22A
};

enum module_ID {
    ENGINE_GAMESTATE_MGR = MODULE_ID(NO_FLAG, ID_GAMESTATE_MGR),
    ENGINE_DMA_MGR = MODULE_ID(NO_FLAG, ID_DMA_MGR),
    GAMESTATE_GAMEPLAY_MGR = MODULE_ID(NO_FLAG, ID_GAMEPLAY_MGR),
    ENGINE_MAP_OBJECT_PARENT = MODULE_ID(NO_FLAG, ID_MAP_OBJECT_PARENT),
    ENGINE_PLAYER_CONTROLLER = MODULE_ID(NO_FLAG, ID_PLAYER_CONTROLLER),
    ENGINE_MAP_SETUP = MODULE_ID(NO_FLAG, ID_MAP_SETUP),
    ENGINE_ENEMY_PARENT = MODULE_ID(NO_FLAG, ID_ENEMY_PARENT),

    CUTSCENE_CUTSCENE_MGR = MODULE_ID(NO_FLAG, ID_CUTSCENE_MGR),
    CUTSCENE_CUTSCENE_CREDITS = MODULE_ID(MAP_OVERLAY, ID_CUTSCENE_CREDITS),

    PLAYER_REINHARDT = MODULE_ID(NO_FLAG, ID_REINHARDT),
    PLAYER_REINHARDT_ALT = MODULE_ID(NO_FLAG, ID_REINHARDT_ALT),
    PLAYER_REINHARDT_ATTACK_MGR = MODULE_ID(NO_FLAG, ID_REINHARDT_ATTACK_MGR),
    PLAYER_REINHARDT_DYNAMIC_SCARF = MODULE_ID(NO_FLAG, ID_REINHARDT_DYNAMIC_SCARF),
    PLAYER_CARRIE = MODULE_ID(NO_FLAG, ID_CARRIE),
    PLAYER_CARRIE_ALT = MODULE_ID(NO_FLAG, ID_CARRIE_ALT),
    PLAYER_CARRIE_ATTACK_MGR = MODULE_ID(NO_FLAG, ID_CARRIE_ATTACK_MGR),
    PLAYER_CARRIE_DYNAMIC_SKIRT = MODULE_ID(NO_FLAG, ID_CARRIE_DYNAMIC_SKIRT),
    PLAYER_CARRIE_DYNAMIC_RIGHT_STRIP = MODULE_ID(NO_FLAG, ID_CARRIE_DYNAMIC_RIGHT_STRIP),
    PLAYER_CARRIE_DYNAMIC_LEFT_STRIP = MODULE_ID(NO_FLAG, ID_CARRIE_DYNAMIC_LEFT_STRIP),

    ENEMY_GARDENER = MODULE_ID(MAP_OVERLAY, ID_GARDENER),

    MENU_GAMEPLAY_MENU_MGR = MODULE_ID(NO_FLAG, ID_GAMEPLAY_MENU_MGR),
    MENU_STAGE_SELECT = MODULE_ID(NO_FLAG, ID_STAGE_SELECT)
};

enum saveFile_flags {
    GAME_WAS_SAVED_MID_PLAY       = (1 << 0),
    EASY                          = (1 << 4),
    NORMAL                        = (1 << 5),
    HARD                          = (1 << 6),
    HARD_MODE_ENABLED             = (1 << 8),
    CAN_USE_ALT_COSTUME_REINDHART = (1 << 9),
    CAN_USE_ALT_COSTUME_CARRIE    = (1 << 10),
    GOOD_ENDING_REINDHART         = (1 << 17),
    GOOD_ENDING_CARRIE            = (1 << 18),
    BAD_ENDING_REINDHART          = (1 << 19),
    BAD_ENDING_CARRIE             = (1 << 20),
    COSTUME_IS_BEING_USED         = (1 << 30),
    CAN_EXPLODE_ON_JUMPING        = (1 << 31)
};

typedef struct {
    u32 event_flags[16];
    u32 flags;
    u16 week;
    u16 day;
    u16 hour;
    u16 minute;
    u16 seconds;
    u16 milliseconds;                           // Assumption.
    u32 gameplay_framecount;                    // Updates at 60fps
    s16 button_config;
    s16 sound_mode;
    u16 character;
    u16 life;
    u16 field13_0x5c;                           // Maybe related to the scrapped Magic meter?
    u16 subweapon;
    u32 money;
    u8 inventory_items_amount[42];
    u8 field22_0x8e;
    u8 field23_0x8f;
    u8 field24_0x90;
    u8 field25_0x91;
    u8 field26_0x92;
    u8 field27_0x93;
    u8 field28_0x94;
    u8 field29_0x95;
    u8 field30_0x96;
    u8 field31_0x97;
    u8 field32_0x98;
    u8 field33_0x99;
    u8 field34_0x9a;
    u8 field35_0x9b;
    u8 field36_0x9c;
    u8 field37_0x9d;
    u8 field38_0x9e;
    u8 field39_0x9f;
    u8 field40_0xa0;
    u8 field41_0xa1;
    u8 field42_0xa2;
    u8 field43_0xa3;
    u32 player_flags;
    u16 health_depletion_rate_while_poisoned;
    u16 current_hour_VAMP;                      // If greater than 24, you turn into vampire
    s16 map_ID;
    s16 map_entrance_ID;
    u8 save_crystal_number;
    u8 field50_0xb1;
    u8 field51_0xb2;
    u8 field52_0xb3;
    u32 time_saved_counter;
    u32 death_counter;
    s32 field55_0xbc;
    s32 field59_0xc0;
    s32 field63_0xc4;
    s16 field67_0xc8;
    s16 field69_0xca;
    s32 field71_0xcc;
    s32 field75_0xd0;
    s16 field77_0xd2;
    s16 field79_0xd4;
    s32 field83_0xd8;
    u32 money_spent_on_Renon;
} SaveStruct;

typedef struct {
    SaveStruct main;
    SaveStruct beginning_of_stage;               // Used when pressing the "Restart Stage" option on Game Over
    u32 first_checksum;
    u32 second_checksum;
    u8 field_0x1C8[56];
} SaveFileSlot;

#define SAVE_STRUCT_SIZE      sizeof(SaveStruct)
#define SAVE_FILE_SLOT_SIZE   sizeof(SaveFileSlot)

extern u8 play_sound(u16 sound_ID);
extern u8 play_sound_in_position(s16, vec3f*);

#define NISITENMA_ICHIGO_FILES_COUNT_MAX 255

typedef struct {
    u8 unk1[0x4010];
    color_union background_color;
    u8 unk2[0x2B0];
    controller_struct controllers[4];
    u8 file_load_array_ID;
    u8 field_80387db5[3];
    void* Nisitenma_Ichigo_loaded_files_ptr[NISITENMA_ICHIGO_FILES_COUNT_MAX];
    u8 field_803881b4[4];
    void* file_load_array[8];              // fileLoad*
    u8 unk3[0x1A0C];
    SaveStruct SaveStruct_gameplay;        // 80389be4
    u8 unk4[0x28];
    s16 current_PowerUp_level;             // 80389cec
    u8 unk5[0x18C];
    s16 field25313_0x63c0;		           // 80389e78
    u8 field25315_0x63c2;
    u8 field25316_0x63c3;
    u8 field25317_0x63c4;
    u8 field25318_0x63c5;
    u8 field25319_0x63c6;
    u8 field25320_0x63c7;
    u8 field25321_0x63c8;
    u8 field25322_0x63c9;
    u8 field25323_0x63ca;
    u8 field25324_0x63cb;
    u8 field25325_0x63cc;
    u8 field25326_0x63cd;
    u8 field25327_0x63ce;
    u8 field25328_0x63cf;
    u8 field25329_0x63d0;
    u8 field25330_0x63d1;
    u8 field25331_0x63d2;
    u8 field25332_0x63d3;
    u8 field25333_0x63d4;
    u8 field25334_0x63d5;
    u8 field25335_0x63d6;
    u8 field25336_0x63d7;
    u8 field25337_0x63d8;
    u8 field25338_0x63d9;
    u8 field25339_0x63da;
    u8 field25340_0x63db;
    u8 field25341_0x63dc;
    u8 field25342_0x63dd;
    u8 field25343_0x63de;
    u8 field25344_0x63df;
    u8 field25345_0x63e0;
    u8 field25346_0x63e1;
    u8 field25347_0x63e2;
    u8 field25348_0x63e3;
    u8 field25349_0x63e4;
    u8 field25350_0x63e5;
    u8 field25351_0x63e6;
    u8 field25352_0x63e7;
    u8 field25353_0x63e8;
    u8 field25354_0x63e9;
    u8 field25355_0x63ea;
    u8 field25356_0x63eb;
    u8 field25357_0x63ec;
    u8 field25358_0x63ed;
    u8 field25359_0x63ee;
    u8 field25360_0x63ef;
    u8 field25361_0x63f0;
    u8 field25362_0x63f1;
    u8 field25363_0x63f2;
    u8 field25364_0x63f3;
    u8 field25365_0x63f4;
    u8 field25366_0x63f5;
    u8 field25367_0x63f6;
    u8 field25368_0x63f7;
    u8 field25369_0x63f8;
    u8 field25370_0x63f9;
    u8 field25371_0x63fa;
    u8 field25372_0x63fb;
    u8 field25373_0x63fc;
    u8 field25374_0x63fd;
    u8 field25375_0x63fe;
    u8 field25376_0x63ff;
    u8 field25377_0x6400;
    u8 field25378_0x6401;
    u8 field25379_0x6402;
    u8 field25380_0x6403;
    u8 field25381_0x6404;
    u8 field25382_0x6405;
    u8 field25383_0x6406;
    u8 field25384_0x6407;
    u8 field25385_0x6408;
    u8 field25386_0x6409;
    u8 field25387_0x640a;
    u8 field25388_0x640b;
    u8 field25389_0x640c;
    u8 field25390_0x640d;
    u8 field25391_0x640e;
    u8 field25392_0x640f;
    u8 field25393_0x6410;
    u8 field25394_0x6411;
    u8 field25395_0x6412;
    u8 field25396_0x6413;
    u8 field25397_0x6414;
    u8 field25398_0x6415;
    u8 field25399_0x6416;
    u8 field25400_0x6417;
    u8 field25401_0x6418;
    u8 field25402_0x6419;
    u8 field25403_0x641a;
    u8 field25404_0x641b;
    u8 field25405_0x641c;
    u8 field25406_0x641d;
    u8 field25407_0x641e;
    u8 field25408_0x641f;
    u8 field25409_0x6420;
    u8 field25410_0x6421;
    u8 field25411_0x6422;
    u8 field25412_0x6423;
    u8 field25413_0x6424;
    u8 field25414_0x6425;
    u8 field25415_0x6426;
    u8 field25416_0x6427;
    s16 map_ID;	                             // 80389ee0
    s16 map_entrance_ID;
    color_union map_fade_in_color;	         // 80389ee4
    s16 map_fade_out_time;	                 // 80389ee8
    s16 map_fade_in_time;
    u16 field25429_0x6434;
    u16 current_opened_menu;
    u8 field25433_0x6438[4];
    s32 cutscene_ID;
    s32 entrance_cutscene_ID;	             // 80389efc
    u32 cutscene_flags;
    s32 field25453_0x644c;			         // 80389f04
    u8 field25457_0x6450;
    u8 field25458_0x6451;
    u8 field25459_0x6452;
    u8 field25460_0x6453;
    u8 field25461_0x6454;
    u8 field25462_0x6455;
    u8 field25463_0x6456;
    u8 unk[0x19BA8];
} unknown_struct;

extern unknown_struct D_80363AB8[2];     // 0x80363AB8
extern unknown_struct D_80383AB8;        // 0x80383AB8. Temporary, should just be D_80363AB8[1]

Gfx* gDisplayListHead;
u16 gFramebuffers[3][76800];
u16 gZBuffer[320][240];        // 0x801A6800

#endif
