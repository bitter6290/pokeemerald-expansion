#ifndef GUARD_CONSTANTS_FLAGS_H
#define GUARD_CONSTANTS_FLAGS_H

#include "constants/opponents.h"

// Temporary Flags
// These temporary flags are are cleared every time a map is loaded. They are used
// for things like shortening an NPCs introduction text if the player already spoke
// to them once.
#define TEMP_FLAGS_START 0x0
#define FLAG_TEMP_1      (TEMP_FLAGS_START + 0x1)
#define FLAG_TEMP_2      (TEMP_FLAGS_START + 0x2)
#define FLAG_TEMP_3      (TEMP_FLAGS_START + 0x3)
#define FLAG_TEMP_4      (TEMP_FLAGS_START + 0x4)
#define FLAG_TEMP_5      (TEMP_FLAGS_START + 0x5)  // Unused Flag
#define FLAG_TEMP_6      (TEMP_FLAGS_START + 0x6)  // Unused Flag
#define FLAG_TEMP_7      (TEMP_FLAGS_START + 0x7)  // Unused Flag
#define FLAG_TEMP_8      (TEMP_FLAGS_START + 0x8)  // Unused Flag
#define FLAG_TEMP_9      (TEMP_FLAGS_START + 0x9)  // Unused Flag
#define FLAG_TEMP_A      (TEMP_FLAGS_START + 0xA)  // Unused Flag
#define FLAG_TEMP_B      (TEMP_FLAGS_START + 0xB)  // Unused Flag
#define FLAG_TEMP_C      (TEMP_FLAGS_START + 0xC)  // Unused Flag
#define FLAG_TEMP_D      (TEMP_FLAGS_START + 0xD)  // Unused Flag
#define FLAG_TEMP_E      (TEMP_FLAGS_START + 0xE)  // Unused Flag
#define FLAG_TEMP_F      (TEMP_FLAGS_START + 0xF)  // Unused Flag
#define FLAG_TEMP_10     (TEMP_FLAGS_START + 0x10) // Unused Flag
#define FLAG_TEMP_11     (TEMP_FLAGS_START + 0x11)
#define FLAG_TEMP_12     (TEMP_FLAGS_START + 0x12)
#define FLAG_TEMP_13     (TEMP_FLAGS_START + 0x13)
#define FLAG_TEMP_14     (TEMP_FLAGS_START + 0x14)
#define FLAG_TEMP_15     (TEMP_FLAGS_START + 0x15)
#define FLAG_TEMP_16     (TEMP_FLAGS_START + 0x16)
#define FLAG_TEMP_17     (TEMP_FLAGS_START + 0x17)
#define FLAG_TEMP_18     (TEMP_FLAGS_START + 0x18)
#define FLAG_TEMP_19     (TEMP_FLAGS_START + 0x19)
#define FLAG_TEMP_1A     (TEMP_FLAGS_START + 0x1A)
#define FLAG_TEMP_1B     (TEMP_FLAGS_START + 0x1B)
#define FLAG_TEMP_1C     (TEMP_FLAGS_START + 0x1C)
#define FLAG_TEMP_1D     (TEMP_FLAGS_START + 0x1D)
#define FLAG_TEMP_1E     (TEMP_FLAGS_START + 0x1E)
#define FLAG_TEMP_1F     (TEMP_FLAGS_START + 0x1F)
#define TEMP_FLAGS_END   FLAG_TEMP_1F

