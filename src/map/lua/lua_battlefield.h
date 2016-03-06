/*
===========================================================================

  Copyright (c) 2010-2015 Darkstar Dev Teams

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see http://www.gnu.org/licenses/

  This file is part of DarkStar-server source code.

===========================================================================
*/

#ifndef _LUABATTLEFIELD_H
#define _LUABATTLEFIELD_H

#include "../../common/cbasetypes.h"
#include "../../common/lua/lunar.h"

class CBattlefield;

class CLuaBattlefield
{
    CBattlefield *m_PLuaBattlefield;
public:

    static const int8 className[];
    static Lunar<CLuaBattlefield>::Register_t methods[];

    CLuaBattlefield(lua_State*);
    CLuaBattlefield(CBattlefield*);

    CBattlefield* GetBattlefield() const
    {
        return m_PLuaBattlefield;
    }
    int32 getID(lua_State*);
    int32 getArea(lua_State*);
    int32 getTimeLimit(lua_State*);
    int32 getTimeInside(lua_State*);
    int32 getFightTick(lua_State*);
    int32 getWipeTime(lua_State*);
    int32 getFightTime(lua_State*);
    int32 getPlayers(lua_State*);
    int32 getMobs(lua_State*);
    int32 getNPCs(lua_State*);
    int32 getAliies(lua_State*);
    int32 getCurrentRecord(lua_State*);

    int32 setTimeLimit(lua_State*);
    int32 setFightTick(lua_State*);
    int32 setWipeTime(lua_State*);
    int32 setNewRecord(lua_State*);

    int32 getFastestTime(lua_State*);
    int32 getFastestPlayer(lua_State*);
    int32 getAllies(lua_State*);

    int32 loadMobs(lua_State*);
    int32 loadNPCs(lua_State*);
    int32 insertEntity(lua_State*);
    int32 cleanup(lua_State*);
};

#endif