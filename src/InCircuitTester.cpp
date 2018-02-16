//
// Copyright (c) 2017, Paul R. Swan
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
#include <LiquidCrystal.h>
#include <DFR_Key.h>
#include <zutil.h>

#include <main.h>

//
// Because of the limited memory on the Arduino Mega we define which sub-set of games we want to
// build below based on the CPU type
//
#define Game6809E

#ifdef Game2650
#include <2650GameSelector.h>
#endif
#ifdef Game6502
#include <6502GameSelector.h>
#endif
#ifdef Game6809E
#include <6809EGameSelector.h>
#endif
#ifdef Game8080
#include <8080GameSelector.h>
#endif
#ifdef Game8085
#include <8085GameSelector.h>
#endif
#ifdef Game68000
#include <68000GameSelector.h>
#endif
#ifdef GameT11
#include <T11GameSelector.h>
#endif
#ifdef GameZ80
#include <Z80GameSelector.h>
#endif

void setup()
{
  mainSetup(s_gameSelector);
}

void loop()
{
  mainLoop();
}