#define FLAG_PENDING_DAYCARE_EGG						0x20
#define FLAG_DECORATION_1								0x21
#define FLAG_DECORATION_14								0x22
#define FLAG_MYSTERY_GIFT_1								0x23
#define FLAG_MYSTERY_GIFT_2								0x24
#define FLAG_MYSTERY_GIFT_3								0x25
#define FLAG_MYSTERY_GIFT_4								0x26
#define FLAG_MYSTERY_GIFT_5								0x27
#define FLAG_MYSTERY_GIFT_6								0x28
#define FLAG_MYSTERY_GIFT_7								0x29
#define FLAG_MYSTERY_GIFT_8								0x2A
#define FLAG_MYSTERY_GIFT_9								0x2B
#define FLAG_MYSTERY_GIFT_10							0x2C
#define FLAG_MYSTERY_GIFT_11							0x2D
#define FLAG_MYSTERY_GIFT_12							0x2E
#define FLAG_MYSTERY_GIFT_13							0x2F
#define FLAG_MYSTERY_GIFT_14							0x30
#define FLAG_MYSTERY_GIFT_15							0x31
#define FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER			0x32
#define FLAG_HIDE_UNION_ROOM_PLAYER_1					0x33
#define FLAG_HIDE_UNION_ROOM_PLAYER_2					0x34
#define FLAG_HIDE_UNION_ROOM_PLAYER_3					0x35
#define FLAG_HIDE_UNION_ROOM_PLAYER_4					0x36
#define FLAG_HIDE_UNION_ROOM_PLAYER_5					0x37
#define FLAG_HIDE_UNION_ROOM_PLAYER_6					0x38
#define FLAG_HIDE_UNION_ROOM_PLAYER_7					0x39
#define FLAG_HIDE_UNION_ROOM_PLAYER_8					0x3A
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_1								0x3B
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_2								0x3C
#define FLAG_CANCEL_BATTLE_ROOM_CHALLENGE				0x3D
#define FLAG_MYSTERY_GIFT_DONE								0x3E
#define FLAG_DECORATION_2								0x3F
#define FLAG_DECORATION_3								0x40
#define FLAG_DECORATION_4								0x41
#define FLAG_DECORATION_5								0x42
#define FLAG_DECORATION_6								0x43
#define FLAG_DECORATION_7								0x44
#define FLAG_DECORATION_8								0x45
#define FLAG_DECORATION_9								0x46
#define FLAG_DECORATION_10								0x47
#define FLAG_DECORATION_11								0x48
#define FLAG_DECORATION_12								0x49
#define FLAG_DECORATION_13								0x4A
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1	0x4B
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2	0x4C
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3	0x4D
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4	0x4E
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5	0x4F
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6	0x50
#define FLAG_HIDE_BATTLE_TOWER_OPPONENT					0x51
#define FLAG_HIDE_SECRET_BASE_TRAINER					0x52
#define FLAG_SINK										0x53
#define FLAG_UNUSED_0x54								0x54
#define FLAG_UNUSED_0x55								0x55
#define FLAG_UNUSED_0x56								0x56
#define FLAG_UNUSED_0x57								0x57
#define FLAG_UNUSED_0x58								0x58
#define FLAG_UNUSED_0x59								0x59
#define FLAG_UNUSED_0x5A								0x5A
#define FLAG_UNUSED_0x5B								0x5B
#define FLAG_UNUSED_0x5C								0x5C
#define FLAG_UNUSED_0x5D								0x5D
#define FLAG_UNUSED_0x5E								0x5E
#define FLAG_UNUSED_0x5F								0x5F
#define FLAG_UNUSED_0x60								0x60
#define FLAG_UNUSED_0x61								0x61
#define FLAG_UNUSED_0x62								0x62
#define FLAG_UNUSED_0x63								0x63
#define FLAG_UNUSED_0x64								0x64
#define FLAG_UNUSED_0x65								0x65
#define FLAG_UNUSED_0x66								0x66
#define FLAG_UNUSED_0x67								0x67
#define FLAG_UNUSED_0x68								0x68
#define FLAG_UNUSED_0x69								0x69
#define FLAG_UNUSED_0x6A								0x6A
#define FLAG_UNUSED_0x6B								0x6B
#define FLAG_UNUSED_0x6C								0x6C
#define FLAG_UNUSED_0x6D								0x6D
#define FLAG_UNUSED_0x6E								0x6E
#define FLAG_UNUSED_0x6F								0x6F
#define FLAG_UNUSED_0x70								0x70
#define FLAG_UNUSED_0x71								0x71
#define FLAG_UNUSED_0x72								0x72
#define FLAG_UNUSED_0x73								0x73
#define FLAG_UNUSED_0x74								0x74
#define FLAG_UNUSED_0x75								0x75
#define FLAG_UNUSED_0x76								0x76
#define FLAG_UNUSED_0x77								0x77
#define FLAG_UNUSED_0x78								0x78
#define FLAG_UNUSED_0x79								0x79
#define FLAG_UNUSED_0x7A								0x7A
#define FLAG_UNUSED_0x7B								0x7B
#define FLAG_UNUSED_0x7C								0x7C
#define FLAG_UNUSED_0x7D								0x7D
#define FLAG_UNUSED_0x7E								0x7E
#define FLAG_UNUSED_0x7F								0x7F
#define FLAG_UNUSED_0x80								0x80
#define FLAG_UNUSED_0x81								0x81
#define FLAG_UNUSED_0x82								0x82
#define FLAG_UNUSED_0x83								0x83
#define FLAG_UNUSED_0x84								0x84
#define FLAG_UNUSED_0x85								0x85
#define FLAG_UNUSED_0x86								0x86
#define FLAG_UNUSED_0x87								0x87
#define FLAG_UNUSED_0x88								0x88
#define FLAG_UNUSED_0x89								0x89
#define FLAG_UNUSED_0x8A								0x8A
#define FLAG_UNUSED_0x8B								0x8B
#define FLAG_UNUSED_0x8C								0x8C
#define FLAG_UNUSED_0x8D								0x8D
#define FLAG_UNUSED_0x8E								0x8E
#define FLAG_UNUSED_0x8F								0x8F
#define FLAG_UNUSED_0x90								0x90
#define FLAG_UNUSED_0x91								0x91
#define FLAG_UNUSED_0x92								0x92
#define FLAG_UNUSED_0x93								0x93
#define FLAG_UNUSED_0x94								0x94
#define FLAG_UNUSED_0x95								0x95
#define FLAG_UNUSED_0x96								0x96
#define FLAG_UNUSED_0x97								0x97
#define FLAG_UNUSED_0x98								0x98
#define FLAG_UNUSED_0x99								0x99
#define FLAG_UNUSED_0x9A								0x9A
#define FLAG_UNUSED_0x9B								0x9B
#define FLAG_UNUSED_0x9C								0x9C
#define FLAG_UNUSED_0x9D								0x9D
#define FLAG_UNUSED_0x9E								0x9E
#define FLAG_UNUSED_0x9F								0x9F
#define FLAG_UNUSED_0xA0								0xA0
#define FLAG_UNUSED_0xA1								0xA1
#define FLAG_UNUSED_0xA2								0xA2
#define FLAG_UNUSED_0xA3								0xA3
#define FLAG_UNUSED_0xA4								0xA4
#define FLAG_UNUSED_0xA5								0xA5
#define FLAG_UNUSED_0xA6								0xA6
#define FLAG_UNUSED_0xA7								0xA7
#define FLAG_UNUSED_0xA8								0xA8
#define FLAG_UNUSED_0xA9								0xA9
#define FLAG_UNUSED_0xAA								0xAA
#define FLAG_UNUSED_0xAB								0xAB
#define FLAG_UNUSED_0xAC								0xAC
#define FLAG_UNUSED_0xAD								0xAD
#define FLAG_UNUSED_0xAE								0xAE
#define FLAG_UNUSED_0xAF								0xAF
#define FLAG_UNUSED_0xB0								0xB0
#define FLAG_UNUSED_0xB1								0xB1
#define FLAG_UNUSED_0xB2								0xB2
#define FLAG_UNUSED_0xB3								0xB3
#define FLAG_UNUSED_0xB4								0xB4
#define FLAG_UNUSED_0xB5								0xB5
#define FLAG_UNUSED_0xB6								0xB6
#define FLAG_UNUSED_0xB7								0xB7
#define FLAG_UNUSED_0xB8								0xB8
#define FLAG_UNUSED_0xB9								0xB9
#define FLAG_UNUSED_0xBA								0xBA
#define FLAG_UNUSED_0xBB								0xBB
#define FLAG_UNUSED_0xBC								0xBC
#define FLAG_UNUSED_0xBD								0xBD
#define FLAG_UNUSED_0xBE								0xBE
#define FLAG_UNUSED_0xBF								0xBF
#define FLAG_UNUSED_0xC0								0xC0
#define FLAG_UNUSED_0xC1								0xC1
#define FLAG_UNUSED_0xC2								0xC2
#define FLAG_UNUSED_0xC3								0xC3
#define FLAG_UNUSED_0xC4								0xC4
#define FLAG_UNUSED_0xC5								0xC5
#define FLAG_UNUSED_0xC6								0xC6
#define FLAG_UNUSED_0xC7								0xC7
#define FLAG_UNUSED_0xC8								0xC8
#define FLAG_UNUSED_0xC9								0xC9
#define FLAG_UNUSED_0xCA								0xCA
#define FLAG_UNUSED_0xCB								0xCB
#define FLAG_UNUSED_0xCC								0xCC
#define FLAG_UNUSED_0xCD								0xCD
#define FLAG_UNUSED_0xCE								0xCE
#define FLAG_UNUSED_0xCF								0xCF
#define FLAG_UNUSED_0xD0								0xD0
#define FLAG_UNUSED_0xD1								0xD1
#define FLAG_UNUSED_0xD2								0xD2
#define FLAG_UNUSED_0xD3								0xD3
#define FLAG_UNUSED_0xD4								0xD4
#define FLAG_UNUSED_0xD5								0xD5
#define FLAG_UNUSED_0xD6								0xD6
#define FLAG_UNUSED_0xD7								0xD7
#define FLAG_UNUSED_0xD8								0xD8
#define FLAG_UNUSED_0xD9								0xD9
#define FLAG_UNUSED_0xDA								0xDA
#define FLAG_UNUSED_0xDB								0xDB
#define FLAG_UNUSED_0xDC								0xDC
#define FLAG_UNUSED_0xDD								0xDD
#define FLAG_UNUSED_0xDE								0xDE
#define FLAG_UNUSED_0xDF								0xDF
#define FLAG_UNUSED_0xE0								0xE0
#define FLAG_UNUSED_0xE1								0xE1
#define FLAG_UNUSED_0xE2								0xE2
#define FLAG_UNUSED_0xE3								0xE3
#define FLAG_UNUSED_0xE4								0xE4
#define FLAG_UNUSED_0xE5								0xE5
#define FLAG_UNUSED_0xE6								0xE6
#define FLAG_UNUSED_0xE7								0xE7
#define FLAG_UNUSED_0xE8								0xE8
#define FLAG_UNUSED_0xE9								0xE9
#define FLAG_UNUSED_0xEA								0xEA
#define FLAG_UNUSED_0xEB								0xEB
#define FLAG_UNUSED_0xEC								0xEC
#define FLAG_UNUSED_0xED								0xED
#define FLAG_UNUSED_0xEE								0xEE
#define FLAG_UNUSED_0xEF								0xEF
#define FLAG_UNUSED_0xF0								0xF0
#define FLAG_UNUSED_0xF1								0xF1
#define FLAG_UNUSED_0xF2								0xF2
#define FLAG_UNUSED_0xF3								0xF3
#define FLAG_UNUSED_0xF4								0xF4
#define FLAG_UNUSED_0xF5								0xF5
#define FLAG_UNUSED_0xF6								0xF6
#define FLAG_UNUSED_0xF7								0xF7
#define FLAG_UNUSED_0xF8								0xF8
#define FLAG_UNUSED_0xF9								0xF9
#define FLAG_UNUSED_0xFA								0xFA
#define FLAG_UNUSED_0xFB								0xFB
#define FLAG_UNUSED_0xFC								0xFC
#define FLAG_UNUSED_0xFD								0xFD
#define FLAG_UNUSED_0xFE								0xFE
#define FLAG_UNUSED_0xFF								0xFF
#define FLAG_UNUSED_0x100								0x100
#define FLAG_UNUSED_0x101								0x101
#define FLAG_UNUSED_0x102								0x102
#define FLAG_UNUSED_0x103								0x103
#define FLAG_UNUSED_0x104								0x104
#define FLAG_UNUSED_0x105								0x105
#define FLAG_UNUSED_0x106								0x106
#define FLAG_UNUSED_0x107								0x107
#define FLAG_UNUSED_0x108								0x108
#define FLAG_UNUSED_0x109								0x109
#define FLAG_UNUSED_0x10A								0x10A
#define FLAG_UNUSED_0x10B								0x10B
#define FLAG_UNUSED_0x10C								0x10C
#define FLAG_UNUSED_0x10D								0x10D
#define FLAG_UNUSED_0x10E								0x10E
#define FLAG_UNUSED_0x10F								0x10F
#define FLAG_UNUSED_0x110								0x110
#define FLAG_UNUSED_0x111								0x111
#define FLAG_UNUSED_0x112								0x112
#define FLAG_UNUSED_0x113								0x113
#define FLAG_UNUSED_0x114								0x114
#define FLAG_UNUSED_0x115								0x115
#define FLAG_UNUSED_0x116								0x116
#define FLAG_UNUSED_0x117								0x117
#define FLAG_UNUSED_0x118								0x118
#define FLAG_UNUSED_0x119								0x119
#define FLAG_UNUSED_0x11A								0x11A
#define FLAG_UNUSED_0x11B								0x11B
#define FLAG_UNUSED_0x11C								0x11C
#define FLAG_UNUSED_0x11D								0x11D
#define FLAG_UNUSED_0x11E								0x11E
#define FLAG_UNUSED_0x11F								0x11F
#define FLAG_UNUSED_0x120								0x120
#define FLAG_UNUSED_0x121								0x121
#define FLAG_UNUSED_0x122								0x122
#define FLAG_UNUSED_0x123								0x123
#define FLAG_UNUSED_0x124								0x124
#define FLAG_UNUSED_0x125								0x125
#define FLAG_UNUSED_0x126								0x126
#define FLAG_UNUSED_0x127								0x127
#define FLAG_UNUSED_0x128								0x128
#define FLAG_UNUSED_0x129								0x129
#define FLAG_UNUSED_0x12A								0x12A
#define FLAG_UNUSED_0x12B								0x12B
#define FLAG_UNUSED_0x12C								0x12C
#define FLAG_UNUSED_0x12D								0x12D
#define FLAG_UNUSED_0x12E								0x12E
#define FLAG_UNUSED_0x12F								0x12F
#define FLAG_UNUSED_0x130								0x130
#define FLAG_UNUSED_0x131								0x131
#define FLAG_UNUSED_0x132								0x132
#define FLAG_UNUSED_0x133								0x133
#define FLAG_UNUSED_0x134								0x134
#define FLAG_UNUSED_0x135								0x135
#define FLAG_UNUSED_0x136								0x136
#define FLAG_UNUSED_0x137								0x137
#define FLAG_UNUSED_0x138								0x138
#define FLAG_UNUSED_0x139								0x139
#define FLAG_UNUSED_0x13A								0x13A
#define FLAG_UNUSED_0x13B								0x13B
#define FLAG_UNUSED_0x13C								0x13C
#define FLAG_UNUSED_0x13D								0x13D
#define FLAG_UNUSED_0x13E								0x13E
#define FLAG_UNUSED_0x13F								0x13F
#define FLAG_UNUSED_0x140								0x140
#define FLAG_UNUSED_0x141								0x141
#define FLAG_UNUSED_0x142								0x142
#define FLAG_UNUSED_0x143								0x143
#define FLAG_UNUSED_0x144								0x144
#define FLAG_UNUSED_0x145								0x145
#define FLAG_UNUSED_0x146								0x146
#define FLAG_UNUSED_0x147								0x147
#define FLAG_UNUSED_0x148								0x148
#define FLAG_UNUSED_0x149								0x149
#define FLAG_UNUSED_0x14A								0x14A
#define FLAG_UNUSED_0x14B								0x14B
#define FLAG_UNUSED_0x14C								0x14C
#define FLAG_UNUSED_0x14D								0x14D
#define FLAG_UNUSED_0x14E								0x14E
#define FLAG_UNUSED_0x14F								0x14F
#define FLAG_UNUSED_0x150								0x150
#define FLAG_UNUSED_0x151								0x151
#define FLAG_UNUSED_0x152								0x152
#define FLAG_UNUSED_0x153								0x153
#define FLAG_UNUSED_0x154								0x154
#define FLAG_UNUSED_0x155								0x155
#define FLAG_UNUSED_0x156								0x156
#define FLAG_UNUSED_0x157								0x157
#define FLAG_UNUSED_0x158								0x158
#define FLAG_UNUSED_0x159								0x159
#define FLAG_UNUSED_0x15A								0x15A
#define FLAG_UNUSED_0x15B								0x15B
#define FLAG_UNUSED_0x15C								0x15C
#define FLAG_UNUSED_0x15D								0x15D
#define FLAG_UNUSED_0x15E								0x15E
#define FLAG_UNUSED_0x15F								0x15F
#define FLAG_UNUSED_0x160								0x160
#define FLAG_UNUSED_0x161								0x161
#define FLAG_UNUSED_0x162								0x162
#define FLAG_UNUSED_0x163								0x163
#define FLAG_UNUSED_0x164								0x164
#define FLAG_UNUSED_0x165								0x165
#define FLAG_UNUSED_0x166								0x166
#define FLAG_UNUSED_0x167								0x167
#define FLAG_UNUSED_0x168								0x168
#define FLAG_UNUSED_0x169								0x169
#define FLAG_UNUSED_0x16A								0x16A
#define FLAG_UNUSED_0x16B								0x16B
#define FLAG_UNUSED_0x16C								0x16C
#define FLAG_UNUSED_0x16D								0x16D
#define FLAG_UNUSED_0x16E								0x16E
#define FLAG_UNUSED_0x16F								0x16F
#define FLAG_UNUSED_0x170								0x170
#define FLAG_UNUSED_0x171								0x171
#define FLAG_UNUSED_0x172								0x172
#define FLAG_UNUSED_0x173								0x173
#define FLAG_UNUSED_0x174								0x174
#define FLAG_UNUSED_0x175								0x175
#define FLAG_UNUSED_0x176								0x176
#define FLAG_UNUSED_0x177								0x177
#define FLAG_UNUSED_0x178								0x178
#define FLAG_UNUSED_0x179								0x179
#define FLAG_UNUSED_0x17A								0x17A
#define FLAG_UNUSED_0x17B								0x17B
#define FLAG_UNUSED_0x17C								0x17C
#define FLAG_UNUSED_0x17D								0x17D
#define FLAG_UNUSED_0x17E								0x17E
#define FLAG_UNUSED_0x17F								0x17F
#define FLAG_UNUSED_0x180								0x180
#define FLAG_UNUSED_0x181								0x181
#define FLAG_UNUSED_0x182								0x182
#define FLAG_UNUSED_0x183								0x183
#define FLAG_UNUSED_0x184								0x184
#define FLAG_UNUSED_0x185								0x185
#define FLAG_UNUSED_0x186								0x186
#define FLAG_UNUSED_0x187								0x187
#define FLAG_UNUSED_0x188								0x188
#define FLAG_UNUSED_0x189								0x189
#define FLAG_UNUSED_0x18A								0x18A
#define FLAG_UNUSED_0x18B								0x18B
#define FLAG_UNUSED_0x18C								0x18C
#define FLAG_UNUSED_0x18D								0x18D
#define FLAG_UNUSED_0x18E								0x18E
#define FLAG_UNUSED_0x18F								0x18F
#define FLAG_UNUSED_0x190								0x190
#define FLAG_UNUSED_0x191								0x191
#define FLAG_UNUSED_0x192								0x192
#define FLAG_UNUSED_0x193								0x193
#define FLAG_UNUSED_0x194								0x194
#define FLAG_UNUSED_0x195								0x195
#define FLAG_UNUSED_0x196								0x196
#define FLAG_UNUSED_0x197								0x197
#define FLAG_UNUSED_0x198								0x198
#define FLAG_UNUSED_0x199								0x199
#define FLAG_UNUSED_0x19A								0x19A
#define FLAG_UNUSED_0x19B								0x19B
#define FLAG_UNUSED_0x19C								0x19C
#define FLAG_UNUSED_0x19D								0x19D
#define FLAG_UNUSED_0x19E								0x19E
#define FLAG_UNUSED_0x19F								0x19F
#define FLAG_UNUSED_0x1A0								0x1A0
#define FLAG_UNUSED_0x1A1								0x1A1
#define FLAG_UNUSED_0x1A2								0x1A2
#define FLAG_UNUSED_0x1A3								0x1A3
#define FLAG_UNUSED_0x1A4								0x1A4
#define FLAG_UNUSED_0x1A5								0x1A5
#define FLAG_UNUSED_0x1A6								0x1A6
#define FLAG_UNUSED_0x1A7								0x1A7
#define FLAG_UNUSED_0x1A8								0x1A8
#define FLAG_UNUSED_0x1A9								0x1A9
#define FLAG_UNUSED_0x1AA								0x1AA
#define FLAG_UNUSED_0x1AB								0x1AB
#define FLAG_UNUSED_0x1AC								0x1AC
#define FLAG_UNUSED_0x1AD								0x1AD
#define FLAG_UNUSED_0x1AE								0x1AE
#define FLAG_UNUSED_0x1AF								0x1AF
#define FLAG_UNUSED_0x1B0								0x1B0
#define FLAG_UNUSED_0x1B1								0x1B1
#define FLAG_UNUSED_0x1B2								0x1B2
#define FLAG_UNUSED_0x1B3								0x1B3
#define FLAG_UNUSED_0x1B4								0x1B4
#define FLAG_UNUSED_0x1B5								0x1B5
#define FLAG_UNUSED_0x1B6								0x1B6
#define FLAG_UNUSED_0x1B7								0x1B7
#define FLAG_UNUSED_0x1B8								0x1B8
#define FLAG_UNUSED_0x1B9								0x1B9
#define FLAG_UNUSED_0x1BA								0x1BA
#define FLAG_UNUSED_0x1BB								0x1BB
#define FLAG_UNUSED_0x1BC								0x1BC
#define FLAG_UNUSED_0x1BD								0x1BD
#define FLAG_UNUSED_0x1BE								0x1BE
#define FLAG_UNUSED_0x1BF								0x1BF
#define FLAG_UNUSED_0x1C0								0x1C0
#define FLAG_UNUSED_0x1C1								0x1C1
#define FLAG_UNUSED_0x1C2								0x1C2
#define FLAG_UNUSED_0x1C3								0x1C3
#define FLAG_UNUSED_0x1C4								0x1C4
#define FLAG_UNUSED_0x1C5								0x1C5
#define FLAG_UNUSED_0x1C6								0x1C6
#define FLAG_UNUSED_0x1C7								0x1C7
#define FLAG_UNUSED_0x1C8								0x1C8
#define FLAG_UNUSED_0x1C9								0x1C9
#define FLAG_UNUSED_0x1CA								0x1CA
#define FLAG_UNUSED_0x1CB								0x1CB
#define FLAG_UNUSED_0x1CC								0x1CC
#define FLAG_UNUSED_0x1CD								0x1CD
#define FLAG_UNUSED_0x1CE								0x1CE
#define FLAG_UNUSED_0x1CF								0x1CF
#define FLAG_UNUSED_0x1D0								0x1D0
#define FLAG_UNUSED_0x1D1								0x1D1
#define FLAG_UNUSED_0x1D2								0x1D2
#define FLAG_UNUSED_0x1D3								0x1D3
#define FLAG_UNUSED_0x1D4								0x1D4
#define FLAG_UNUSED_0x1D5								0x1D5
#define FLAG_UNUSED_0x1D6								0x1D6
#define FLAG_UNUSED_0x1D7								0x1D7
#define FLAG_UNUSED_0x1D8								0x1D8
#define FLAG_UNUSED_0x1D9								0x1D9
#define FLAG_UNUSED_0x1DA								0x1DA
#define FLAG_UNUSED_0x1DB								0x1DB
#define FLAG_UNUSED_0x1DC								0x1DC
#define FLAG_UNUSED_0x1DD								0x1DD
#define FLAG_UNUSED_0x1DE								0x1DE
#define FLAG_UNUSED_0x1DF								0x1DF
#define FLAG_UNUSED_0x1E0								0x1E0
#define FLAG_UNUSED_0x1E1								0x1E1
#define FLAG_UNUSED_0x1E2								0x1E2
#define FLAG_UNUSED_0x1E3								0x1E3
#define FLAG_UNUSED_0x1E4								0x1E4
#define FLAG_UNUSED_0x1E5								0x1E5
#define FLAG_UNUSED_0x1E6								0x1E6
#define FLAG_UNUSED_0x1E7								0x1E7
#define FLAG_UNUSED_0x1E8								0x1E8
#define FLAG_UNUSED_0x1E9								0x1E9
#define FLAG_UNUSED_0x1EA								0x1EA
#define FLAG_UNUSED_0x1EB								0x1EB
#define FLAG_UNUSED_0x1EC								0x1EC
#define FLAG_UNUSED_0x1ED								0x1ED
#define FLAG_UNUSED_0x1EE								0x1EE
#define FLAG_UNUSED_0x1EF								0x1EF
#define FLAG_UNUSED_0x1F0								0x1F0
#define FLAG_UNUSED_0x1F1								0x1F1
#define FLAG_UNUSED_0x1F2								0x1F2
#define FLAG_UNUSED_0x1F3								0x1F3
#define FLAG_UNUSED_0x1F4								0x1F4
#define FLAG_UNUSED_0x1F5								0x1F5
#define FLAG_UNUSED_0x1F6								0x1F6
#define FLAG_UNUSED_0x1F7								0x1F7
#define FLAG_UNUSED_0x1F8								0x1F8
#define FLAG_UNUSED_0x1F9								0x1F9
#define FLAG_UNUSED_0x1FA								0x1FA
#define FLAG_UNUSED_0x1FB								0x1FB
#define FLAG_UNUSED_0x1FC								0x1FC
#define FLAG_UNUSED_0x1FD								0x1FD
#define FLAG_UNUSED_0x1FE								0x1FE
#define FLAG_UNUSED_0x1FF								0x1FF
#define FLAG_UNUSED_0x200								0x200
#define FLAG_UNUSED_0x201								0x201
#define FLAG_UNUSED_0x202								0x202
#define FLAG_UNUSED_0x203								0x203
#define FLAG_UNUSED_0x204								0x204
#define FLAG_UNUSED_0x205								0x205
#define FLAG_UNUSED_0x206								0x206
#define FLAG_UNUSED_0x207								0x207
#define FLAG_UNUSED_0x208								0x208
#define FLAG_UNUSED_0x209								0x209
#define FLAG_UNUSED_0x20A								0x20A
#define FLAG_UNUSED_0x20B								0x20B
#define FLAG_UNUSED_0x20C								0x20C
#define FLAG_UNUSED_0x20D								0x20D
#define FLAG_UNUSED_0x20E								0x20E
#define FLAG_UNUSED_0x20F								0x20F
#define FLAG_UNUSED_0x210								0x210
#define FLAG_UNUSED_0x211								0x211
#define FLAG_UNUSED_0x212								0x212
#define FLAG_UNUSED_0x213								0x213
#define FLAG_UNUSED_0x214								0x214
#define FLAG_UNUSED_0x215								0x215
#define FLAG_UNUSED_0x216								0x216
#define FLAG_UNUSED_0x217								0x217
#define FLAG_UNUSED_0x218								0x218
#define FLAG_UNUSED_0x219								0x219
#define FLAG_UNUSED_0x21A								0x21A
#define FLAG_UNUSED_0x21B								0x21B
#define FLAG_UNUSED_0x21C								0x21C
#define FLAG_UNUSED_0x21D								0x21D
#define FLAG_UNUSED_0x21E								0x21E
#define FLAG_UNUSED_0x21F								0x21F
#define FLAG_UNUSED_0x220								0x220
#define FLAG_UNUSED_0x221								0x221
#define FLAG_UNUSED_0x222								0x222
#define FLAG_UNUSED_0x223								0x223
#define FLAG_UNUSED_0x224								0x224
#define FLAG_UNUSED_0x225								0x225
#define FLAG_UNUSED_0x226								0x226
#define FLAG_UNUSED_0x227								0x227
#define FLAG_UNUSED_0x228								0x228
#define FLAG_UNUSED_0x229								0x229
#define FLAG_UNUSED_0x22A								0x22A
#define FLAG_UNUSED_0x22B								0x22B
#define FLAG_UNUSED_0x22C								0x22C
#define FLAG_UNUSED_0x22D								0x22D
#define FLAG_UNUSED_0x22E								0x22E
#define FLAG_UNUSED_0x22F								0x22F
#define FLAG_UNUSED_0x230								0x230
#define FLAG_UNUSED_0x231								0x231
#define FLAG_UNUSED_0x232								0x232
#define FLAG_UNUSED_0x233								0x233
#define FLAG_UNUSED_0x234								0x234
#define FLAG_UNUSED_0x235								0x235
#define FLAG_UNUSED_0x236								0x236
#define FLAG_UNUSED_0x237								0x237
#define FLAG_UNUSED_0x238								0x238
#define FLAG_UNUSED_0x239								0x239
#define FLAG_UNUSED_0x23A								0x23A
#define FLAG_UNUSED_0x23B								0x23B
#define FLAG_UNUSED_0x23C								0x23C
#define FLAG_UNUSED_0x23D								0x23D
#define FLAG_UNUSED_0x23E								0x23E
#define FLAG_UNUSED_0x23F								0x23F
#define FLAG_UNUSED_0x240								0x240
#define FLAG_UNUSED_0x241								0x241
#define FLAG_UNUSED_0x242								0x242
#define FLAG_UNUSED_0x243								0x243
#define FLAG_UNUSED_0x244								0x244
#define FLAG_UNUSED_0x245								0x245
#define FLAG_UNUSED_0x246								0x246
#define FLAG_UNUSED_0x247								0x247
#define FLAG_UNUSED_0x248								0x248
#define FLAG_UNUSED_0x249								0x249
#define FLAG_UNUSED_0x24A								0x24A
#define FLAG_UNUSED_0x24B								0x24B
#define FLAG_UNUSED_0x24C								0x24C
#define FLAG_UNUSED_0x24D								0x24D
#define FLAG_UNUSED_0x24E								0x24E
#define FLAG_UNUSED_0x24F								0x24F
#define FLAG_UNUSED_0x250								0x250
#define FLAG_UNUSED_0x251								0x251
#define FLAG_UNUSED_0x252								0x252
#define FLAG_UNUSED_0x253								0x253
#define FLAG_UNUSED_0x254								0x254
#define FLAG_UNUSED_0x255								0x255
#define FLAG_UNUSED_0x256								0x256
#define FLAG_UNUSED_0x257								0x257
#define FLAG_UNUSED_0x258								0x258
#define FLAG_UNUSED_0x259								0x259
#define FLAG_UNUSED_0x25A								0x25A
#define FLAG_UNUSED_0x25B								0x25B
#define FLAG_UNUSED_0x25C								0x25C
#define FLAG_UNUSED_0x25D								0x25D
#define FLAG_UNUSED_0x25E								0x25E
#define FLAG_UNUSED_0x25F								0x25F
#define FLAG_UNUSED_0x260								0x260
#define FLAG_UNUSED_0x261								0x261
#define FLAG_UNUSED_0x262								0x262
#define FLAG_UNUSED_0x263								0x263
#define FLAG_UNUSED_0x264								0x264
#define FLAG_UNUSED_0x265								0x265
#define FLAG_UNUSED_0x266								0x266
#define FLAG_UNUSED_0x267								0x267
#define FLAG_UNUSED_0x268								0x268
#define FLAG_UNUSED_0x269								0x269
#define FLAG_UNUSED_0x26A								0x26A
#define FLAG_UNUSED_0x26B								0x26B
#define FLAG_UNUSED_0x26C								0x26C
#define FLAG_UNUSED_0x26D								0x26D
#define FLAG_UNUSED_0x26E								0x26E
#define FLAG_UNUSED_0x26F								0x26F
#define FLAG_UNUSED_0x270								0x270
#define FLAG_UNUSED_0x271								0x271
#define FLAG_UNUSED_0x272								0x272
#define FLAG_UNUSED_0x273								0x273
#define FLAG_UNUSED_0x274								0x274
#define FLAG_UNUSED_0x275								0x275
#define FLAG_UNUSED_0x276								0x276
#define FLAG_UNUSED_0x277								0x277
#define FLAG_UNUSED_0x278								0x278
#define FLAG_UNUSED_0x279								0x279
#define FLAG_UNUSED_0x27A								0x27A
#define FLAG_UNUSED_0x27B								0x27B
#define FLAG_UNUSED_0x27C								0x27C
#define FLAG_UNUSED_0x27D								0x27D
#define FLAG_UNUSED_0x27E								0x27E
#define FLAG_UNUSED_0x27F								0x27F
#define FLAG_UNUSED_0x280								0x280
#define FLAG_UNUSED_0x281								0x281
#define FLAG_UNUSED_0x282								0x282
#define FLAG_UNUSED_0x283								0x283
#define FLAG_UNUSED_0x284								0x284
#define FLAG_UNUSED_0x285								0x285
#define FLAG_UNUSED_0x286								0x286
#define FLAG_UNUSED_0x287								0x287
#define FLAG_UNUSED_0x288								0x288
#define FLAG_UNUSED_0x289								0x289
#define FLAG_UNUSED_0x28A								0x28A
#define FLAG_UNUSED_0x28B								0x28B
#define FLAG_UNUSED_0x28C								0x28C
#define FLAG_UNUSED_0x28D								0x28D
#define FLAG_UNUSED_0x28E								0x28E
#define FLAG_UNUSED_0x28F								0x28F
#define FLAG_UNUSED_0x290								0x290
#define FLAG_UNUSED_0x291								0x291
#define FLAG_UNUSED_0x292								0x292
#define FLAG_UNUSED_0x293								0x293
#define FLAG_UNUSED_0x294								0x294
#define FLAG_UNUSED_0x295								0x295
#define FLAG_UNUSED_0x296								0x296
#define FLAG_UNUSED_0x297								0x297
#define FLAG_UNUSED_0x298								0x298
#define FLAG_UNUSED_0x299								0x299
#define FLAG_UNUSED_0x29A								0x29A
#define FLAG_UNUSED_0x29B								0x29B
#define FLAG_UNUSED_0x29C								0x29C
#define FLAG_UNUSED_0x29D								0x29D
#define FLAG_UNUSED_0x29E								0x29E
#define FLAG_UNUSED_0x29F								0x29F
#define FLAG_UNUSED_0x2A0								0x2A0
#define FLAG_UNUSED_0x2A1								0x2A1
#define FLAG_UNUSED_0x2A2								0x2A2
#define FLAG_UNUSED_0x2A3								0x2A3
#define FLAG_UNUSED_0x2A4								0x2A4
#define FLAG_UNUSED_0x2A5								0x2A5
#define FLAG_UNUSED_0x2A6								0x2A6
#define FLAG_UNUSED_0x2A7								0x2A7
#define FLAG_UNUSED_0x2A8								0x2A8
#define FLAG_UNUSED_0x2A9								0x2A9
#define FLAG_UNUSED_0x2AA								0x2AA
#define FLAG_UNUSED_0x2AB								0x2AB
#define FLAG_UNUSED_0x2AC								0x2AC
#define FLAG_UNUSED_0x2AD								0x2AD
#define FLAG_UNUSED_0x2AE								0x2AE
#define FLAG_UNUSED_0x2AF								0x2AF
#define FLAG_UNUSED_0x2B0								0x2B0
#define FLAG_UNUSED_0x2B1								0x2B1
#define FLAG_UNUSED_0x2B2								0x2B2
#define FLAG_UNUSED_0x2B3								0x2B3
#define FLAG_UNUSED_0x2B4								0x2B4
#define FLAG_UNUSED_0x2B5								0x2B5
#define FLAG_UNUSED_0x2B6								0x2B6
#define FLAG_UNUSED_0x2B7								0x2B7
#define FLAG_UNUSED_0x2B8								0x2B8
#define FLAG_UNUSED_0x2B9								0x2B9
#define FLAG_UNUSED_0x2BA								0x2BA
#define FLAG_UNUSED_0x2BB								0x2BB
#define FLAG_UNUSED_0x2BC								0x2BC
#define FLAG_UNUSED_0x2BD								0x2BD
#define FLAG_UNUSED_0x2BE								0x2BE
#define FLAG_UNUSED_0x2BF								0x2BF
#define FLAG_UNUSED_0x2C0								0x2C0
#define FLAG_UNUSED_0x2C1								0x2C1
#define FLAG_UNUSED_0x2C2								0x2C2
#define FLAG_UNUSED_0x2C3								0x2C3
#define FLAG_UNUSED_0x2C4								0x2C4
#define FLAG_UNUSED_0x2C5								0x2C5
#define FLAG_UNUSED_0x2C6								0x2C6
#define FLAG_UNUSED_0x2C7								0x2C7
#define FLAG_UNUSED_0x2C8								0x2C8
#define FLAG_UNUSED_0x2C9								0x2C9
#define FLAG_UNUSED_0x2CA								0x2CA
#define FLAG_UNUSED_0x2CB								0x2CB
#define FLAG_UNUSED_0x2CC								0x2CC
#define FLAG_UNUSED_0x2CD								0x2CD
#define FLAG_UNUSED_0x2CE								0x2CE
#define FLAG_UNUSED_0x2CF								0x2CF
#define FLAG_UNUSED_0x2D0								0x2D0
#define FLAG_UNUSED_0x2D1								0x2D1
#define FLAG_UNUSED_0x2D2								0x2D2
#define FLAG_UNUSED_0x2D3								0x2D3
#define FLAG_UNUSED_0x2D4								0x2D4
#define FLAG_UNUSED_0x2D5								0x2D5
#define FLAG_UNUSED_0x2D6								0x2D6
#define FLAG_UNUSED_0x2D7								0x2D7
#define FLAG_UNUSED_0x2D8								0x2D8
#define FLAG_UNUSED_0x2D9								0x2D9
#define FLAG_UNUSED_0x2DA								0x2DA
#define FLAG_UNUSED_0x2DB								0x2DB
#define FLAG_UNUSED_0x2DC								0x2DC
#define FLAG_UNUSED_0x2DD								0x2DD
#define FLAG_UNUSED_0x2DE								0x2DE
#define FLAG_UNUSED_0x2DF								0x2DF
#define FLAG_UNUSED_0x2E0								0x2E0
#define FLAG_UNUSED_0x2E1								0x2E1
#define FLAG_UNUSED_0x2E2								0x2E2
#define FLAG_UNUSED_0x2E3								0x2E3
#define FLAG_UNUSED_0x2E4								0x2E4
#define FLAG_UNUSED_0x2E5								0x2E5
#define FLAG_UNUSED_0x2E6								0x2E6
#define FLAG_UNUSED_0x2E7								0x2E7
#define FLAG_UNUSED_0x2E8								0x2E8
#define FLAG_UNUSED_0x2E9								0x2E9
#define FLAG_UNUSED_0x2EA								0x2EA
#define FLAG_UNUSED_0x2EB								0x2EB
#define FLAG_UNUSED_0x2EC								0x2EC
#define FLAG_UNUSED_0x2ED								0x2ED
#define FLAG_UNUSED_0x2EE								0x2EE
#define FLAG_UNUSED_0x2EF								0x2EF
#define FLAG_UNUSED_0x2F0								0x2F0
#define FLAG_UNUSED_0x2F1								0x2F1
#define FLAG_UNUSED_0x2F2								0x2F2
#define FLAG_UNUSED_0x2F3								0x2F3
#define FLAG_UNUSED_0x2F4								0x2F4
#define FLAG_UNUSED_0x2F5								0x2F5
#define FLAG_UNUSED_0x2F6								0x2F6
#define FLAG_UNUSED_0x2F7								0x2F7
#define FLAG_UNUSED_0x2F8								0x2F8
#define FLAG_UNUSED_0x2F9								0x2F9
#define FLAG_UNUSED_0x2FA								0x2FA
#define FLAG_UNUSED_0x2FB								0x2FB
#define FLAG_UNUSED_0x2FC								0x2FC
#define FLAG_UNUSED_0x2FD								0x2FD
#define FLAG_UNUSED_0x2FE								0x2FE
#define FLAG_UNUSED_0x2FF								0x2FF
#define FLAG_UNUSED_0x300								0x300
#define FLAG_UNUSED_0x301								0x301
#define FLAG_UNUSED_0x302								0x302
#define FLAG_UNUSED_0x303								0x303
#define FLAG_UNUSED_0x304								0x304
#define FLAG_UNUSED_0x305								0x305
#define FLAG_UNUSED_0x306								0x306
#define FLAG_UNUSED_0x307								0x307
#define FLAG_UNUSED_0x308								0x308
#define FLAG_UNUSED_0x309								0x309
#define FLAG_UNUSED_0x30A								0x30A
#define FLAG_UNUSED_0x30B								0x30B
#define FLAG_UNUSED_0x30C								0x30C
#define FLAG_UNUSED_0x30D								0x30D
#define FLAG_UNUSED_0x30E								0x30E
#define FLAG_UNUSED_0x30F								0x30F
#define FLAG_UNUSED_0x310								0x310
#define FLAG_UNUSED_0x311								0x311
#define FLAG_UNUSED_0x312								0x312
#define FLAG_UNUSED_0x313								0x313
#define FLAG_UNUSED_0x314								0x314
#define FLAG_UNUSED_0x315								0x315
#define FLAG_UNUSED_0x316								0x316
#define FLAG_UNUSED_0x317								0x317
#define FLAG_UNUSED_0x318								0x318
#define FLAG_UNUSED_0x319								0x319
#define FLAG_UNUSED_0x31A								0x31A
#define FLAG_UNUSED_0x31B								0x31B
#define FLAG_UNUSED_0x31C								0x31C
#define FLAG_UNUSED_0x31D								0x31D
#define FLAG_UNUSED_0x31E								0x31E
#define FLAG_UNUSED_0x31F								0x31F
#define FLAG_UNUSED_0x320								0x320
#define FLAG_UNUSED_0x321								0x321
#define FLAG_UNUSED_0x322								0x322
#define FLAG_UNUSED_0x323								0x323
#define FLAG_UNUSED_0x324								0x324
#define FLAG_UNUSED_0x325								0x325
#define FLAG_UNUSED_0x326								0x326
#define FLAG_UNUSED_0x327								0x327
#define FLAG_UNUSED_0x328								0x328
#define FLAG_UNUSED_0x329								0x329
#define FLAG_UNUSED_0x32A								0x32A
#define FLAG_UNUSED_0x32B								0x32B
#define FLAG_UNUSED_0x32C								0x32C
#define FLAG_UNUSED_0x32D								0x32D
#define FLAG_UNUSED_0x32E								0x32E
#define FLAG_UNUSED_0x32F								0x32F
#define FLAG_UNUSED_0x330								0x330
#define FLAG_UNUSED_0x331								0x331
#define FLAG_UNUSED_0x332								0x332
#define FLAG_UNUSED_0x333								0x333
#define FLAG_UNUSED_0x334								0x334
#define FLAG_UNUSED_0x335								0x335
#define FLAG_UNUSED_0x336								0x336
#define FLAG_UNUSED_0x337								0x337
#define FLAG_UNUSED_0x338								0x338
#define FLAG_UNUSED_0x339								0x339
#define FLAG_UNUSED_0x33A								0x33A
#define FLAG_UNUSED_0x33B								0x33B
#define FLAG_UNUSED_0x33C								0x33C
#define FLAG_UNUSED_0x33D								0x33D
#define FLAG_UNUSED_0x33E								0x33E
#define FLAG_UNUSED_0x33F								0x33F
#define FLAG_UNUSED_0x340								0x340
#define FLAG_UNUSED_0x341								0x341
#define FLAG_UNUSED_0x342								0x342
#define FLAG_UNUSED_0x343								0x343
#define FLAG_UNUSED_0x344								0x344
#define FLAG_UNUSED_0x345								0x345
#define FLAG_UNUSED_0x346								0x346
#define FLAG_UNUSED_0x347								0x347
#define FLAG_UNUSED_0x348								0x348
#define FLAG_UNUSED_0x349								0x349
#define FLAG_UNUSED_0x34A								0x34A
#define FLAG_UNUSED_0x34B								0x34B
#define FLAG_UNUSED_0x34C								0x34C
#define FLAG_UNUSED_0x34D								0x34D
#define FLAG_UNUSED_0x34E								0x34E
#define FLAG_UNUSED_0x34F								0x34F
#define FLAG_UNUSED_0x350								0x350
#define FLAG_UNUSED_0x351								0x351
#define FLAG_UNUSED_0x352								0x352
#define FLAG_UNUSED_0x353								0x353
#define FLAG_UNUSED_0x354								0x354
#define FLAG_UNUSED_0x355								0x355
#define FLAG_UNUSED_0x356								0x356
#define FLAG_UNUSED_0x357								0x357
#define FLAG_UNUSED_0x358								0x358
#define FLAG_UNUSED_0x359								0x359
#define FLAG_UNUSED_0x35A								0x35A
#define FLAG_UNUSED_0x35B								0x35B
#define FLAG_UNUSED_0x35C								0x35C
#define FLAG_UNUSED_0x35D								0x35D
#define FLAG_UNUSED_0x35E								0x35E
#define FLAG_UNUSED_0x35F								0x35F
#define FLAG_UNUSED_0x360								0x360
#define FLAG_UNUSED_0x361								0x361
#define FLAG_UNUSED_0x362								0x362
#define FLAG_UNUSED_0x363								0x363
#define FLAG_UNUSED_0x364								0x364
#define FLAG_UNUSED_0x365								0x365
#define FLAG_UNUSED_0x366								0x366
#define FLAG_UNUSED_0x367								0x367
#define FLAG_UNUSED_0x368								0x368
#define FLAG_UNUSED_0x369								0x369
#define FLAG_UNUSED_0x36A								0x36A
#define FLAG_UNUSED_0x36B								0x36B
#define FLAG_UNUSED_0x36C								0x36C
#define FLAG_UNUSED_0x36D								0x36D
#define FLAG_UNUSED_0x36E								0x36E
#define FLAG_UNUSED_0x36F								0x36F
#define FLAG_UNUSED_0x370								0x370
#define FLAG_UNUSED_0x371								0x371
#define FLAG_UNUSED_0x372								0x372
#define FLAG_UNUSED_0x373								0x373
#define FLAG_UNUSED_0x374								0x374
#define FLAG_UNUSED_0x375								0x375
#define FLAG_UNUSED_0x376								0x376
#define FLAG_UNUSED_0x377								0x377
#define FLAG_UNUSED_0x378								0x378
#define FLAG_UNUSED_0x379								0x379
#define FLAG_UNUSED_0x37A								0x37A
#define FLAG_UNUSED_0x37B								0x37B
#define FLAG_UNUSED_0x37C								0x37C
#define FLAG_UNUSED_0x37D								0x37D
#define FLAG_UNUSED_0x37E								0x37E
#define FLAG_UNUSED_0x37F								0x37F
#define FLAG_UNUSED_0x380								0x380
#define FLAG_UNUSED_0x381								0x381
#define FLAG_UNUSED_0x382								0x382
#define FLAG_UNUSED_0x383								0x383
#define FLAG_UNUSED_0x384								0x384
#define FLAG_UNUSED_0x385								0x385
#define FLAG_UNUSED_0x386								0x386
#define FLAG_UNUSED_0x387								0x387
#define FLAG_UNUSED_0x388								0x388
#define FLAG_UNUSED_0x389								0x389
#define FLAG_UNUSED_0x38A								0x38A
#define FLAG_UNUSED_0x38B								0x38B
#define FLAG_UNUSED_0x38C								0x38C
#define FLAG_UNUSED_0x38D								0x38D
#define FLAG_UNUSED_0x38E								0x38E
#define FLAG_UNUSED_0x38F								0x38F
#define FLAG_UNUSED_0x390								0x390
#define FLAG_UNUSED_0x391								0x391
#define FLAG_UNUSED_0x392								0x392
#define FLAG_UNUSED_0x393								0x393
#define FLAG_UNUSED_0x394								0x394
#define FLAG_UNUSED_0x395								0x395
#define FLAG_UNUSED_0x396								0x396
#define FLAG_UNUSED_0x397								0x397
#define FLAG_UNUSED_0x398								0x398
#define FLAG_UNUSED_0x399								0x399
#define FLAG_UNUSED_0x39A								0x39A
#define FLAG_UNUSED_0x39B								0x39B
#define FLAG_UNUSED_0x39C								0x39C
#define FLAG_UNUSED_0x39D								0x39D
#define FLAG_UNUSED_0x39E								0x39E
#define FLAG_UNUSED_0x39F								0x39F
#define FLAG_UNUSED_0x3A0								0x3A0
#define FLAG_UNUSED_0x3A1								0x3A1
#define FLAG_UNUSED_0x3A2								0x3A2
#define FLAG_UNUSED_0x3A3								0x3A3
#define FLAG_UNUSED_0x3A4								0x3A4
#define FLAG_UNUSED_0x3A5								0x3A5
#define FLAG_UNUSED_0x3A6								0x3A6
#define FLAG_UNUSED_0x3A7								0x3A7
#define FLAG_UNUSED_0x3A8								0x3A8
#define FLAG_UNUSED_0x3A9								0x3A9
#define FLAG_UNUSED_0x3AA								0x3AA
#define FLAG_UNUSED_0x3AB								0x3AB
#define FLAG_UNUSED_0x3AC								0x3AC
#define FLAG_UNUSED_0x3AD								0x3AD
#define FLAG_UNUSED_0x3AE								0x3AE
#define FLAG_UNUSED_0x3AF								0x3AF
#define FLAG_UNUSED_0x3B0								0x3B0
#define FLAG_UNUSED_0x3B1								0x3B1
#define FLAG_UNUSED_0x3B2								0x3B2
#define FLAG_UNUSED_0x3B3								0x3B3
#define FLAG_UNUSED_0x3B4								0x3B4
#define FLAG_UNUSED_0x3B5								0x3B5
#define FLAG_UNUSED_0x3B6								0x3B6
#define FLAG_UNUSED_0x3B7								0x3B7
#define FLAG_UNUSED_0x3B8								0x3B8
#define FLAG_UNUSED_0x3B9								0x3B9
#define FLAG_UNUSED_0x3BA								0x3BA
#define FLAG_UNUSED_0x3BB								0x3BB
#define FLAG_UNUSED_0x3BC								0x3BC
#define FLAG_UNUSED_0x3BD								0x3BD
#define FLAG_UNUSED_0x3BE								0x3BE
#define FLAG_UNUSED_0x3BF								0x3BF
#define FLAG_UNUSED_0x3C0								0x3C0
#define FLAG_UNUSED_0x3C1								0x3C1
#define FLAG_UNUSED_0x3C2								0x3C2
#define FLAG_UNUSED_0x3C3								0x3C3
#define FLAG_UNUSED_0x3C4								0x3C4
#define FLAG_UNUSED_0x3C5								0x3C5
#define FLAG_UNUSED_0x3C6								0x3C6
#define FLAG_UNUSED_0x3C7								0x3C7
#define FLAG_UNUSED_0x3C8								0x3C8
#define FLAG_UNUSED_0x3C9								0x3C9
#define FLAG_UNUSED_0x3CA								0x3CA
#define FLAG_UNUSED_0x3CB								0x3CB
#define FLAG_UNUSED_0x3CC								0x3CC
#define FLAG_UNUSED_0x3CD								0x3CD
#define FLAG_UNUSED_0x3CE								0x3CE
#define FLAG_UNUSED_0x3CF								0x3CF
#define FLAG_UNUSED_0x3D0								0x3D0
#define FLAG_UNUSED_0x3D1								0x3D1
#define FLAG_UNUSED_0x3D2								0x3D2
#define FLAG_UNUSED_0x3D3								0x3D3
#define FLAG_UNUSED_0x3D4								0x3D4
#define FLAG_UNUSED_0x3D5								0x3D5
#define FLAG_UNUSED_0x3D6								0x3D6
#define FLAG_UNUSED_0x3D7								0x3D7
#define FLAG_UNUSED_0x3D8								0x3D8
#define FLAG_UNUSED_0x3D9								0x3D9
#define FLAG_UNUSED_0x3DA								0x3DA
#define FLAG_UNUSED_0x3DB								0x3DB
#define FLAG_UNUSED_0x3DC								0x3DC
#define FLAG_UNUSED_0x3DD								0x3DD
#define FLAG_UNUSED_0x3DE								0x3DE
#define FLAG_UNUSED_0x3DF								0x3DF
#define FLAG_UNUSED_0x3E0								0x3E0
#define FLAG_UNUSED_0x3E1								0x3E1
#define FLAG_UNUSED_0x3E2								0x3E2
#define FLAG_UNUSED_0x3E3								0x3E3
#define FLAG_UNUSED_0x3E4								0x3E4
#define FLAG_UNUSED_0x3E5								0x3E5
#define FLAG_UNUSED_0x3E6								0x3E6
#define FLAG_UNUSED_0x3E7								0x3E7
#define FLAG_UNUSED_0x3E8								0x3E8
#define FLAG_UNUSED_0x3E9								0x3E9
#define FLAG_UNUSED_0x3EA								0x3EA
#define FLAG_UNUSED_0x3EB								0x3EB
#define FLAG_UNUSED_0x3EC								0x3EC
#define FLAG_UNUSED_0x3ED								0x3ED
#define FLAG_UNUSED_0x3EE								0x3EE
#define FLAG_UNUSED_0x3EF								0x3EF
#define FLAG_UNUSED_0x3F0								0x3F0
#define FLAG_UNUSED_0x3F1								0x3F1
#define FLAG_UNUSED_0x3F2								0x3F2
#define FLAG_UNUSED_0x3F3								0x3F3
#define FLAG_UNUSED_0x3F4								0x3F4
#define FLAG_UNUSED_0x3F5								0x3F5
#define FLAG_UNUSED_0x3F6								0x3F6
#define FLAG_UNUSED_0x3F7								0x3F7
#define FLAG_UNUSED_0x3F8								0x3F8
#define FLAG_UNUSED_0x3F9								0x3F9
#define FLAG_UNUSED_0x3FA								0x3FA
#define FLAG_UNUSED_0x3FB								0x3FB
#define FLAG_UNUSED_0x3FC								0x3FC
#define FLAG_UNUSED_0x3FD								0x3FD
#define FLAG_UNUSED_0x3FE								0x3FE
#define FLAG_UNUSED_0x3FF								0x3FF
#define FLAG_UNUSED_0x400								0x400
#define FLAG_UNUSED_0x401								0x401
#define FLAG_UNUSED_0x402								0x402
#define FLAG_UNUSED_0x403								0x403
#define FLAG_UNUSED_0x404								0x404
#define FLAG_UNUSED_0x405								0x405
#define FLAG_UNUSED_0x406								0x406
#define FLAG_UNUSED_0x407								0x407
#define FLAG_UNUSED_0x408								0x408
#define FLAG_UNUSED_0x409								0x409
#define FLAG_UNUSED_0x40A								0x40A
#define FLAG_UNUSED_0x40B								0x40B
#define FLAG_UNUSED_0x40C								0x40C
#define FLAG_UNUSED_0x40D								0x40D
#define FLAG_UNUSED_0x40E								0x40E
#define FLAG_UNUSED_0x40F								0x40F
#define FLAG_UNUSED_0x410								0x410
#define FLAG_UNUSED_0x411								0x411
#define FLAG_UNUSED_0x412								0x412
#define FLAG_UNUSED_0x413								0x413
#define FLAG_UNUSED_0x414								0x414
#define FLAG_UNUSED_0x415								0x415
#define FLAG_UNUSED_0x416								0x416
#define FLAG_UNUSED_0x417								0x417
#define FLAG_UNUSED_0x418								0x418
#define FLAG_UNUSED_0x419								0x419
#define FLAG_UNUSED_0x41A								0x41A
#define FLAG_UNUSED_0x41B								0x41B
#define FLAG_UNUSED_0x41C								0x41C
#define FLAG_UNUSED_0x41D								0x41D
#define FLAG_UNUSED_0x41E								0x41E
#define FLAG_UNUSED_0x41F								0x41F
#define FLAG_UNUSED_0x420								0x420
#define FLAG_UNUSED_0x421								0x421
#define FLAG_UNUSED_0x422								0x422
#define FLAG_UNUSED_0x423								0x423
#define FLAG_UNUSED_0x424								0x424
#define FLAG_UNUSED_0x425								0x425
#define FLAG_UNUSED_0x426								0x426
#define FLAG_UNUSED_0x427								0x427
#define FLAG_UNUSED_0x428								0x428
#define FLAG_UNUSED_0x429								0x429
#define FLAG_UNUSED_0x42A								0x42A
#define FLAG_UNUSED_0x42B								0x42B
#define FLAG_UNUSED_0x42C								0x42C
#define FLAG_UNUSED_0x42D								0x42D
#define FLAG_UNUSED_0x42E								0x42E
#define FLAG_UNUSED_0x42F								0x42F
#define FLAG_UNUSED_0x430								0x430
#define FLAG_UNUSED_0x431								0x431
#define FLAG_UNUSED_0x432								0x432
#define FLAG_UNUSED_0x433								0x433
#define FLAG_UNUSED_0x434								0x434
#define FLAG_UNUSED_0x435								0x435
#define FLAG_UNUSED_0x436								0x436
#define FLAG_UNUSED_0x437								0x437
#define FLAG_UNUSED_0x438								0x438
#define FLAG_UNUSED_0x439								0x439
#define FLAG_UNUSED_0x43A								0x43A
#define FLAG_UNUSED_0x43B								0x43B
#define FLAG_UNUSED_0x43C								0x43C
#define FLAG_UNUSED_0x43D								0x43D
#define FLAG_UNUSED_0x43E								0x43E
#define FLAG_UNUSED_0x43F								0x43F
#define FLAG_UNUSED_0x440								0x440
#define FLAG_UNUSED_0x441								0x441
#define FLAG_UNUSED_0x442								0x442
#define FLAG_UNUSED_0x443								0x443
#define FLAG_UNUSED_0x444								0x444
#define FLAG_UNUSED_0x445								0x445
#define FLAG_UNUSED_0x446								0x446
#define FLAG_UNUSED_0x447								0x447
#define FLAG_UNUSED_0x448								0x448
#define FLAG_UNUSED_0x449								0x449
#define FLAG_UNUSED_0x44A								0x44A
#define FLAG_UNUSED_0x44B								0x44B
#define FLAG_UNUSED_0x44C								0x44C
#define FLAG_UNUSED_0x44D								0x44D
#define FLAG_UNUSED_0x44E								0x44E
#define FLAG_UNUSED_0x44F								0x44F
#define FLAG_UNUSED_0x450								0x450
#define FLAG_UNUSED_0x451								0x451
#define FLAG_UNUSED_0x452								0x452
#define FLAG_UNUSED_0x453								0x453
#define FLAG_UNUSED_0x454								0x454
#define FLAG_UNUSED_0x455								0x455
#define FLAG_UNUSED_0x456								0x456
#define FLAG_UNUSED_0x457								0x457
#define FLAG_UNUSED_0x458								0x458
#define FLAG_UNUSED_0x459								0x459
#define FLAG_UNUSED_0x45A								0x45A
#define FLAG_UNUSED_0x45B								0x45B
#define FLAG_UNUSED_0x45C								0x45C
#define FLAG_UNUSED_0x45D								0x45D
#define FLAG_UNUSED_0x45E								0x45E
#define FLAG_UNUSED_0x45F								0x45F
#define FLAG_UNUSED_0x460								0x460
#define FLAG_UNUSED_0x461								0x461
#define FLAG_UNUSED_0x462								0x462
#define FLAG_UNUSED_0x463								0x463
#define FLAG_UNUSED_0x464								0x464
#define FLAG_UNUSED_0x465								0x465
#define FLAG_UNUSED_0x466								0x466
#define FLAG_UNUSED_0x467								0x467
#define FLAG_UNUSED_0x468								0x468
#define FLAG_UNUSED_0x469								0x469
#define FLAG_UNUSED_0x46A								0x46A
#define FLAG_UNUSED_0x46B								0x46B
#define FLAG_UNUSED_0x46C								0x46C
#define FLAG_UNUSED_0x46D								0x46D
#define FLAG_UNUSED_0x46E								0x46E
#define FLAG_UNUSED_0x46F								0x46F
#define FLAG_UNUSED_0x470								0x470
#define FLAG_UNUSED_0x471								0x471
#define FLAG_UNUSED_0x472								0x472
#define FLAG_UNUSED_0x473								0x473
#define FLAG_UNUSED_0x474								0x474
#define FLAG_UNUSED_0x475								0x475
#define FLAG_UNUSED_0x476								0x476
#define FLAG_UNUSED_0x477								0x477
#define FLAG_UNUSED_0x478								0x478
#define FLAG_UNUSED_0x479								0x479
#define FLAG_UNUSED_0x47A								0x47A
#define FLAG_UNUSED_0x47B								0x47B
#define FLAG_UNUSED_0x47C								0x47C
#define FLAG_UNUSED_0x47D								0x47D
#define FLAG_UNUSED_0x47E								0x47E
#define FLAG_UNUSED_0x47F								0x47F
#define FLAG_UNUSED_0x480								0x480
#define FLAG_UNUSED_0x481								0x481
#define FLAG_UNUSED_0x482								0x482
#define FLAG_UNUSED_0x483								0x483
#define FLAG_UNUSED_0x484								0x484
#define FLAG_UNUSED_0x485								0x485
#define FLAG_UNUSED_0x486								0x486
#define FLAG_UNUSED_0x487								0x487
#define FLAG_UNUSED_0x488								0x488
#define FLAG_UNUSED_0x489								0x489
#define FLAG_UNUSED_0x48A								0x48A
#define FLAG_UNUSED_0x48B								0x48B
#define FLAG_UNUSED_0x48C								0x48C
#define FLAG_UNUSED_0x48D								0x48D
#define FLAG_UNUSED_0x48E								0x48E
#define FLAG_UNUSED_0x48F								0x48F
#define FLAG_UNUSED_0x490								0x490
#define FLAG_UNUSED_0x491								0x491
#define FLAG_UNUSED_0x492								0x492
#define FLAG_UNUSED_0x493								0x493
#define FLAG_UNUSED_0x494								0x494
#define FLAG_UNUSED_0x495								0x495
#define FLAG_UNUSED_0x496								0x496
#define FLAG_UNUSED_0x497								0x497
#define FLAG_UNUSED_0x498								0x498
#define FLAG_UNUSED_0x499								0x499
#define FLAG_UNUSED_0x49A								0x49A
#define FLAG_UNUSED_0x49B								0x49B
#define FLAG_UNUSED_0x49C								0x49C
#define FLAG_UNUSED_0x49D								0x49D
#define FLAG_UNUSED_0x49E								0x49E
#define FLAG_UNUSED_0x49F								0x49F
#define FLAG_UNUSED_0x4A0								0x4A0
#define FLAG_UNUSED_0x4A1								0x4A1
#define FLAG_UNUSED_0x4A2								0x4A2
#define FLAG_UNUSED_0x4A3								0x4A3
#define FLAG_UNUSED_0x4A4								0x4A4
#define FLAG_UNUSED_0x4A5								0x4A5
#define FLAG_UNUSED_0x4A6								0x4A6
#define FLAG_UNUSED_0x4A7								0x4A7
#define FLAG_UNUSED_0x4A8								0x4A8
#define FLAG_UNUSED_0x4A9								0x4A9
#define FLAG_UNUSED_0x4AA								0x4AA
#define FLAG_UNUSED_0x4AB								0x4AB
#define FLAG_UNUSED_0x4AC								0x4AC
#define FLAG_UNUSED_0x4AD								0x4AD
#define FLAG_UNUSED_0x4AE								0x4AE
#define FLAG_UNUSED_0x4AF								0x4AF
#define FLAG_UNUSED_0x4B0								0x4B0
#define FLAG_UNUSED_0x4B1								0x4B1
#define FLAG_UNUSED_0x4B2								0x4B2
#define FLAG_UNUSED_0x4B3								0x4B3
#define FLAG_UNUSED_0x4B4								0x4B4
#define FLAG_UNUSED_0x4B5								0x4B5
#define FLAG_UNUSED_0x4B6								0x4B6
#define FLAG_UNUSED_0x4B7								0x4B7
#define FLAG_UNUSED_0x4B8								0x4B8
#define FLAG_UNUSED_0x4B9								0x4B9
#define FLAG_UNUSED_0x4BA								0x4BA
#define FLAG_UNUSED_0x4BB								0x4BB
#define FLAG_UNUSED_0x4BC								0x4BC
#define FLAG_UNUSED_0x4BD								0x4BD
#define FLAG_UNUSED_0x4BE								0x4BE
#define FLAG_UNUSED_0x4BF								0x4BF
#define FLAG_UNUSED_0x4C0								0x4C0
#define FLAG_UNUSED_0x4C1								0x4C1
#define FLAG_UNUSED_0x4C2								0x4C2
#define FLAG_UNUSED_0x4C3								0x4C3
#define FLAG_UNUSED_0x4C4								0x4C4
#define FLAG_UNUSED_0x4C5								0x4C5
#define FLAG_UNUSED_0x4C6								0x4C6
#define FLAG_UNUSED_0x4C7								0x4C7
#define FLAG_UNUSED_0x4C8								0x4C8
#define FLAG_UNUSED_0x4C9								0x4C9
#define FLAG_UNUSED_0x4CA								0x4CA
#define FLAG_UNUSED_0x4CB								0x4CB
#define FLAG_UNUSED_0x4CC								0x4CC
#define FLAG_UNUSED_0x4CD								0x4CD
#define FLAG_UNUSED_0x4CE								0x4CE
#define FLAG_UNUSED_0x4CF								0x4CF
#define FLAG_UNUSED_0x4D0								0x4D0
#define FLAG_UNUSED_0x4D1								0x4D1
#define FLAG_UNUSED_0x4D2								0x4D2
#define FLAG_UNUSED_0x4D3								0x4D3
#define FLAG_UNUSED_0x4D4								0x4D4
#define FLAG_UNUSED_0x4D5								0x4D5
#define FLAG_UNUSED_0x4D6								0x4D6
#define FLAG_UNUSED_0x4D7								0x4D7
#define FLAG_UNUSED_0x4D8								0x4D8
#define FLAG_UNUSED_0x4D9								0x4D9
#define FLAG_UNUSED_0x4DA								0x4DA
#define FLAG_UNUSED_0x4DB								0x4DB
#define FLAG_UNUSED_0x4DC								0x4DC
#define FLAG_UNUSED_0x4DD								0x4DD
#define FLAG_UNUSED_0x4DE								0x4DE
#define FLAG_UNUSED_0x4DF								0x4DF
#define FLAG_UNUSED_0x4E0								0x4E0
#define FLAG_UNUSED_0x4E1								0x4E1
#define FLAG_UNUSED_0x4E2								0x4E2
#define FLAG_UNUSED_0x4E3								0x4E3
#define FLAG_UNUSED_0x4E4								0x4E4
#define FLAG_UNUSED_0x4E5								0x4E5
#define FLAG_UNUSED_0x4E6								0x4E6
#define FLAG_UNUSED_0x4E7								0x4E7
#define FLAG_UNUSED_0x4E8								0x4E8
#define FLAG_UNUSED_0x4E9								0x4E9
#define FLAG_UNUSED_0x4EA								0x4EA
#define FLAG_UNUSED_0x4EB								0x4EB
#define FLAG_UNUSED_0x4EC								0x4EC
#define FLAG_UNUSED_0x4ED								0x4ED
#define FLAG_UNUSED_0x4EE								0x4EE
#define FLAG_UNUSED_0x4EF								0x4EF
#define FLAG_UNUSED_0x4F0								0x4F0
#define FLAG_UNUSED_0x4F1								0x4F1
#define FLAG_UNUSED_0x4F2								0x4F2
#define FLAG_UNUSED_0x4F3								0x4F3
#define FLAG_UNUSED_0x4F4								0x4F4
#define FLAG_UNUSED_0x4F5								0x4F5
#define FLAG_UNUSED_0x4F6								0x4F6
#define FLAG_UNUSED_0x4F7								0x4F7
#define FLAG_UNUSED_0x4F8								0x4F8
#define FLAG_UNUSED_0x4F9								0x4F9
#define FLAG_UNUSED_0x4FA								0x4FA
#define FLAG_UNUSED_0x4FB								0x4FB
#define FLAG_UNUSED_0x4FC								0x4FC
#define FLAG_UNUSED_0x4FD								0x4FD
#define FLAG_UNUSED_0x4FE								0x4FE
#define FLAG_UNUSED_0x4FF								0x4FF
#define FLAG_UNUSED_0x500								0x500
#define FLAG_UNUSED_0x501								0x501
#define FLAG_UNUSED_0x502								0x502
#define FLAG_UNUSED_0x503								0x503
#define FLAG_UNUSED_0x504								0x504
#define FLAG_UNUSED_0x505								0x505
#define FLAG_UNUSED_0x506								0x506
#define FLAG_UNUSED_0x507								0x507
#define FLAG_UNUSED_0x508								0x508
#define FLAG_UNUSED_0x509								0x509
#define FLAG_UNUSED_0x50A								0x50A
#define FLAG_UNUSED_0x50B								0x50B
#define FLAG_UNUSED_0x50C								0x50C
#define FLAG_UNUSED_0x50D								0x50D
#define FLAG_UNUSED_0x50E								0x50E
#define FLAG_UNUSED_0x50F								0x50F
#define FLAG_UNUSED_0x510								0x510
#define FLAG_UNUSED_0x511								0x511
#define FLAG_UNUSED_0x512								0x512
#define FLAG_UNUSED_0x513								0x513
#define FLAG_UNUSED_0x514								0x514
#define FLAG_UNUSED_0x515								0x515
#define FLAG_UNUSED_0x516								0x516
#define FLAG_UNUSED_0x517								0x517
#define FLAG_UNUSED_0x518								0x518
#define FLAG_UNUSED_0x519								0x519
#define FLAG_UNUSED_0x51A								0x51A
#define FLAG_UNUSED_0x51B								0x51B
#define FLAG_UNUSED_0x51C								0x51C
#define FLAG_UNUSED_0x51D								0x51D
#define FLAG_UNUSED_0x51E								0x51E
#define FLAG_UNUSED_0x51F								0x51F
#define FLAG_UNUSED_0x520								0x520
#define FLAG_UNUSED_0x521								0x521
#define FLAG_UNUSED_0x522								0x522
#define FLAG_UNUSED_0x523								0x523
#define FLAG_UNUSED_0x524								0x524
#define FLAG_UNUSED_0x525								0x525
#define FLAG_UNUSED_0x526								0x526
#define FLAG_UNUSED_0x527								0x527
#define FLAG_UNUSED_0x528								0x528
#define FLAG_UNUSED_0x529								0x529
#define FLAG_UNUSED_0x52A								0x52A
#define FLAG_UNUSED_0x52B								0x52B
#define FLAG_UNUSED_0x52C								0x52C
#define FLAG_UNUSED_0x52D								0x52D
#define FLAG_UNUSED_0x52E								0x52E
#define FLAG_UNUSED_0x52F								0x52F
#define FLAG_UNUSED_0x530								0x530
#define FLAG_UNUSED_0x531								0x531
#define FLAG_UNUSED_0x532								0x532
#define FLAG_UNUSED_0x533								0x533
#define FLAG_UNUSED_0x534								0x534
#define FLAG_UNUSED_0x535								0x535
#define FLAG_UNUSED_0x536								0x536
#define FLAG_UNUSED_0x537								0x537
#define FLAG_UNUSED_0x538								0x538
#define FLAG_UNUSED_0x539								0x539
#define FLAG_UNUSED_0x53A								0x53A
#define FLAG_UNUSED_0x53B								0x53B
#define FLAG_UNUSED_0x53C								0x53C
#define FLAG_UNUSED_0x53D								0x53D
#define FLAG_UNUSED_0x53E								0x53E
#define FLAG_UNUSED_0x53F								0x53F
#define FLAG_UNUSED_0x540								0x540
#define FLAG_UNUSED_0x541								0x541
#define FLAG_UNUSED_0x542								0x542
#define FLAG_UNUSED_0x543								0x543
#define FLAG_UNUSED_0x544								0x544
#define FLAG_UNUSED_0x545								0x545
#define FLAG_UNUSED_0x546								0x546
#define FLAG_UNUSED_0x547								0x547
#define FLAG_UNUSED_0x548								0x548
#define FLAG_UNUSED_0x549								0x549
#define FLAG_UNUSED_0x54A								0x54A
#define FLAG_UNUSED_0x54B								0x54B
#define FLAG_UNUSED_0x54C								0x54C
#define FLAG_UNUSED_0x54D								0x54D
#define FLAG_UNUSED_0x54E								0x54E
#define FLAG_UNUSED_0x54F								0x54F
#define FLAG_UNUSED_0x550								0x550
#define FLAG_UNUSED_0x551								0x551
#define FLAG_UNUSED_0x552								0x552
#define FLAG_UNUSED_0x553								0x553
#define FLAG_UNUSED_0x554								0x554
#define FLAG_UNUSED_0x555								0x555
#define FLAG_UNUSED_0x556								0x556
#define FLAG_UNUSED_0x557								0x557
#define FLAG_UNUSED_0x558								0x558
#define FLAG_UNUSED_0x559								0x559
#define FLAG_UNUSED_0x55A								0x55A
#define FLAG_UNUSED_0x55B								0x55B
#define FLAG_UNUSED_0x55C								0x55C
#define FLAG_UNUSED_0x55D								0x55D
#define FLAG_UNUSED_0x55E								0x55E
#define FLAG_UNUSED_0x55F								0x55F
#define FLAG_UNUSED_0x560								0x560
#define FLAG_UNUSED_0x561								0x561
#define FLAG_UNUSED_0x562								0x562
#define FLAG_UNUSED_0x563								0x563
#define FLAG_UNUSED_0x564								0x564
#define FLAG_UNUSED_0x565								0x565
#define FLAG_UNUSED_0x566								0x566
#define FLAG_UNUSED_0x567								0x567
#define FLAG_UNUSED_0x568								0x568
#define FLAG_UNUSED_0x569								0x569
#define FLAG_UNUSED_0x56A								0x56A
#define FLAG_UNUSED_0x56B								0x56B
#define FLAG_UNUSED_0x56C								0x56C
#define FLAG_UNUSED_0x56D								0x56D
#define FLAG_UNUSED_0x56E								0x56E
#define FLAG_UNUSED_0x56F								0x56F
#define FLAG_UNUSED_0x570								0x570
#define FLAG_UNUSED_0x571								0x571
#define FLAG_UNUSED_0x572								0x572
#define FLAG_UNUSED_0x573								0x573
#define FLAG_UNUSED_0x574								0x574
#define FLAG_UNUSED_0x575								0x575
#define FLAG_UNUSED_0x576								0x576
#define FLAG_UNUSED_0x577								0x577
#define FLAG_UNUSED_0x578								0x578
#define FLAG_UNUSED_0x579								0x579
#define FLAG_UNUSED_0x57A								0x57A
#define FLAG_UNUSED_0x57B								0x57B
#define FLAG_UNUSED_0x57C								0x57C
#define FLAG_UNUSED_0x57D								0x57D
#define FLAG_UNUSED_0x57E								0x57E
#define FLAG_UNUSED_0x57F								0x57F
#define FLAG_UNUSED_0x580								0x580
#define FLAG_UNUSED_0x581								0x581
#define FLAG_UNUSED_0x582								0x582
#define FLAG_UNUSED_0x583								0x583
#define FLAG_UNUSED_0x584								0x584
#define FLAG_UNUSED_0x585								0x585
#define FLAG_UNUSED_0x586								0x586
#define FLAG_UNUSED_0x587								0x587
#define FLAG_UNUSED_0x588								0x588
#define FLAG_UNUSED_0x589								0x589
#define FLAG_UNUSED_0x58A								0x58A
#define FLAG_UNUSED_0x58B								0x58B
#define FLAG_UNUSED_0x58C								0x58C
#define FLAG_UNUSED_0x58D								0x58D
#define FLAG_UNUSED_0x58E								0x58E
#define FLAG_UNUSED_0x58F								0x58F
#define FLAG_UNUSED_0x590								0x590
#define FLAG_UNUSED_0x591								0x591
#define FLAG_UNUSED_0x592								0x592
#define FLAG_UNUSED_0x593								0x593
#define FLAG_UNUSED_0x594								0x594
#define FLAG_UNUSED_0x595								0x595
#define FLAG_UNUSED_0x596								0x596
#define FLAG_UNUSED_0x597								0x597
#define FLAG_UNUSED_0x598								0x598
#define FLAG_UNUSED_0x599								0x599
#define FLAG_UNUSED_0x59A								0x59A
#define FLAG_UNUSED_0x59B								0x59B
#define FLAG_UNUSED_0x59C								0x59C
#define FLAG_UNUSED_0x59D								0x59D
#define FLAG_UNUSED_0x59E								0x59E
#define FLAG_UNUSED_0x59F								0x59F
#define FLAG_UNUSED_0x5A0								0x5A0
#define FLAG_UNUSED_0x5A1								0x5A1
#define FLAG_UNUSED_0x5A2								0x5A2
#define FLAG_UNUSED_0x5A3								0x5A3
#define FLAG_UNUSED_0x5A4								0x5A4
#define FLAG_UNUSED_0x5A5								0x5A5
#define FLAG_UNUSED_0x5A6								0x5A6
#define FLAG_UNUSED_0x5A7								0x5A7
#define FLAG_UNUSED_0x5A8								0x5A8
#define FLAG_UNUSED_0x5A9								0x5A9
#define FLAG_UNUSED_0x5AA								0x5AA
#define FLAG_UNUSED_0x5AB								0x5AB
#define FLAG_UNUSED_0x5AC								0x5AC
#define FLAG_UNUSED_0x5AD								0x5AD
#define FLAG_UNUSED_0x5AE								0x5AE
#define FLAG_UNUSED_0x5AF								0x5AF
#define FLAG_UNUSED_0x5B0								0x5B0
#define FLAG_UNUSED_0x5B1								0x5B1
#define FLAG_UNUSED_0x5B2								0x5B2
#define FLAG_UNUSED_0x5B3								0x5B3
#define FLAG_UNUSED_0x5B4								0x5B4
#define FLAG_UNUSED_0x5B5								0x5B5
#define FLAG_UNUSED_0x5B6								0x5B6
#define FLAG_UNUSED_0x5B7								0x5B7
#define FLAG_UNUSED_0x5B8								0x5B8
#define FLAG_UNUSED_0x5B9								0x5B9
#define FLAG_UNUSED_0x5BA								0x5BA
#define FLAG_UNUSED_0x5BB								0x5BB
#define FLAG_UNUSED_0x5BC								0x5BC
#define FLAG_UNUSED_0x5BD								0x5BD
#define FLAG_UNUSED_0x5BE								0x5BE
#define FLAG_UNUSED_0x5BF								0x5BF
#define FLAG_UNUSED_0x5C0								0x5C0
#define FLAG_UNUSED_0x5C1								0x5C1
#define FLAG_UNUSED_0x5C2								0x5C2
#define FLAG_UNUSED_0x5C3								0x5C3
#define FLAG_UNUSED_0x5C4								0x5C4
#define FLAG_UNUSED_0x5C5								0x5C5
#define FLAG_UNUSED_0x5C6								0x5C6
#define FLAG_UNUSED_0x5C7								0x5C7
#define FLAG_UNUSED_0x5C8								0x5C8
#define FLAG_UNUSED_0x5C9								0x5C9
#define FLAG_UNUSED_0x5CA								0x5CA
#define FLAG_UNUSED_0x5CB								0x5CB
#define FLAG_UNUSED_0x5CC								0x5CC
#define FLAG_UNUSED_0x5CD								0x5CD
#define FLAG_UNUSED_0x5CE								0x5CE
#define FLAG_UNUSED_0x5CF								0x5CF
#define FLAG_UNUSED_0x5D0								0x5D0
#define FLAG_UNUSED_0x5D1								0x5D1
#define FLAG_UNUSED_0x5D2								0x5D2
#define FLAG_UNUSED_0x5D3								0x5D3
#define FLAG_UNUSED_0x5D4								0x5D4
#define FLAG_UNUSED_0x5D5								0x5D5
#define FLAG_UNUSED_0x5D6								0x5D6
#define FLAG_UNUSED_0x5D7								0x5D7
#define FLAG_UNUSED_0x5D8								0x5D8
#define FLAG_UNUSED_0x5D9								0x5D9
#define FLAG_UNUSED_0x5DA								0x5DA
#define FLAG_UNUSED_0x5DB								0x5DB
#define FLAG_UNUSED_0x5DC								0x5DC
#define FLAG_UNUSED_0x5DD								0x5DD
#define FLAG_UNUSED_0x5DE								0x5DE
#define FLAG_UNUSED_0x5DF								0x5DF
#define FLAG_UNUSED_0x5E0								0x5E0
#define FLAG_UNUSED_0x5E1								0x5E1
#define FLAG_UNUSED_0x5E2								0x5E2
#define FLAG_UNUSED_0x5E3								0x5E3
#define FLAG_UNUSED_0x5E4								0x5E4
#define FLAG_UNUSED_0x5E5								0x5E5
#define FLAG_UNUSED_0x5E6								0x5E6
#define FLAG_UNUSED_0x5E7								0x5E7
#define FLAG_UNUSED_0x5E8								0x5E8
#define FLAG_UNUSED_0x5E9								0x5E9
#define FLAG_UNUSED_0x5EA								0x5EA
#define FLAG_UNUSED_0x5EB								0x5EB
#define FLAG_UNUSED_0x5EC								0x5EC
#define FLAG_UNUSED_0x5ED								0x5ED
#define FLAG_UNUSED_0x5EE								0x5EE
#define FLAG_UNUSED_0x5EF								0x5EF
#define FLAG_UNUSED_0x5F0								0x5F0
#define FLAG_UNUSED_0x5F1								0x5F1
#define FLAG_UNUSED_0x5F2								0x5F2
#define FLAG_UNUSED_0x5F3								0x5F3
#define FLAG_UNUSED_0x5F4								0x5F4
#define FLAG_UNUSED_0x5F5								0x5F5
#define FLAG_UNUSED_0x5F6								0x5F6
#define FLAG_UNUSED_0x5F7								0x5F7
#define FLAG_UNUSED_0x5F8								0x5F8
#define FLAG_UNUSED_0x5F9								0x5F9
#define FLAG_UNUSED_0x5FA								0x5FA
#define FLAG_UNUSED_0x5FB								0x5FB
#define FLAG_UNUSED_0x5FC								0x5FC
#define FLAG_UNUSED_0x5FD								0x5FD
#define FLAG_UNUSED_0x5FE								0x5FE
#define FLAG_UNUSED_0x5FF								0x5FF
#define FLAG_UNUSED_0x600								0x600
#define FLAG_UNUSED_0x601								0x601
#define FLAG_UNUSED_0x602								0x602
#define FLAG_UNUSED_0x603								0x603
#define FLAG_UNUSED_0x604								0x604
#define FLAG_UNUSED_0x605								0x605
#define FLAG_UNUSED_0x606								0x606
#define FLAG_UNUSED_0x607								0x607
#define FLAG_UNUSED_0x608								0x608
#define FLAG_UNUSED_0x609								0x609
#define FLAG_UNUSED_0x60A								0x60A
#define FLAG_UNUSED_0x60B								0x60B
#define FLAG_UNUSED_0x60C								0x60C
#define FLAG_UNUSED_0x60D								0x60D
#define FLAG_UNUSED_0x60E								0x60E
#define FLAG_UNUSED_0x60F								0x60F
#define FLAG_UNUSED_0x610								0x610
#define FLAG_UNUSED_0x611								0x611
#define FLAG_UNUSED_0x612								0x612
#define FLAG_UNUSED_0x613								0x613
#define FLAG_UNUSED_0x614								0x614
#define FLAG_UNUSED_0x615								0x615
#define FLAG_UNUSED_0x616								0x616
#define FLAG_UNUSED_0x617								0x617
#define FLAG_UNUSED_0x618								0x618
#define FLAG_UNUSED_0x619								0x619
#define FLAG_UNUSED_0x61A								0x61A
#define FLAG_UNUSED_0x61B								0x61B
#define FLAG_UNUSED_0x61C								0x61C
#define FLAG_UNUSED_0x61D								0x61D
#define FLAG_UNUSED_0x61E								0x61E
#define FLAG_UNUSED_0x61F								0x61F
#define FLAG_UNUSED_0x620								0x620
#define FLAG_UNUSED_0x621								0x621
#define FLAG_UNUSED_0x622								0x622
#define FLAG_UNUSED_0x623								0x623
#define FLAG_UNUSED_0x624								0x624
#define FLAG_UNUSED_0x625								0x625
#define FLAG_UNUSED_0x626								0x626
#define FLAG_UNUSED_0x627								0x627
#define FLAG_UNUSED_0x628								0x628
#define FLAG_UNUSED_0x629								0x629
#define FLAG_UNUSED_0x62A								0x62A
#define FLAG_UNUSED_0x62B								0x62B
#define FLAG_UNUSED_0x62C								0x62C
#define FLAG_UNUSED_0x62D								0x62D
#define FLAG_UNUSED_0x62E								0x62E
#define FLAG_UNUSED_0x62F								0x62F
#define FLAG_UNUSED_0x630								0x630
#define FLAG_UNUSED_0x631								0x631
#define FLAG_UNUSED_0x632								0x632
#define FLAG_UNUSED_0x633								0x633
#define FLAG_UNUSED_0x634								0x634
#define FLAG_UNUSED_0x635								0x635
#define FLAG_UNUSED_0x636								0x636
#define FLAG_UNUSED_0x637								0x637
#define FLAG_UNUSED_0x638								0x638
#define FLAG_UNUSED_0x639								0x639
#define FLAG_UNUSED_0x63A								0x63A
#define FLAG_UNUSED_0x63B								0x63B
#define FLAG_UNUSED_0x63C								0x63C
#define FLAG_UNUSED_0x63D								0x63D
#define FLAG_UNUSED_0x63E								0x63E
#define FLAG_UNUSED_0x63F								0x63F
#define FLAG_UNUSED_0x640								0x640
#define FLAG_UNUSED_0x641								0x641
#define FLAG_UNUSED_0x642								0x642
#define FLAG_UNUSED_0x643								0x643
#define FLAG_UNUSED_0x644								0x644
#define FLAG_UNUSED_0x645								0x645
#define FLAG_UNUSED_0x646								0x646
#define FLAG_UNUSED_0x647								0x647
#define FLAG_UNUSED_0x648								0x648
#define FLAG_UNUSED_0x649								0x649
#define FLAG_UNUSED_0x64A								0x64A
#define FLAG_UNUSED_0x64B								0x64B
#define FLAG_UNUSED_0x64C								0x64C
#define FLAG_UNUSED_0x64D								0x64D
#define FLAG_UNUSED_0x64E								0x64E
#define FLAG_UNUSED_0x64F								0x64F
#define FLAG_UNUSED_0x650								0x650
#define FLAG_UNUSED_0x651								0x651
#define FLAG_UNUSED_0x652								0x652
#define FLAG_UNUSED_0x653								0x653
#define FLAG_UNUSED_0x654								0x654
#define FLAG_UNUSED_0x655								0x655
#define FLAG_UNUSED_0x656								0x656
#define FLAG_UNUSED_0x657								0x657
#define FLAG_UNUSED_0x658								0x658
#define FLAG_UNUSED_0x659								0x659
#define FLAG_UNUSED_0x65A								0x65A
#define FLAG_UNUSED_0x65B								0x65B
#define FLAG_UNUSED_0x65C								0x65C
#define FLAG_UNUSED_0x65D								0x65D
#define FLAG_UNUSED_0x65E								0x65E
#define FLAG_UNUSED_0x65F								0x65F
#define FLAG_UNUSED_0x660								0x660
#define FLAG_UNUSED_0x661								0x661
#define FLAG_UNUSED_0x662								0x662
#define FLAG_UNUSED_0x663								0x663
#define FLAG_UNUSED_0x664								0x664
#define FLAG_UNUSED_0x665								0x665
#define FLAG_UNUSED_0x666								0x666
#define FLAG_UNUSED_0x667								0x667
#define FLAG_UNUSED_0x668								0x668
#define FLAG_UNUSED_0x669								0x669
#define FLAG_UNUSED_0x66A								0x66A
#define FLAG_UNUSED_0x66B								0x66B
#define FLAG_UNUSED_0x66C								0x66C
#define FLAG_UNUSED_0x66D								0x66D
#define FLAG_UNUSED_0x66E								0x66E
#define FLAG_UNUSED_0x66F								0x66F
#define FLAG_UNUSED_0x670								0x670
#define FLAG_UNUSED_0x671								0x671
#define FLAG_UNUSED_0x672								0x672
#define FLAG_UNUSED_0x673								0x673
#define FLAG_UNUSED_0x674								0x674
#define FLAG_UNUSED_0x675								0x675
#define FLAG_UNUSED_0x676								0x676
#define FLAG_UNUSED_0x677								0x677
#define FLAG_UNUSED_0x678								0x678
#define FLAG_UNUSED_0x679								0x679
#define FLAG_UNUSED_0x67A								0x67A
#define FLAG_UNUSED_0x67B								0x67B
#define FLAG_UNUSED_0x67C								0x67C
#define FLAG_UNUSED_0x67D								0x67D
#define FLAG_UNUSED_0x67E								0x67E
#define FLAG_UNUSED_0x67F								0x67F
#define FLAG_UNUSED_0x680								0x680
#define FLAG_UNUSED_0x681								0x681
#define FLAG_UNUSED_0x682								0x682
#define FLAG_UNUSED_0x683								0x683
#define FLAG_UNUSED_0x684								0x684
#define FLAG_UNUSED_0x685								0x685
#define FLAG_UNUSED_0x686								0x686
#define FLAG_UNUSED_0x687								0x687
#define FLAG_UNUSED_0x688								0x688
#define FLAG_UNUSED_0x689								0x689
#define FLAG_UNUSED_0x68A								0x68A
#define FLAG_UNUSED_0x68B								0x68B
#define FLAG_UNUSED_0x68C								0x68C
#define FLAG_UNUSED_0x68D								0x68D
#define FLAG_UNUSED_0x68E								0x68E
#define FLAG_UNUSED_0x68F								0x68F
#define FLAG_UNUSED_0x690								0x690
#define FLAG_UNUSED_0x691								0x691
#define FLAG_UNUSED_0x692								0x692
#define FLAG_UNUSED_0x693								0x693
#define FLAG_UNUSED_0x694								0x694
#define FLAG_UNUSED_0x695								0x695
#define FLAG_UNUSED_0x696								0x696
#define FLAG_UNUSED_0x697								0x697
#define FLAG_UNUSED_0x698								0x698
#define FLAG_UNUSED_0x699								0x699
#define FLAG_UNUSED_0x69A								0x69A
#define FLAG_UNUSED_0x69B								0x69B
#define FLAG_UNUSED_0x69C								0x69C
#define FLAG_UNUSED_0x69D								0x69D
#define FLAG_UNUSED_0x69E								0x69E
#define FLAG_UNUSED_0x69F								0x69F
#define FLAG_UNUSED_0x6A0								0x6A0
#define FLAG_UNUSED_0x6A1								0x6A1
#define FLAG_UNUSED_0x6A2								0x6A2
#define FLAG_UNUSED_0x6A3								0x6A3
#define FLAG_UNUSED_0x6A4								0x6A4
#define FLAG_UNUSED_0x6A5								0x6A5
#define FLAG_UNUSED_0x6A6								0x6A6
#define FLAG_UNUSED_0x6A7								0x6A7
#define FLAG_UNUSED_0x6A8								0x6A8
#define FLAG_UNUSED_0x6A9								0x6A9
#define FLAG_UNUSED_0x6AA								0x6AA
#define FLAG_UNUSED_0x6AB								0x6AB
#define FLAG_UNUSED_0x6AC								0x6AC
#define FLAG_UNUSED_0x6AD								0x6AD
#define FLAG_UNUSED_0x6AE								0x6AE
#define FLAG_UNUSED_0x6AF								0x6AF
#define FLAG_UNUSED_0x6B0								0x6B0
#define FLAG_UNUSED_0x6B1								0x6B1
#define FLAG_UNUSED_0x6B2								0x6B2
#define FLAG_UNUSED_0x6B3								0x6B3
#define FLAG_UNUSED_0x6B4								0x6B4
#define FLAG_UNUSED_0x6B5								0x6B5
#define FLAG_UNUSED_0x6B6								0x6B6
#define FLAG_UNUSED_0x6B7								0x6B7
#define FLAG_UNUSED_0x6B8								0x6B8
#define FLAG_UNUSED_0x6B9								0x6B9
#define FLAG_UNUSED_0x6BA								0x6BA
#define FLAG_UNUSED_0x6BB								0x6BB
#define FLAG_UNUSED_0x6BC								0x6BC
#define FLAG_UNUSED_0x6BD								0x6BD
#define FLAG_UNUSED_0x6BE								0x6BE
#define FLAG_UNUSED_0x6BF								0x6BF
#define FLAG_UNUSED_0x6C0								0x6C0
#define FLAG_UNUSED_0x6C1								0x6C1
#define FLAG_UNUSED_0x6C2								0x6C2
#define FLAG_UNUSED_0x6C3								0x6C3
#define FLAG_UNUSED_0x6C4								0x6C4
#define FLAG_UNUSED_0x6C5								0x6C5
#define FLAG_UNUSED_0x6C6								0x6C6
#define FLAG_UNUSED_0x6C7								0x6C7
#define FLAG_UNUSED_0x6C8								0x6C8
#define FLAG_UNUSED_0x6C9								0x6C9
#define FLAG_UNUSED_0x6CA								0x6CA
#define FLAG_UNUSED_0x6CB								0x6CB
#define FLAG_UNUSED_0x6CC								0x6CC
#define FLAG_UNUSED_0x6CD								0x6CD
#define FLAG_UNUSED_0x6CE								0x6CE
#define FLAG_UNUSED_0x6CF								0x6CF
#define FLAG_UNUSED_0x6D0								0x6D0
#define FLAG_UNUSED_0x6D1								0x6D1
#define FLAG_UNUSED_0x6D2								0x6D2
#define FLAG_UNUSED_0x6D3								0x6D3
#define FLAG_UNUSED_0x6D4								0x6D4
#define FLAG_UNUSED_0x6D5								0x6D5
#define FLAG_UNUSED_0x6D6								0x6D6
#define FLAG_UNUSED_0x6D7								0x6D7
#define FLAG_UNUSED_0x6D8								0x6D8
#define FLAG_UNUSED_0x6D9								0x6D9
#define FLAG_UNUSED_0x6DA								0x6DA
#define FLAG_UNUSED_0x6DB								0x6DB
#define FLAG_UNUSED_0x6DC								0x6DC
#define FLAG_UNUSED_0x6DD								0x6DD
#define FLAG_UNUSED_0x6DE								0x6DE
#define FLAG_UNUSED_0x6DF								0x6DF
#define FLAG_UNUSED_0x6E0								0x6E0
#define FLAG_UNUSED_0x6E1								0x6E1
#define FLAG_UNUSED_0x6E2								0x6E2
#define FLAG_UNUSED_0x6E3								0x6E3
#define FLAG_UNUSED_0x6E4								0x6E4
#define FLAG_UNUSED_0x6E5								0x6E5
#define FLAG_UNUSED_0x6E6								0x6E6
#define FLAG_UNUSED_0x6E7								0x6E7
#define FLAG_UNUSED_0x6E8								0x6E8
#define FLAG_UNUSED_0x6E9								0x6E9
#define FLAG_UNUSED_0x6EA								0x6EA
#define FLAG_UNUSED_0x6EB								0x6EB
#define FLAG_UNUSED_0x6EC								0x6EC
#define FLAG_UNUSED_0x6ED								0x6ED
#define FLAG_UNUSED_0x6EE								0x6EE
#define FLAG_UNUSED_0x6EF								0x6EF
#define FLAG_UNUSED_0x6F0								0x6F0
#define FLAG_UNUSED_0x6F1								0x6F1
#define FLAG_UNUSED_0x6F2								0x6F2
#define FLAG_UNUSED_0x6F3								0x6F3
#define FLAG_UNUSED_0x6F4								0x6F4
#define FLAG_UNUSED_0x6F5								0x6F5
#define FLAG_UNUSED_0x6F6								0x6F6
#define FLAG_UNUSED_0x6F7								0x6F7
#define FLAG_UNUSED_0x6F8								0x6F8
#define FLAG_UNUSED_0x6F9								0x6F9
#define FLAG_UNUSED_0x6FA								0x6FA
#define FLAG_UNUSED_0x6FB								0x6FB
#define FLAG_UNUSED_0x6FC								0x6FC
#define FLAG_UNUSED_0x6FD								0x6FD
#define FLAG_UNUSED_0x6FE								0x6FE
#define FLAG_UNUSED_0x6FF								0x6FF
#define FLAG_UNUSED_0x700								0x700
#define FLAG_UNUSED_0x701								0x701
#define FLAG_UNUSED_0x702								0x702
#define FLAG_UNUSED_0x703								0x703
#define FLAG_UNUSED_0x704								0x704
#define FLAG_UNUSED_0x705								0x705
#define FLAG_UNUSED_0x706								0x706
#define FLAG_UNUSED_0x707								0x707
#define FLAG_UNUSED_0x708								0x708
#define FLAG_UNUSED_0x709								0x709
#define FLAG_UNUSED_0x70A								0x70A
#define FLAG_UNUSED_0x70B								0x70B
#define FLAG_UNUSED_0x70C								0x70C
#define FLAG_UNUSED_0x70D								0x70D
#define FLAG_UNUSED_0x70E								0x70E
#define FLAG_UNUSED_0x70F								0x70F
#define FLAG_UNUSED_0x710								0x710
#define FLAG_UNUSED_0x711								0x711
#define FLAG_UNUSED_0x712								0x712
#define FLAG_UNUSED_0x713								0x713
#define FLAG_UNUSED_0x714								0x714
#define FLAG_UNUSED_0x715								0x715
#define FLAG_UNUSED_0x716								0x716
#define FLAG_UNUSED_0x717								0x717
#define FLAG_UNUSED_0x718								0x718
#define FLAG_UNUSED_0x719								0x719
#define FLAG_UNUSED_0x71A								0x71A
#define FLAG_UNUSED_0x71B								0x71B
#define FLAG_UNUSED_0x71C								0x71C
#define FLAG_UNUSED_0x71D								0x71D
#define FLAG_UNUSED_0x71E								0x71E
#define FLAG_UNUSED_0x71F								0x71F
#define FLAG_UNUSED_0x720								0x720
#define FLAG_UNUSED_0x721								0x721
#define FLAG_UNUSED_0x722								0x722
#define FLAG_UNUSED_0x723								0x723
#define FLAG_UNUSED_0x724								0x724
#define FLAG_UNUSED_0x725								0x725
#define FLAG_UNUSED_0x726								0x726
#define FLAG_UNUSED_0x727								0x727
#define FLAG_UNUSED_0x728								0x728
#define FLAG_UNUSED_0x729								0x729
#define FLAG_UNUSED_0x72A								0x72A
#define FLAG_UNUSED_0x72B								0x72B
#define FLAG_UNUSED_0x72C								0x72C
#define FLAG_UNUSED_0x72D								0x72D
#define FLAG_UNUSED_0x72E								0x72E
#define FLAG_UNUSED_0x72F								0x72F
#define FLAG_UNUSED_0x730								0x730
#define FLAG_UNUSED_0x731								0x731
#define FLAG_UNUSED_0x732								0x732
#define FLAG_UNUSED_0x733								0x733
#define FLAG_UNUSED_0x734								0x734
#define FLAG_UNUSED_0x735								0x735
#define FLAG_UNUSED_0x736								0x736
#define FLAG_UNUSED_0x737								0x737
#define FLAG_UNUSED_0x738								0x738
#define FLAG_UNUSED_0x739								0x739
#define FLAG_UNUSED_0x73A								0x73A
#define FLAG_UNUSED_0x73B								0x73B
#define FLAG_UNUSED_0x73C								0x73C
#define FLAG_UNUSED_0x73D								0x73D
#define FLAG_UNUSED_0x73E								0x73E
#define FLAG_UNUSED_0x73F								0x73F
#define FLAG_UNUSED_0x740								0x740
#define FLAG_UNUSED_0x741								0x741
#define FLAG_UNUSED_0x742								0x742
#define FLAG_UNUSED_0x743								0x743
#define FLAG_UNUSED_0x744								0x744
#define FLAG_UNUSED_0x745								0x745
#define FLAG_UNUSED_0x746								0x746
#define FLAG_UNUSED_0x747								0x747
#define FLAG_UNUSED_0x748								0x748
#define FLAG_UNUSED_0x749								0x749
#define FLAG_UNUSED_0x74A								0x74A
#define FLAG_UNUSED_0x74B								0x74B
#define FLAG_UNUSED_0x74C								0x74C
#define FLAG_UNUSED_0x74D								0x74D
#define FLAG_UNUSED_0x74E								0x74E
#define FLAG_UNUSED_0x74F								0x74F
#define FLAG_UNUSED_0x750								0x750
#define FLAG_UNUSED_0x751								0x751
#define FLAG_UNUSED_0x752								0x752
#define FLAG_UNUSED_0x753								0x753
#define FLAG_UNUSED_0x754								0x754
#define FLAG_UNUSED_0x755								0x755
#define FLAG_UNUSED_0x756								0x756
#define FLAG_UNUSED_0x757								0x757
#define FLAG_UNUSED_0x758								0x758
#define FLAG_UNUSED_0x759								0x759
#define FLAG_UNUSED_0x75A								0x75A
#define FLAG_UNUSED_0x75B								0x75B
#define FLAG_UNUSED_0x75C								0x75C
#define FLAG_UNUSED_0x75D								0x75D
#define FLAG_UNUSED_0x75E								0x75E
#define FLAG_UNUSED_0x75F								0x75F
#define FLAG_UNUSED_0x760								0x760
#define FLAG_UNUSED_0x761								0x761
#define FLAG_UNUSED_0x762								0x762
#define FLAG_UNUSED_0x763								0x763
#define FLAG_UNUSED_0x764								0x764
#define FLAG_UNUSED_0x765								0x765
#define FLAG_UNUSED_0x766								0x766
#define FLAG_UNUSED_0x767								0x767
#define FLAG_UNUSED_0x768								0x768
#define FLAG_UNUSED_0x769								0x769
#define FLAG_UNUSED_0x76A								0x76A
#define FLAG_UNUSED_0x76B								0x76B
#define FLAG_UNUSED_0x76C								0x76C
#define FLAG_UNUSED_0x76D								0x76D
#define FLAG_UNUSED_0x76E								0x76E
#define FLAG_UNUSED_0x76F								0x76F
#define FLAG_UNUSED_0x770								0x770
#define FLAG_UNUSED_0x771								0x771
#define FLAG_UNUSED_0x772								0x772
#define FLAG_UNUSED_0x773								0x773
#define FLAG_UNUSED_0x774								0x774
#define FLAG_UNUSED_0x775								0x775
#define FLAG_UNUSED_0x776								0x776
#define FLAG_UNUSED_0x777								0x777
#define FLAG_UNUSED_0x778								0x778
#define FLAG_UNUSED_0x779								0x779
#define FLAG_UNUSED_0x77A								0x77A
#define FLAG_UNUSED_0x77B								0x77B
#define FLAG_UNUSED_0x77C								0x77C
#define FLAG_UNUSED_0x77D								0x77D
#define FLAG_UNUSED_0x77E								0x77E
#define FLAG_UNUSED_0x77F								0x77F
#define FLAG_UNUSED_0x780								0x780
#define FLAG_UNUSED_0x781								0x781
#define FLAG_UNUSED_0x782								0x782
#define FLAG_UNUSED_0x783								0x783
#define FLAG_UNUSED_0x784								0x784
#define FLAG_UNUSED_0x785								0x785
#define FLAG_UNUSED_0x786								0x786
#define FLAG_UNUSED_0x787								0x787
#define FLAG_UNUSED_0x788								0x788
#define FLAG_UNUSED_0x789								0x789
#define FLAG_UNUSED_0x78A								0x78A
#define FLAG_UNUSED_0x78B								0x78B
#define FLAG_UNUSED_0x78C								0x78C
#define FLAG_UNUSED_0x78D								0x78D
#define FLAG_UNUSED_0x78E								0x78E
#define FLAG_UNUSED_0x78F								0x78F
#define FLAG_UNUSED_0x790								0x790
#define FLAG_UNUSED_0x791								0x791
#define FLAG_UNUSED_0x792								0x792
#define FLAG_UNUSED_0x793								0x793
#define FLAG_UNUSED_0x794								0x794
#define FLAG_UNUSED_0x795								0x795
#define FLAG_UNUSED_0x796								0x796
#define FLAG_UNUSED_0x797								0x797
#define FLAG_UNUSED_0x798								0x798
#define FLAG_UNUSED_0x799								0x799
#define FLAG_UNUSED_0x79A								0x79A
#define FLAG_UNUSED_0x79B								0x79B
#define FLAG_UNUSED_0x79C								0x79C
#define FLAG_UNUSED_0x79D								0x79D
#define FLAG_UNUSED_0x79E								0x79E
#define FLAG_UNUSED_0x79F								0x79F
#define FLAG_UNUSED_0x7A0								0x7A0
#define FLAG_UNUSED_0x7A1								0x7A1
#define FLAG_UNUSED_0x7A2								0x7A2
#define FLAG_UNUSED_0x7A3								0x7A3
#define FLAG_UNUSED_0x7A4								0x7A4
#define FLAG_UNUSED_0x7A5								0x7A5
#define FLAG_UNUSED_0x7A6								0x7A6
#define FLAG_UNUSED_0x7A7								0x7A7
#define FLAG_UNUSED_0x7A8								0x7A8
#define FLAG_UNUSED_0x7A9								0x7A9
#define FLAG_UNUSED_0x7AA								0x7AA
#define FLAG_UNUSED_0x7AB								0x7AB
#define FLAG_UNUSED_0x7AC								0x7AC
#define FLAG_UNUSED_0x7AD								0x7AD
#define FLAG_UNUSED_0x7AE								0x7AE
#define FLAG_UNUSED_0x7AF								0x7AF
#define FLAG_UNUSED_0x7B0								0x7B0
#define FLAG_UNUSED_0x7B1								0x7B1
#define FLAG_UNUSED_0x7B2								0x7B2
#define FLAG_UNUSED_0x7B3								0x7B3
#define FLAG_UNUSED_0x7B4								0x7B4
#define FLAG_UNUSED_0x7B5								0x7B5
#define FLAG_UNUSED_0x7B6								0x7B6
#define FLAG_UNUSED_0x7B7								0x7B7
#define FLAG_UNUSED_0x7B8								0x7B8
#define FLAG_UNUSED_0x7B9								0x7B9
#define FLAG_UNUSED_0x7BA								0x7BA
#define FLAG_UNUSED_0x7BB								0x7BB
#define FLAG_UNUSED_0x7BC								0x7BC
#define FLAG_UNUSED_0x7BD								0x7BD
#define FLAG_UNUSED_0x7BE								0x7BE
#define FLAG_UNUSED_0x7BF								0x7BF
#define FLAG_UNUSED_0x7C0								0x7C0
#define FLAG_UNUSED_0x7C1								0x7C1
#define FLAG_UNUSED_0x7C2								0x7C2
#define FLAG_UNUSED_0x7C3								0x7C3
#define FLAG_UNUSED_0x7C4								0x7C4
#define FLAG_UNUSED_0x7C5								0x7C5
#define FLAG_UNUSED_0x7C6								0x7C6
#define FLAG_UNUSED_0x7C7								0x7C7
#define FLAG_UNUSED_0x7C8								0x7C8
#define FLAG_UNUSED_0x7C9								0x7C9
#define FLAG_UNUSED_0x7CA								0x7CA
#define FLAG_UNUSED_0x7CB								0x7CB
#define FLAG_UNUSED_0x7CC								0x7CC
#define FLAG_UNUSED_0x7CD								0x7CD
#define FLAG_UNUSED_0x7CE								0x7CE
#define FLAG_UNUSED_0x7CF								0x7CF
#define FLAG_UNUSED_0x7D0								0x7D0
#define FLAG_UNUSED_0x7D1								0x7D1
#define FLAG_UNUSED_0x7D2								0x7D2
#define FLAG_UNUSED_0x7D3								0x7D3
#define FLAG_UNUSED_0x7D4								0x7D4
#define FLAG_UNUSED_0x7D5								0x7D5
#define FLAG_UNUSED_0x7D6								0x7D6
#define FLAG_UNUSED_0x7D7								0x7D7
#define FLAG_UNUSED_0x7D8								0x7D8
#define FLAG_UNUSED_0x7D9								0x7D9
#define FLAG_UNUSED_0x7DA								0x7DA
#define FLAG_UNUSED_0x7DB								0x7DB
#define FLAG_UNUSED_0x7DC								0x7DC
#define FLAG_UNUSED_0x7DD								0x7DD
#define FLAG_UNUSED_0x7DE								0x7DE
#define FLAG_UNUSED_0x7DF								0x7DF
#define FLAG_UNUSED_0x7E0								0x7E0
#define FLAG_UNUSED_0x7E1								0x7E1
#define FLAG_UNUSED_0x7E2								0x7E2
#define FLAG_UNUSED_0x7E3								0x7E3
#define FLAG_UNUSED_0x7E4								0x7E4
#define FLAG_UNUSED_0x7E5								0x7E5
#define FLAG_UNUSED_0x7E6								0x7E6
#define FLAG_UNUSED_0x7E7								0x7E7
#define FLAG_UNUSED_0x7E8								0x7E8
#define FLAG_UNUSED_0x7E9								0x7E9
#define FLAG_UNUSED_0x7EA								0x7EA
#define FLAG_UNUSED_0x7EB								0x7EB
#define FLAG_UNUSED_0x7EC								0x7EC
#define FLAG_UNUSED_0x7ED								0x7ED
#define FLAG_UNUSED_0x7EE								0x7EE
#define FLAG_UNUSED_0x7EF								0x7EF
#define FLAG_UNUSED_0x7F0								0x7F0
#define FLAG_UNUSED_0x7F1								0x7F1
#define FLAG_UNUSED_0x7F2								0x7F2
#define FLAG_UNUSED_0x7F3								0x7F3
#define FLAG_UNUSED_0x7F4								0x7F4
#define FLAG_UNUSED_0x7F5								0x7F5
#define FLAG_UNUSED_0x7F6								0x7F6
#define FLAG_UNUSED_0x7F7								0x7F7
#define FLAG_UNUSED_0x7F8								0x7F8
#define FLAG_UNUSED_0x7F9								0x7F9
#define FLAG_UNUSED_0x7FA								0x7FA
#define FLAG_UNUSED_0x7FB								0x7FB
#define FLAG_UNUSED_0x7FC								0x7FC
#define FLAG_UNUSED_0x7FD								0x7FD
#define FLAG_UNUSED_0x7FE								0x7FE
#define FLAG_UNUSED_0x7FF								0x7FF

