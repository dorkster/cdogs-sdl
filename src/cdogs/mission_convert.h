/*
    C-Dogs SDL
    A port of the legendary (and fun) action/arcade cdogs.
    Copyright (c) 2014, Cong Xu
    All rights reserved.

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions are met:

    Redistributions of source code must retain the above copyright notice, this
    list of conditions and the following disclaimer.
    Redistributions in binary form must reproduce the above copyright notice,
    this list of conditions and the following disclaimer in the documentation
    and/or other materials provided with the distribution.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
    AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
    IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
    ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
    LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
    CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
    SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
    INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
    CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
    POSSIBILITY OF SUCH DAMAGE.
*/
#ifndef __MISSION_CONVERT
#define __MISSION_CONVERT

#include "mission.h"
#include "map.h"

void MissionConvertToType(Mission *m, Map *map, MapType type);
void MissionSetTile(Mission *m, Vec2i pos, unsigned short tile);
unsigned short MissionGetTile(Mission *m, Vec2i pos);

void MissionStaticLayout(Mission *m, Vec2i oldSize);
bool MissionStaticTryAddItem(Mission *m, int item, Vec2i pos);
bool MissionStaticTryRemoveItemAt(Mission *m, Vec2i pos);
bool MissionStaticTryAddWreck(Mission *m, int wreck, Vec2i pos);
bool MissionStaticTryRemoveWreckAt(Mission *m, Vec2i pos);
bool MissionStaticTryAddCharacter(Mission *m, int ch, Vec2i pos);
bool MissionStaticTryRemoveCharacterAt(Mission *m, Vec2i pos);
bool MissionStaticTryAddObjective(Mission *m, int idx, int idx2, Vec2i pos);
bool MissionStaticTryRemoveObjectiveAt(Mission *m, Vec2i pos);
bool MissionStaticTryAddKey(Mission *m, int k, Vec2i pos);
bool MissionStaticTryRemoveKeyAt(Mission *m, Vec2i pos);
bool MissionStaticTrySetKey(Mission *m, int k, Vec2i pos);
bool MissionStaticTryUnsetKeyAt(Mission *m, Vec2i pos);

#endif
