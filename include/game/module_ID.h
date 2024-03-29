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

#endif