#define FLAG_HIDDEN_ITEMS_START							0x800
#define FLAG_UNUSED_0x801								0x801
#define FLAG_UNUSED_0x802								0x802
#define FLAG_UNUSED_0x803								0x803
#define FLAG_UNUSED_0x804								0x804
#define FLAG_UNUSED_0x805								0x805
#define FLAG_UNUSED_0x806								0x806
#define FLAG_UNUSED_0x807								0x807
#define FLAG_UNUSED_0x808								0x808
#define FLAG_UNUSED_0x809								0x809
#define FLAG_UNUSED_0x80A								0x80A
#define FLAG_UNUSED_0x80B								0x80B
#define FLAG_UNUSED_0x80C								0x80C
#define FLAG_UNUSED_0x80D								0x80D
#define FLAG_UNUSED_0x80E								0x80E
#define FLAG_UNUSED_0x80F								0x80F
#define FLAG_UNUSED_0x810								0x810
#define FLAG_UNUSED_0x811								0x811
#define FLAG_UNUSED_0x812								0x812
#define FLAG_UNUSED_0x813								0x813
#define FLAG_UNUSED_0x814								0x814
#define FLAG_UNUSED_0x815								0x815
#define FLAG_UNUSED_0x816								0x816
#define FLAG_UNUSED_0x817								0x817
#define FLAG_UNUSED_0x818								0x818
#define FLAG_UNUSED_0x819								0x819
#define FLAG_UNUSED_0x81A								0x81A
#define FLAG_UNUSED_0x81B								0x81B
#define FLAG_UNUSED_0x81C								0x81C
#define FLAG_UNUSED_0x81D								0x81D
#define FLAG_UNUSED_0x81E								0x81E
#define FLAG_UNUSED_0x81F								0x81F
#define FLAG_UNUSED_0x820								0x820
#define FLAG_UNUSED_0x821								0x821
#define FLAG_UNUSED_0x822								0x822
#define FLAG_UNUSED_0x823								0x823
#define FLAG_UNUSED_0x824								0x824
#define FLAG_UNUSED_0x825								0x825
#define FLAG_UNUSED_0x826								0x826
#define FLAG_UNUSED_0x827								0x827
#define FLAG_UNUSED_0x828								0x828
#define FLAG_UNUSED_0x829								0x829
#define FLAG_UNUSED_0x82A								0x82A
#define FLAG_UNUSED_0x82B								0x82B
#define FLAG_UNUSED_0x82C								0x82C
#define FLAG_UNUSED_0x82D								0x82D
#define FLAG_UNUSED_0x82E								0x82E
#define FLAG_UNUSED_0x82F								0x82F
#define FLAG_UNUSED_0x830								0x830
#define FLAG_UNUSED_0x831								0x831
#define FLAG_UNUSED_0x832								0x832
#define FLAG_UNUSED_0x833								0x833
#define FLAG_UNUSED_0x834								0x834
#define FLAG_UNUSED_0x835								0x835
#define FLAG_UNUSED_0x836								0x836
#define FLAG_UNUSED_0x837								0x837
#define FLAG_UNUSED_0x838								0x838
#define FLAG_UNUSED_0x839								0x839
#define FLAG_UNUSED_0x83A								0x83A
#define FLAG_UNUSED_0x83B								0x83B
#define FLAG_UNUSED_0x83C								0x83C
#define FLAG_UNUSED_0x83D								0x83D
#define FLAG_UNUSED_0x83E								0x83E
#define FLAG_UNUSED_0x83F								0x83F
#define FLAG_UNUSED_0x840								0x840
#define FLAG_UNUSED_0x841								0x841
#define FLAG_UNUSED_0x842								0x842
#define FLAG_UNUSED_0x843								0x843
#define FLAG_UNUSED_0x844								0x844
#define FLAG_UNUSED_0x845								0x845
#define FLAG_UNUSED_0x846								0x846
#define FLAG_UNUSED_0x847								0x847
#define FLAG_UNUSED_0x848								0x848
#define FLAG_UNUSED_0x849								0x849
#define FLAG_UNUSED_0x84A								0x84A
#define FLAG_UNUSED_0x84B								0x84B
#define FLAG_UNUSED_0x84C								0x84C
#define FLAG_UNUSED_0x84D								0x84D
#define FLAG_UNUSED_0x84E								0x84E
#define FLAG_UNUSED_0x84F								0x84F
#define FLAG_UNUSED_0x850								0x850
#define FLAG_UNUSED_0x851								0x851
#define FLAG_UNUSED_0x852								0x852
#define FLAG_UNUSED_0x853								0x853
#define FLAG_UNUSED_0x854								0x854
#define FLAG_UNUSED_0x855								0x855
#define FLAG_UNUSED_0x856								0x856
#define FLAG_UNUSED_0x857								0x857
#define FLAG_UNUSED_0x858								0x858
#define FLAG_UNUSED_0x859								0x859
#define FLAG_UNUSED_0x85A								0x85A
#define FLAG_UNUSED_0x85B								0x85B
#define FLAG_UNUSED_0x85C								0x85C
#define FLAG_UNUSED_0x85D								0x85D
#define FLAG_UNUSED_0x85E								0x85E
#define FLAG_UNUSED_0x85F								0x85F
#define FLAG_UNUSED_0x860								0x860
#define FLAG_UNUSED_0x861								0x861
#define FLAG_UNUSED_0x862								0x862
#define FLAG_UNUSED_0x863								0x863
#define FLAG_UNUSED_0x864								0x864
#define FLAG_UNUSED_0x865								0x865
#define FLAG_UNUSED_0x866								0x866
#define FLAG_UNUSED_0x867								0x867
#define FLAG_UNUSED_0x868								0x868
#define FLAG_UNUSED_0x869								0x869
#define FLAG_UNUSED_0x86A								0x86A
#define FLAG_UNUSED_0x86B								0x86B
#define FLAG_UNUSED_0x86C								0x86C
#define FLAG_UNUSED_0x86D								0x86D
#define FLAG_UNUSED_0x86E								0x86E
#define FLAG_UNUSED_0x86F								0x86F
#define FLAG_UNUSED_0x870								0x870
#define FLAG_UNUSED_0x871								0x871
#define FLAG_UNUSED_0x872								0x872
#define FLAG_UNUSED_0x873								0x873
#define FLAG_UNUSED_0x874								0x874
#define FLAG_UNUSED_0x875								0x875
#define FLAG_UNUSED_0x876								0x876
#define FLAG_UNUSED_0x877								0x877
#define FLAG_UNUSED_0x878								0x878
#define FLAG_UNUSED_0x879								0x879
#define FLAG_UNUSED_0x87A								0x87A
#define FLAG_UNUSED_0x87B								0x87B
#define FLAG_UNUSED_0x87C								0x87C
#define FLAG_UNUSED_0x87D								0x87D
#define FLAG_UNUSED_0x87E								0x87E
#define FLAG_UNUSED_0x87F								0x87F
#define FLAG_UNUSED_0x880								0x880
#define FLAG_UNUSED_0x881								0x881
#define FLAG_UNUSED_0x882								0x882
#define FLAG_UNUSED_0x883								0x883
#define FLAG_UNUSED_0x884								0x884
#define FLAG_UNUSED_0x885								0x885
#define FLAG_UNUSED_0x886								0x886
#define FLAG_UNUSED_0x887								0x887
#define FLAG_UNUSED_0x888								0x888
#define FLAG_UNUSED_0x889								0x889
#define FLAG_UNUSED_0x88A								0x88A
#define FLAG_UNUSED_0x88B								0x88B
#define FLAG_UNUSED_0x88C								0x88C
#define FLAG_UNUSED_0x88D								0x88D
#define FLAG_UNUSED_0x88E								0x88E
#define FLAG_UNUSED_0x88F								0x88F
#define FLAG_UNUSED_0x890								0x890
#define FLAG_UNUSED_0x891								0x891
#define FLAG_UNUSED_0x892								0x892
#define FLAG_UNUSED_0x893								0x893
#define FLAG_UNUSED_0x894								0x894
#define FLAG_UNUSED_0x895								0x895
#define FLAG_UNUSED_0x896								0x896
#define FLAG_UNUSED_0x897								0x897
#define FLAG_UNUSED_0x898								0x898
#define FLAG_UNUSED_0x899								0x899
#define FLAG_UNUSED_0x89A								0x89A
#define FLAG_UNUSED_0x89B								0x89B
#define FLAG_UNUSED_0x89C								0x89C
#define FLAG_UNUSED_0x89D								0x89D
#define FLAG_UNUSED_0x89E								0x89E
#define FLAG_UNUSED_0x89F								0x89F
#define FLAG_UNUSED_0x8A0								0x8A0
#define FLAG_UNUSED_0x8A1								0x8A1
#define FLAG_UNUSED_0x8A2								0x8A2
#define FLAG_UNUSED_0x8A3								0x8A3
#define FLAG_UNUSED_0x8A4								0x8A4
#define FLAG_UNUSED_0x8A5								0x8A5
#define FLAG_UNUSED_0x8A6								0x8A6
#define FLAG_UNUSED_0x8A7								0x8A7
#define FLAG_UNUSED_0x8A8								0x8A8
#define FLAG_UNUSED_0x8A9								0x8A9
#define FLAG_UNUSED_0x8AA								0x8AA
#define FLAG_UNUSED_0x8AB								0x8AB
#define FLAG_UNUSED_0x8AC								0x8AC
#define FLAG_UNUSED_0x8AD								0x8AD
#define FLAG_UNUSED_0x8AE								0x8AE
#define FLAG_UNUSED_0x8AF								0x8AF
#define FLAG_UNUSED_0x8B0								0x8B0
#define FLAG_UNUSED_0x8B1								0x8B1
#define FLAG_UNUSED_0x8B2								0x8B2
#define FLAG_UNUSED_0x8B3								0x8B3
#define FLAG_UNUSED_0x8B4								0x8B4
#define FLAG_UNUSED_0x8B5								0x8B5
#define FLAG_UNUSED_0x8B6								0x8B6
#define FLAG_UNUSED_0x8B7								0x8B7
#define FLAG_UNUSED_0x8B8								0x8B8
#define FLAG_UNUSED_0x8B9								0x8B9
#define FLAG_UNUSED_0x8BA								0x8BA
#define FLAG_UNUSED_0x8BB								0x8BB
#define FLAG_UNUSED_0x8BC								0x8BC
#define FLAG_UNUSED_0x8BD								0x8BD
#define FLAG_UNUSED_0x8BE								0x8BE
#define FLAG_UNUSED_0x8BF								0x8BF
#define FLAG_UNUSED_0x8C0								0x8C0
#define FLAG_UNUSED_0x8C1								0x8C1
#define FLAG_UNUSED_0x8C2								0x8C2
#define FLAG_UNUSED_0x8C3								0x8C3
#define FLAG_UNUSED_0x8C4								0x8C4
#define FLAG_UNUSED_0x8C5								0x8C5
#define FLAG_UNUSED_0x8C6								0x8C6
#define FLAG_UNUSED_0x8C7								0x8C7
#define FLAG_UNUSED_0x8C8								0x8C8
#define FLAG_UNUSED_0x8C9								0x8C9
#define FLAG_UNUSED_0x8CA								0x8CA
#define FLAG_UNUSED_0x8CB								0x8CB
#define FLAG_UNUSED_0x8CC								0x8CC
#define FLAG_UNUSED_0x8CD								0x8CD
#define FLAG_UNUSED_0x8CE								0x8CE
#define FLAG_UNUSED_0x8CF								0x8CF
#define FLAG_UNUSED_0x8D0								0x8D0
#define FLAG_UNUSED_0x8D1								0x8D1
#define FLAG_UNUSED_0x8D2								0x8D2
#define FLAG_UNUSED_0x8D3								0x8D3
#define FLAG_UNUSED_0x8D4								0x8D4
#define FLAG_UNUSED_0x8D5								0x8D5
#define FLAG_UNUSED_0x8D6								0x8D6
#define FLAG_UNUSED_0x8D7								0x8D7
#define FLAG_UNUSED_0x8D8								0x8D8
#define FLAG_UNUSED_0x8D9								0x8D9
#define FLAG_UNUSED_0x8DA								0x8DA
#define FLAG_UNUSED_0x8DB								0x8DB
#define FLAG_UNUSED_0x8DC								0x8DC
#define FLAG_UNUSED_0x8DD								0x8DD
#define FLAG_UNUSED_0x8DE								0x8DE
#define FLAG_UNUSED_0x8DF								0x8DF
#define FLAG_UNUSED_0x8E0								0x8E0
#define FLAG_UNUSED_0x8E1								0x8E1
#define FLAG_UNUSED_0x8E2								0x8E2
#define FLAG_UNUSED_0x8E3								0x8E3
#define FLAG_UNUSED_0x8E4								0x8E4
#define FLAG_UNUSED_0x8E5								0x8E5
#define FLAG_UNUSED_0x8E6								0x8E6
#define FLAG_UNUSED_0x8E7								0x8E7
#define FLAG_UNUSED_0x8E8								0x8E8
#define FLAG_UNUSED_0x8E9								0x8E9
#define FLAG_UNUSED_0x8EA								0x8EA
#define FLAG_UNUSED_0x8EB								0x8EB
#define FLAG_UNUSED_0x8EC								0x8EC
#define FLAG_UNUSED_0x8ED								0x8ED
#define FLAG_UNUSED_0x8EE								0x8EE
#define FLAG_UNUSED_0x8EF								0x8EF
#define FLAG_UNUSED_0x8F0								0x8F0
#define FLAG_UNUSED_0x8F1								0x8F1
#define FLAG_UNUSED_0x8F2								0x8F2
#define FLAG_UNUSED_0x8F3								0x8F3
#define FLAG_UNUSED_0x8F4								0x8F4
#define FLAG_UNUSED_0x8F5								0x8F5
#define FLAG_UNUSED_0x8F6								0x8F6
#define FLAG_UNUSED_0x8F7								0x8F7
#define FLAG_UNUSED_0x8F8								0x8F8
#define FLAG_UNUSED_0x8F9								0x8F9
#define FLAG_UNUSED_0x8FA								0x8FA
#define FLAG_UNUSED_0x8FB								0x8FB
#define FLAG_UNUSED_0x8FC								0x8FC
#define FLAG_UNUSED_0x8FD								0x8FD
#define FLAG_UNUSED_0x8FE								0x8FE
#define FLAG_UNUSED_0x8FF								0x8FF

