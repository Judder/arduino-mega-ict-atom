//
// Copyright (c) 2018, Paul R. Swan
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice,
//    this list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice,
//    this list of conditions and the following disclaimer in the documentation
//    and/or other materials provided with the distribution.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS
// OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
// COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
// HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR
// TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
// EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
#include "CTigerHeliSoundGame.h"

//
// See the base game cpp comments for details about this platform.
//

//
// Tiger Heli Set 1 from MAME.
//                                               01   02   04   08   10   20   40   80  100  200  400
static const UINT16 s_romDataTHSet1_04[]    = {0x72,0x02,0xff,0xff,0xff,0xff,0xb7,0xfe,0x02,0xbe,0x00};
static const UINT16 s_romDataTHSet1_14[]    = {0x80,0x77,0xb7,0x08,0x08,0xfe,0xaf,0x00,0x21,0x80,0x0d};
static const UINT16 s_romDataTHSet1_24[]    = {0x8c,0x8f,0x88,0x8f,0x09,0x83,0x0d,0x85,0xcd,0x04,0x1c};

static const ROM_REGION s_romRegionTHSet1[] PROGMEM = { //
                                                      {NO_BANK_SWITCH, 0x0000, 0x4000, s_romDataTHSet1_04, 0x4be73246, "0.4"}, //
                                                      {NO_BANK_SWITCH, 0x4000, 0x4000, s_romDataTHSet1_14, 0xaad04867, "1.4"}, //
                                                      {NO_BANK_SWITCH, 0x8000, 0x4000, s_romDataTHSet1_24, 0x4843f15c, "2.4"}, //
                                                      {0} }; // end of list

//
// Slap Fight Set 1 from MAME.
//                                               01   02   04   08   10   20   40   80  100  200  400
static const UINT16 s_romDataSFSet1_8P[]    = {0x72,0x02,0xff,0xff,0xff,0xff,0xb7,0xfe,0x02,0xbe,0x00};
static const UINT16 s_romDataSFSet1_8N[]    = {0x80,0x77,0xb7,0x08,0x08,0xfe,0xaf,0x00,0x21,0x80,0x0d};

static const ROM_REGION s_romRegionSFSet1[] PROGMEM = { //
                                                         {NO_BANK_SWITCH, 0x00000, 0x8000, s_romDataSFSet1_8P, 0xbe037cf6, " 8P"}, //
                                                         {NO_BANK_SWITCH, 0x10000, 0x8000, s_romDataSFSet1_8N, 0xde7912da, " 8N"}, //
                                                         {0} }; // end of list

IGame*
CTigerHeliSoundGame::createInstanceTHSet1(
)
{
    return (new CTigerHeliSoundGame(s_romRegionTHSet1));
}


IGame*
CTigerHeliSoundGame::createInstanceSFSet1(
)
{
    return (new CTigerHeliSoundGame(s_romRegionSFSet1));
}

CTigerHeliSoundGame::CTigerHeliSoundGame(
    const ROM_REGION *romRegion
) : CTigerHeliSoundBaseGame( romRegion )
{
}


