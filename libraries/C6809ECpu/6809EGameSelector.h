//
// Copyright (c) 2016, Paul R. Swan
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
#include <C6809EGenericGame.h>

//#define StarWars
//#define Defender
#define Williams

#ifdef StarWars
#include <CStarWarsGame.h>
#endif
#ifdef Defender
#include <CDefenderGame.h>
#endif
#ifdef Williams
#include <CWilliamsGame.h>
#endif

//
// The initial selector to select the game to test.
//
static const SELECTOR s_gameSelector[] PROGMEM = {//0123456789abcde
                                                  {"Generic 2716   ",  onSelectGeneric, (void*) (C6809EGenericGame::createInstance2716),        false},
                                                  {"Generic 2732   ",  onSelectGeneric, (void*) (C6809EGenericGame::createInstance2732),        false},
#ifdef StarWars
                                                  {"Star Wars      ",  onSelectGame,    (void*) (CStarWarsGame::createInstance),                false},
                                                  {"Star Wars (O)  ",  onSelectGame,    (void*) (CStarWarsGame::createInstanceSetO),            false},
#endif
#ifdef Defender
                                                  {"Defender       ",  onSelectGame,    (void*) (CDefenderGame::createInstanceDefenderRed),     false},
                                                  {"Defender (G)   ",  onSelectGame,    (void*) (CDefenderGame::createInstanceDefenderGreen),   false},
                                                  {"Defender (B)   ",  onSelectGame,    (void*) (CDefenderGame::createInstanceDefenderBlue),    false},
                                                  {"Defender (W)   ",  onSelectGame,    (void*) (CDefenderGame::createInstanceDefenderWhite),   false},
#endif
#ifdef Williams
                                                  {"Stargate       ",  onSelectGame,    (void*) (CWilliamsGame::createInstanceStargate),             false},
                                                  {"Robotron TieDie",  onSelectGame,    (void*) (CWilliamsGame::createInstanceRobotronTieDie),       false},
                                                  {"Robotron Blue  ",  onSelectGame,    (void*) (CWilliamsGame::createInstanceRobotronBlue),         false},
                                                  //  {"Robotron Patch ",  onSelectGame,    (void*) (CWilliamsGame::createInstanceRobotronBluePatched),  false},
                                                  //  {"Robotron Pause ",  onSelectGame,    (void*) (CWilliamsGame::createInstanceRobotronBluePause),    false},
                                                  {"Robotron Y/O   ",  onSelectGame,    (void*) (CWilliamsGame::createInstanceRobotronYellowOrange), false},
                                                  {"Joust Green    ",  onSelectGame,    (void*) (CWilliamsGame::createInstanceJoustWhiteGreen),      false},
                                                  //  {"Joust Pause    ",  onSelectGame,    (void*) (CWilliamsGame::createInstanceJoustPause),           false},
                                                  //  {"Joust Red      ",  onSelectGame,    (void*) (CWilliamsGame::createInstanceJoustSolidRed),        false},
                                                  //  {"Joust Yellow   ",  onSelectGame,    (void*) (CWilliamsGame::createInstanceJoustSolidYellow),     false},
                                                  {"Bubbles        ",  onSelectGame,    (void*) (CWilliamsGame::createInstanceBubbles),              false},
                                                  //  {"Bubbles Red    ",  onSelectGame,    (void*) (CWilliamsGame::createInstanceBubblesSolidRed),      false},
                                                  //  {"Bubbles Proto  ",  onSelectGame,    (void*) (CWilliamsGame::createInstanceBubblesProto),         false},
                                                  {"Splat!         ",  onSelectGame,    (void*) (CWilliamsGame::createInstanceSplat),                false},
                                                  //  {"Splat! SC1     ",  onSelectGame,    (void*) (CWilliamsGame::createInstanceSplatSC1),             false},
                                                  {"Sinistar Rev 3 ",  onSelectGame,    (void*) (CWilliamsGame::createInstanceSinistarRev3),         false},
                                                  //  {"Sinistar Rev 2 ",  onSelectGame,    (void*) (CWilliamsGame::createInstanceSinistarRev2),         false},
                                                  //  {"Sinistar Proto ",  onSelectGame,    (void*) (CWilliamsGame::createInstanceSinistarProto),        false},
#endif
                                                  { 0, 0 }
                                                 };