// Trainer Flags
// Trainer flags occupy 0x500 - 0x85F, the last 9 of which are unused
// See constants/opponents.h. The values there + FLAG_TRAINER_FLAG_START are the flag IDs

#define TRAINER_FLAGS_START                                         0x900
#define TRAINER_FLAGS_END                                           (TRAINER_FLAGS_START + MAX_TRAINERS_COUNT - 1) // 0x85F

// System Flags

#define SYSTEM_FLAGS                                   (TRAINER_FLAGS_END + 1) // 0x860

#define FLAG_SYS_POKEMON_GET                         (SYSTEM_FLAGS + 0x0) // FLAG_0x860
#define FLAG_SYS_POKEDEX_GET                         (SYSTEM_FLAGS + 0x1)
#define FLAG_SYS_POKENAV_GET                         (SYSTEM_FLAGS + 0x2)
#define FLAG_SYS_GAME_CLEAR                          (SYSTEM_FLAGS + 0x4)
#define FLAG_SYS_CHAT_USED                           (SYSTEM_FLAGS + 0x5)
#define FLAG_SYS_HIPSTER_MEET                        (SYSTEM_FLAGS + 0x6)

// Badges
#define FLAG_BADGE01_GET                             (SYSTEM_FLAGS + 0x7)
#define FLAG_BADGE02_GET                             (SYSTEM_FLAGS + 0x8)
#define FLAG_BADGE03_GET                             (SYSTEM_FLAGS + 0x9)
#define FLAG_BADGE04_GET                             (SYSTEM_FLAGS + 0xA)
#define FLAG_BADGE05_GET                             (SYSTEM_FLAGS + 0xB)
#define FLAG_BADGE06_GET                             (SYSTEM_FLAGS + 0xC)
#define FLAG_BADGE07_GET                             (SYSTEM_FLAGS + 0xD)
#define FLAG_BADGE08_GET                             (SYSTEM_FLAGS + 0xE)
#define NUM_BADGES                                   (1 + FLAG_BADGE08_GET - FLAG_BADGE01_GET)

