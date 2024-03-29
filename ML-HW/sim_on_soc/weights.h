#ifndef __WEIGHTS_H__
#define __WEIGHTS_H__

#include <stdint.h>

#include "fixed32.h"

// [filter][in_channel]][idx]
const fixed32 conv0_weights[5][1][5] = {
    {
        {0xFE51,0xFDE7,0xF167,0xF18A,0xF561}
    },
    {
        {0xFCDB,0xFD2E,0x0548,0x007E,0x03A1}
    },
    {
        {0xF7B1,0xF5C7,0xEF4F,0xF27A,0xF6C4}
    },
    {
        {0x00E6,0x0221,0x02E5,0xF9AC,0xFBBE}
    },
    {
        {0x0E79,0x1837,0x1113,0x14A7,0x0A74}
    }
};

// [filter][in_channel]][idx]
const fixed32 conv1_weights[2][5][5] = {
    {
        {0x0706,0x1182,0x0CAF,0x0733,0xFF9A},
        {0xFD8F,0x01C5,0xFD16,0xFE06,0xFD49},
        {0x039A,0x0F87,0x16AD,0x0D15,0x02B3},
        {0x01DF,0x010F,0x0257,0xFDA1,0xFDE6},
        {0xFDB2,0xFBE9,0xFB4B,0xFE40,0xFEB8}
    },
    {
        {0x04A3,0x03D4,0x0442,0xFFBB,0xFED0},
        {0x0109,0x04E5,0x01E5,0x006D,0x031D},
        {0x0495,0xFFFF,0x0373,0x00B2,0x0131},
        {0x007E,0x0224,0x01B6,0x029D,0x018F},
        {0xD72B,0x0E22,0x138F,0x12B8,0x0C69}
    }
};

// [out][in]
const fixed32 fc0_weights[9][30] = {
    {0x07DA,0xF660,0xFCA0,0x1910,0x0059,0xF669,0x0205,0xF642,0xF972,0x01A6,0x03F8,0xFEAF,0xFEA6,0x0072,0xFF89,0x0207,0xF41B,0xF896,0xFD60,0x105B,0x0438,0xEED3,0x0A35,0xFD2A,0xEFB7,0x0627,0x0BDB,0x037D,0x09EE,0xF871},
    {0x04F4,0xF772,0xFCBA,0x109D,0x0301,0xFC62,0x019D,0xFB99,0xFF07,0xFF08,0xFD2C,0x001D,0x01FE,0xFE8E,0x01E6,0x0548,0xFB9C,0xFE3D,0xFF5B,0x076E,0xFF37,0xFA7D,0x0028,0xFE14,0xF3CF,0x009E,0x0743,0x03A5,0x04A3,0x020E},
    {0x0675,0x0299,0x024E,0x0D31,0xFB4F,0xF92F,0xFD68,0x05C2,0x06F4,0xF233,0x0172,0x0118,0x03EA,0xFD8C,0xFF4A,0x020E,0xF9C3,0x0042,0xF514,0x079E,0x0244,0x14B5,0xF4D6,0xF24D,0xEDD3,0x0BE2,0x0E91,0x05B9,0x1362,0xFC2D},
    {0x01B8,0x0324,0x02F6,0xFCD6,0x01CF,0x0337,0xFA27,0x09B7,0x024A,0xFA83,0xFD27,0x0021,0xFE1B,0x0099,0xFEBD,0x0431,0x05FE,0x0679,0x0328,0xF431,0xF4F2,0x0F65,0xF8F8,0x01CC,0x046F,0x0238,0xFD7B,0xFD32,0xF9E0,0x0210},
    {0xFCBA,0xFE76,0x00A9,0xF167,0xFAAE,0x091C,0x1334,0x03C1,0xFD1F,0xFD13,0x06A6,0xFC08,0x063C,0x0037,0xF8A7,0xF17A,0xF6A4,0x06C7,0x0618,0x1AD8,0x14DD,0xEE1C,0xFCC4,0xF3F0,0xF8FE,0x05C7,0x04F7,0xFA46,0x0792,0xFE9B},
    {0x021F,0xFF3D,0xFDE0,0xFAF8,0x0167,0x0579,0x0439,0x06C1,0x018F,0xFDB6,0xF919,0x040D,0x01BF,0xFE40,0x01A2,0x051B,0x0947,0x0751,0x018A,0xFC29,0xF7D0,0x09D6,0xF6AA,0xFA79,0x02D2,0xFA4A,0xFF61,0x0573,0xF914,0x0320},
    {0xFC8B,0x0355,0x02DC,0xF14C,0xF383,0xFC0F,0x065A,0x0458,0x09F0,0xFB9F,0x0573,0xFCA0,0x03F8,0x0592,0xFE36,0xF9C5,0xFBD4,0x004E,0xFC6F,0x07D9,0x0DF7,0x06C5,0xF87D,0xED88,0xFB32,0x0834,0x072B,0xFED5,0x13B1,0xFAF0},
    {0xFF65,0x0365,0x01A5,0xF5DC,0xFB98,0xFC6E,0xFFF2,0x0061,0x04E6,0xFFE7,0x00CD,0x014A,0xFD30,0x036C,0xFF02,0xFC99,0x0201,0xFC35,0xFC1B,0xFC75,0x029F,0x05BC,0xFFAF,0xFDC2,0x02F6,0xFFB1,0x006C,0x0038,0x03E4,0xFED1},
    {0xFB6E,0x0684,0x0211,0xEF07,0xF81E,0xFBB9,0xFD97,0xFD70,0x07A0,0x042E,0x07ED,0xFE2E,0xFBFA,0x047E,0xFD3E,0xF6DC,0xFDED,0xFCD5,0xFC9F,0xF5FA,0x0881,0x08E0,0x03A2,0x00C4,0x0562,0x0341,0xFB98,0xFAD5,0x06EB,0xF881}
};

// [out][in]
const fixed32 fc1_weights[5][9] = {
    {0x153A,0x088B,0xFF5F,0xF329,0x0DF2,0xF44B,0x026E,0xFB9E,0x00AD},
    {0x01DA,0x022C,0xEF56,0xFFC0,0xEFD7,0xFF42,0xEC85,0xFB13,0xFD4C},
    {0xFD0C,0x001B,0x11E2,0x054D,0xF219,0x026E,0x0D27,0x051C,0x0B0B},
    {0xEB51,0xF29B,0xEDD3,0x04BA,0x0B25,0x0383,0x04BF,0x02D0,0x0C5E},
    {0x051C,0x0A09,0x1748,0x0552,0x07BA,0x0954,0x05F8,0xF9F7,0xF368}
};

#endif