// Towns and Cities
#define FLAG_VISITED_LITTLEROOT_TOWN                (SYSTEM_FLAGS + 0xF)
#define FLAG_VISITED_OLDALE_TOWN                    (SYSTEM_FLAGS + 0x10)
#define FLAG_VISITED_DEWFORD_TOWN                   (SYSTEM_FLAGS + 0x11)
#define FLAG_VISITED_LAVARIDGE_TOWN                 (SYSTEM_FLAGS + 0x12)
#define FLAG_VISITED_FALLARBOR_TOWN                 (SYSTEM_FLAGS + 0x13)
#define FLAG_VISITED_VERDANTURF_TOWN                (SYSTEM_FLAGS + 0x14)
#define FLAG_VISITED_PACIFIDLOG_TOWN                (SYSTEM_FLAGS + 0x15)
#define FLAG_VISITED_PETALBURG_CITY                 (SYSTEM_FLAGS + 0x16)
#define FLAG_VISITED_SLATEPORT_CITY                 (SYSTEM_FLAGS + 0x17)
#define FLAG_VISITED_MAUVILLE_CITY                  (SYSTEM_FLAGS + 0x18)
#define FLAG_VISITED_RUSTBORO_CITY                  (SYSTEM_FLAGS + 0x19)
#define FLAG_VISITED_FORTREE_CITY                   (SYSTEM_FLAGS + 0x1A)
#define FLAG_VISITED_LILYCOVE_CITY                  (SYSTEM_FLAGS + 0x1B)
#define FLAG_VISITED_MOSSDEEP_CITY                  (SYSTEM_FLAGS + 0x1C)
#define FLAG_VISITED_SOOTOPOLIS_CITY                (SYSTEM_FLAGS + 0x1D)
#define FLAG_VISITED_EVER_GRANDE_CITY               (SYSTEM_FLAGS + 0x1E)

#define FLAG_IS_CHAMPION                            (SYSTEM_FLAGS + 0x1F) // Seems to be related to linking.
#define FLAG_NURSE_UNION_ROOM_REMINDER              (SYSTEM_FLAGS + 0x20)


#define FLAG_SYS_USE_FLASH                          (SYSTEM_FLAGS + 0x28)
#define FLAG_SYS_USE_STRENGTH                       (SYSTEM_FLAGS + 0x29)
#define FLAG_SYS_WEATHER_CTRL                       (SYSTEM_FLAGS + 0x2A)
#define FLAG_SYS_CYCLING_ROAD                       (SYSTEM_FLAGS + 0x2B)
#define FLAG_SYS_SAFARI_MODE                        (SYSTEM_FLAGS + 0x2C)
#define FLAG_SYS_CRUISE_MODE                        (SYSTEM_FLAGS + 0x2D)


#define FLAG_SYS_TV_HOME                            (SYSTEM_FLAGS + 0x30)
#define FLAG_SYS_TV_WATCH                           (SYSTEM_FLAGS + 0x31)
#define FLAG_SYS_TV_START                           (SYSTEM_FLAGS + 0x32)
#define FLAG_SYS_CHANGED_DEWFORD_TREND              (SYSTEM_FLAGS + 0x33)
#define FLAG_SYS_MIX_RECORD                         (SYSTEM_FLAGS + 0x34)
#define FLAG_SYS_CLOCK_SET                          (SYSTEM_FLAGS + 0x35)
#define FLAG_SYS_NATIONAL_DEX                       (SYSTEM_FLAGS + 0x36)
#define FLAG_SYS_CAVE_SHIP                          (SYSTEM_FLAGS + 0x37) // Unused Flag, leftover from R/S debug, presumably used by Emerald's debug too
#define FLAG_SYS_CAVE_WONDER                        (SYSTEM_FLAGS + 0x38) // Unused Flag, same as above
#define FLAG_SYS_CAVE_BATTLE                        (SYSTEM_FLAGS + 0x39) // Unused Flag, same as above
#define FLAG_SYS_SHOAL_TIDE                         (SYSTEM_FLAGS + 0x3A)
#define FLAG_SYS_RIBBON_GET                         (SYSTEM_FLAGS + 0x3B)

#define FLAG_LANDMARK_FLOWER_SHOP                   (SYSTEM_FLAGS + 0x3C)
#define FLAG_LANDMARK_MR_BRINEY_HOUSE               (SYSTEM_FLAGS + 0x3D)
#define FLAG_LANDMARK_ABANDONED_SHIP                (SYSTEM_FLAGS + 0x3E)
#define FLAG_LANDMARK_SEASHORE_HOUSE                (SYSTEM_FLAGS + 0x3F)
#define FLAG_LANDMARK_NEW_MAUVILLE                  (SYSTEM_FLAGS + 0x40)
#define FLAG_LANDMARK_OLD_LADY_REST_SHOP            (SYSTEM_FLAGS + 0x41)
#define FLAG_LANDMARK_TRICK_HOUSE                   (SYSTEM_FLAGS + 0x42)
#define FLAG_LANDMARK_WINSTRATE_FAMILY              (SYSTEM_FLAGS + 0x43)
#define FLAG_LANDMARK_GLASS_WORKSHOP                (SYSTEM_FLAGS + 0x44)
#define FLAG_LANDMARK_LANETTES_HOUSE                (SYSTEM_FLAGS + 0x45)
#define FLAG_LANDMARK_POKEMON_DAYCARE               (SYSTEM_FLAGS + 0x46)
#define FLAG_LANDMARK_SEAFLOOR_CAVERN               (SYSTEM_FLAGS + 0x47)
#define FLAG_LANDMARK_BATTLE_FRONTIER               (SYSTEM_FLAGS + 0x48)
#define FLAG_LANDMARK_SOUTHERN_ISLAND               (SYSTEM_FLAGS + 0x49)
#define FLAG_LANDMARK_FIERY_PATH                    (SYSTEM_FLAGS + 0x4A)

#define FLAG_SYS_PC_LANETTE                         (SYSTEM_FLAGS + 0x4B)
#define FLAG_SYS_MYSTERY_EVENT_ENABLE               (SYSTEM_FLAGS + 0x4C)
#define FLAG_SYS_ENC_UP_ITEM                        (SYSTEM_FLAGS + 0x4D)
#define FLAG_SYS_ENC_DOWN_ITEM                      (SYSTEM_FLAGS + 0x4E)
#define FLAG_SYS_BRAILLE_DIG                        (SYSTEM_FLAGS + 0x4F)
#define FLAG_SYS_REGIROCK_PUZZLE_COMPLETED          (SYSTEM_FLAGS + 0x50)
#define FLAG_SYS_BRAILLE_REGICE_COMPLETED           (SYSTEM_FLAGS + 0x51)
#define FLAG_SYS_REGISTEEL_PUZZLE_COMPLETED         (SYSTEM_FLAGS + 0x52)
#define FLAG_ENABLE_SHIP_SOUTHERN_ISLAND            (SYSTEM_FLAGS + 0x53)

#define FLAG_LANDMARK_POKEMON_LEAGUE                (SYSTEM_FLAGS + 0x54)
#define FLAG_LANDMARK_ISLAND_CAVE                   (SYSTEM_FLAGS + 0x55)
#define FLAG_LANDMARK_DESERT_RUINS                  (SYSTEM_FLAGS + 0x56)
#define FLAG_LANDMARK_FOSSIL_MANIACS_HOUSE          (SYSTEM_FLAGS + 0x57)
#define FLAG_LANDMARK_SCORCHED_SLAB                 (SYSTEM_FLAGS + 0x58)
#define FLAG_LANDMARK_ANCIENT_TOMB                  (SYSTEM_FLAGS + 0x59)
#define FLAG_LANDMARK_TUNNELERS_REST_HOUSE          (SYSTEM_FLAGS + 0x5A)
#define FLAG_LANDMARK_HUNTERS_HOUSE                 (SYSTEM_FLAGS + 0x5B)
#define FLAG_LANDMARK_SEALED_CHAMBER                (SYSTEM_FLAGS + 0x5C)

#define FLAG_SYS_TV_LATIAS_LATIOS                   (SYSTEM_FLAGS + 0x5D)

#define FLAG_LANDMARK_SKY_PILLAR                    (SYSTEM_FLAGS + 0x5E)

#define FLAG_SYS_SHOAL_ITEM                         (SYSTEM_FLAGS + 0x5F)
#define FLAG_SYS_B_DASH                             (SYSTEM_FLAGS + 0x60) // RECEIVED Running Shoes
#define FLAG_SYS_CTRL_OBJ_DELETE                    (SYSTEM_FLAGS + 0x61)
#define FLAG_SYS_RESET_RTC_ENABLE                   (SYSTEM_FLAGS + 0x62)

#define FLAG_LANDMARK_BERRY_MASTERS_HOUSE           (SYSTEM_FLAGS + 0x63)

#define FLAG_SYS_TOWER_SILVER                       (SYSTEM_FLAGS + 0x64)
#define FLAG_SYS_TOWER_GOLD                         (SYSTEM_FLAGS + 0x65)
#define FLAG_SYS_DOME_SILVER                        (SYSTEM_FLAGS + 0x66)
#define FLAG_SYS_DOME_GOLD                          (SYSTEM_FLAGS + 0x67)
#define FLAG_SYS_PALACE_SILVER                      (SYSTEM_FLAGS + 0x68)
#define FLAG_SYS_PALACE_GOLD                        (SYSTEM_FLAGS + 0x69)
#define FLAG_SYS_ARENA_SILVER                       (SYSTEM_FLAGS + 0x6A)
#define FLAG_SYS_ARENA_GOLD                         (SYSTEM_FLAGS + 0x6B)
#define FLAG_SYS_FACTORY_SILVER                     (SYSTEM_FLAGS + 0x6C)
#define FLAG_SYS_FACTORY_GOLD                       (SYSTEM_FLAGS + 0x6D)
#define FLAG_SYS_PIKE_SILVER                        (SYSTEM_FLAGS + 0x6E)
#define FLAG_SYS_PIKE_GOLD                          (SYSTEM_FLAGS + 0x6F)
#define FLAG_SYS_PYRAMID_SILVER                     (SYSTEM_FLAGS + 0x70)
#define FLAG_SYS_PYRAMID_GOLD                       (SYSTEM_FLAGS + 0x71)
#define FLAG_SYS_FRONTIER_PASS                      (SYSTEM_FLAGS + 0x72)

#define FLAG_MAP_SCRIPT_CHECKED_DEOXYS              (SYSTEM_FLAGS + 0x73)
#define FLAG_DEOXYS_ROCK_COMPLETE                   (SYSTEM_FLAGS + 0x74)
#define FLAG_ENABLE_SHIP_BIRTH_ISLAND               (SYSTEM_FLAGS + 0x75)
#define FLAG_ENABLE_SHIP_FARAWAY_ISLAND             (SYSTEM_FLAGS + 0x76)

#define FLAG_SHOWN_BOX_WAS_FULL_MESSAGE             (SYSTEM_FLAGS + 0x77)

#define FLAG_ARRIVED_ON_FARAWAY_ISLAND              (SYSTEM_FLAGS + 0x78)
#define FLAG_ARRIVED_AT_MARINE_CAVE_EMERGE_SPOT     (SYSTEM_FLAGS + 0x79)
#define FLAG_ARRIVED_AT_TERRA_CAVE_ENTRANCE         (SYSTEM_FLAGS + 0x7A)

#define FLAG_SYS_MYSTERY_GIFT_ENABLE                (SYSTEM_FLAGS + 0x7B)

#define FLAG_ENTERED_MIRAGE_TOWER                   (SYSTEM_FLAGS + 0x7C)
#define FLAG_LANDMARK_ALTERING_CAVE                 (SYSTEM_FLAGS + 0x7D)
#define FLAG_LANDMARK_DESERT_UNDERPASS              (SYSTEM_FLAGS + 0x7E)
#define FLAG_LANDMARK_ARTISAN_CAVE                  (SYSTEM_FLAGS + 0x7F)
#define FLAG_ENABLE_SHIP_NAVEL_ROCK                 (SYSTEM_FLAGS + 0x80)
#define FLAG_ARRIVED_AT_NAVEL_ROCK                  (SYSTEM_FLAGS + 0x81)
#define FLAG_LANDMARK_TRAINER_HILL                  (SYSTEM_FLAGS + 0x82)


#define FLAG_RECEIVED_POKEDEX_FROM_BIRCH            (SYSTEM_FLAGS + 0x84)

#define FLAG_UNUSED_0x900                           (SYSTEM_FLAGS + 0xA0) // Unused Flag
#define FLAG_UNUSED_0x901                           (SYSTEM_FLAGS + 0xA1) // Unused Flag
#define FLAG_UNUSED_0x902                           (SYSTEM_FLAGS + 0xA2) // Unused Flag
#define FLAG_UNUSED_0x903                           (SYSTEM_FLAGS + 0xA3) // Unused Flag
#define FLAG_UNUSED_0x904                           (SYSTEM_FLAGS + 0xA4) // Unused Flag
#define FLAG_UNUSED_0x905                           (SYSTEM_FLAGS + 0xA5) // Unused Flag
#define FLAG_UNUSED_0x906                           (SYSTEM_FLAGS + 0xA6) // Unused Flag
#define FLAG_UNUSED_0x907                           (SYSTEM_FLAGS + 0xA7) // Unused Flag
#define FLAG_UNUSED_0x908                           (SYSTEM_FLAGS + 0xA8) // Unused Flag
#define FLAG_UNUSED_0x909                           (SYSTEM_FLAGS + 0xA9) // Unused Flag
#define FLAG_UNUSED_0x90A                           (SYSTEM_FLAGS + 0xAA) // Unused Flag
#define FLAG_UNUSED_0x90B                           (SYSTEM_FLAGS + 0xAB) // Unused Flag
#define FLAG_UNUSED_0x90C                           (SYSTEM_FLAGS + 0xAC) // Unused Flag
#define FLAG_UNUSED_0x90D                           (SYSTEM_FLAGS + 0xAD) // Unused Flag
#define FLAG_UNUSED_0x90E                           (SYSTEM_FLAGS + 0xAE) // Unused Flag
#define FLAG_UNUSED_0x90F                           (SYSTEM_FLAGS + 0xAF) // Unused Flag
#define FLAG_UNUSED_0x910                           (SYSTEM_FLAGS + 0xB0) // Unused Flag
#define FLAG_UNUSED_0x911                           (SYSTEM_FLAGS + 0xB1) // Unused Flag
#define FLAG_UNUSED_0x912                           (SYSTEM_FLAGS + 0xB2) // Unused Flag
#define FLAG_UNUSED_0x913                           (SYSTEM_FLAGS + 0xB3) // Unused Flag
#define FLAG_UNUSED_0x914                           (SYSTEM_FLAGS + 0xB4) // Unused Flag
#define FLAG_UNUSED_0x915                           (SYSTEM_FLAGS + 0xB5) // Unused Flag
#define FLAG_UNUSED_0x916                           (SYSTEM_FLAGS + 0xB6) // Unused Flag
#define FLAG_UNUSED_0x917                           (SYSTEM_FLAGS + 0xB7) // Unused Flag
#define FLAG_UNUSED_0x918                           (SYSTEM_FLAGS + 0xB8) // Unused Flag
#define FLAG_UNUSED_0x919                           (SYSTEM_FLAGS + 0xB9) // Unused Flag
#define FLAG_UNUSED_0x91A                           (SYSTEM_FLAGS + 0xBA) // Unused Flag
#define FLAG_UNUSED_0x91B                           (SYSTEM_FLAGS + 0xBB) // Unused Flag
#define FLAG_UNUSED_0x91C                           (SYSTEM_FLAGS + 0xBC) // Unused Flag
#define FLAG_UNUSED_0x91D                           (SYSTEM_FLAGS + 0xBD) // Unused Flag
#define FLAG_UNUSED_0x91E                           (SYSTEM_FLAGS + 0xBE) // Unused Flag
#define FLAG_UNUSED_0x91F                           (SYSTEM_FLAGS + 0xBF) // Unused Flag

// Daily Flags
// These flags are cleared once per day
// The start and end are byte-aligned because the flags are cleared in byte increments
#define DAILY_FLAGS_START                           (FLAG_UNUSED_0x91F + (8 - FLAG_UNUSED_0x91F % 8))
#define FLAG_UNUSED_0x920                           (DAILY_FLAGS_START + 0x0)  // Unused Flag
#define FLAG_DAILY_CONTEST_LOBBY_RECEIVED_BERRY     (DAILY_FLAGS_START + 0x1)
#define FLAG_DAILY_SECRET_BASE                      (DAILY_FLAGS_START + 0x2)
#define FLAG_UNUSED_0x923                           (DAILY_FLAGS_START + 0x3)  // Unused Flag
#define FLAG_UNUSED_0x924                           (DAILY_FLAGS_START + 0x4)  // Unused Flag
#define FLAG_UNUSED_0x925                           (DAILY_FLAGS_START + 0x5)  // Unused Flag
#define FLAG_UNUSED_0x926                           (DAILY_FLAGS_START + 0x6)  // Unused Flag
#define FLAG_UNUSED_0x927                           (DAILY_FLAGS_START + 0x7)  // Unused Flag
#define FLAG_UNUSED_0x928                           (DAILY_FLAGS_START + 0x8)  // Unused Flag
#define FLAG_UNUSED_0x929                           (DAILY_FLAGS_START + 0x9)  // Unused Flag
#define FLAG_DAILY_PICKED_LOTO_TICKET               (DAILY_FLAGS_START + 0xA)
#define FLAG_DAILY_ROUTE_114_RECEIVED_BERRY         (DAILY_FLAGS_START + 0xB)
#define FLAG_DAILY_ROUTE_111_RECEIVED_BERRY         (DAILY_FLAGS_START + 0xC)
#define FLAG_DAILY_BERRY_MASTER_RECEIVED_BERRY      (DAILY_FLAGS_START + 0xD)
#define FLAG_DAILY_ROUTE_120_RECEIVED_BERRY         (DAILY_FLAGS_START + 0xE)
#define FLAG_DAILY_LILYCOVE_RECEIVED_BERRY          (DAILY_FLAGS_START + 0xF)
#define FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY       (DAILY_FLAGS_START + 0x10)
#define FLAG_DAILY_BERRY_MASTERS_WIFE               (DAILY_FLAGS_START + 0x11)
#define FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY        (DAILY_FLAGS_START + 0x12)
#define FLAG_UNUSED_0x933                           (DAILY_FLAGS_START + 0x13) // Unused Flag
#define FLAG_DAILY_APPRENTICE_LEAVES                (DAILY_FLAGS_START + 0x14)

#define FLAG_UNUSED_0x935                           (DAILY_FLAGS_START + 0x15) // Unused Flag
#define FLAG_UNUSED_0x936                           (DAILY_FLAGS_START + 0x16) // Unused Flag
#define FLAG_UNUSED_0x937                           (DAILY_FLAGS_START + 0x17) // Unused Flag
#define FLAG_UNUSED_0x938                           (DAILY_FLAGS_START + 0x18) // Unused Flag
#define FLAG_UNUSED_0x939                           (DAILY_FLAGS_START + 0x19) // Unused Flag
#define FLAG_UNUSED_0x93A                           (DAILY_FLAGS_START + 0x1A) // Unused Flag
#define FLAG_UNUSED_0x93B                           (DAILY_FLAGS_START + 0x1B) // Unused Flag
#define FLAG_UNUSED_0x93C                           (DAILY_FLAGS_START + 0x1C) // Unused Flag
#define FLAG_UNUSED_0x93D                           (DAILY_FLAGS_START + 0x1D) // Unused Flag
#define FLAG_UNUSED_0x93E                           (DAILY_FLAGS_START + 0x1E) // Unused Flag
#define FLAG_UNUSED_0x93F                           (DAILY_FLAGS_START + 0x1F) // Unused Flag
#define FLAG_UNUSED_0x940                           (DAILY_FLAGS_START + 0x20) // Unused Flag
#define FLAG_UNUSED_0x941                           (DAILY_FLAGS_START + 0x21) // Unused Flag
#define FLAG_UNUSED_0x942                           (DAILY_FLAGS_START + 0x22) // Unused Flag
#define FLAG_UNUSED_0x943                           (DAILY_FLAGS_START + 0x23) // Unused Flag
#define FLAG_UNUSED_0x944                           (DAILY_FLAGS_START + 0x24) // Unused Flag
#define FLAG_UNUSED_0x945                           (DAILY_FLAGS_START + 0x25) // Unused Flag
#define FLAG_UNUSED_0x946                           (DAILY_FLAGS_START + 0x26) // Unused Flag
#define FLAG_UNUSED_0x947                           (DAILY_FLAGS_START + 0x27) // Unused Flag
#define FLAG_UNUSED_0x948                           (DAILY_FLAGS_START + 0x28) // Unused Flag
#define FLAG_UNUSED_0x949                           (DAILY_FLAGS_START + 0x29) // Unused Flag
#define FLAG_UNUSED_0x94A                           (DAILY_FLAGS_START + 0x2A) // Unused Flag
#define FLAG_UNUSED_0x94B                           (DAILY_FLAGS_START + 0x2B) // Unused Flag
#define FLAG_UNUSED_0x94C                           (DAILY_FLAGS_START + 0x2C) // Unused Flag
#define FLAG_UNUSED_0x94D                           (DAILY_FLAGS_START + 0x2D) // Unused Flag
#define FLAG_UNUSED_0x94E                           (DAILY_FLAGS_START + 0x2E) // Unused Flag
#define FLAG_UNUSED_0x94F                           (DAILY_FLAGS_START + 0x2F) // Unused Flag
#define FLAG_UNUSED_0x950                           (DAILY_FLAGS_START + 0x30) // Unused Flag
#define FLAG_UNUSED_0x951                           (DAILY_FLAGS_START + 0x31) // Unused Flag
#define FLAG_UNUSED_0x952                           (DAILY_FLAGS_START + 0x32) // Unused Flag
#define FLAG_UNUSED_0x953                           (DAILY_FLAGS_START + 0x33) // Unused Flag
#define FLAG_UNUSED_0x954                           (DAILY_FLAGS_START + 0x34) // Unused Flag
#define FLAG_UNUSED_0x955                           (DAILY_FLAGS_START + 0x35) // Unused Flag
#define FLAG_UNUSED_0x956                           (DAILY_FLAGS_START + 0x36) // Unused Flag
#define FLAG_UNUSED_0x957                           (DAILY_FLAGS_START + 0x37) // Unused Flag
#define FLAG_UNUSED_0x958                           (DAILY_FLAGS_START + 0x38) // Unused Flag
#define FLAG_UNUSED_0x959                           (DAILY_FLAGS_START + 0x39) // Unused Flag
#define FLAG_UNUSED_0x95A                           (DAILY_FLAGS_START + 0x3A) // Unused Flag
#define FLAG_UNUSED_0x95B                           (DAILY_FLAGS_START + 0x3B) // Unused Flag
#define FLAG_UNUSED_0x95C                           (DAILY_FLAGS_START + 0x3C) // Unused Flag
#define FLAG_UNUSED_0x95D                           (DAILY_FLAGS_START + 0x3D) // Unused Flag
#define FLAG_UNUSED_0x95E                           (DAILY_FLAGS_START + 0x3E) // Unused Flag
#define FLAG_UNUSED_0x95F                           (DAILY_FLAGS_START + 0x3F) // Unused Flag
#define DAILY_FLAGS_END                             (FLAG_UNUSED_0x95F + (7 - FLAG_UNUSED_0x95F % 8))

#define FLAGS_COUNT (DAILY_FLAGS_END + 1)

// Special Flags (Stored in EWRAM (sSpecialFlags), not in the SaveBlock)
#define SPECIAL_FLAGS_START                     0x4000
#define FLAG_HIDE_MAP_NAME_POPUP                (SPECIAL_FLAGS_START + 0x0)
#define FLAG_DONT_TRANSITION_MUSIC              (SPECIAL_FLAGS_START + 0x1)
#define FLAG_ENABLE_MULTI_CORRIDOR_DOOR         (SPECIAL_FLAGS_START + 0x2)
#define FLAG_SPECIAL_FLAG_UNUSED_0x4003         (SPECIAL_FLAGS_START + 0x3) // Unused Flag
#define FLAG_STORING_ITEMS_IN_PYRAMID_BAG       (SPECIAL_FLAGS_START + 0x4)
// FLAG_SPECIAL_FLAG_0x4005 - 0x407F also exist and are unused
#define SPECIAL_FLAGS_END                       (SPECIAL_FLAGS_START + 0x7F)

#endif // GUARD_CONSTANTS_FLAGS_H
