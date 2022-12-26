/* Copyright (c) 2002-2012 Croteam Ltd. 
This program is free software; you can redistribute it and/or modify
it under the terms of version 2 of the GNU General Public License as published by
the Free Software Foundation


This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA. */

#include <Engine/Engine.h>
#include <GameMP/Game.h>
#include <GameMP/SEColors.h>

/* rcg10042001 protect against Visual C-isms. */
#ifdef _MSC_VER
#define DECL_DLL _declspec(dllimport)
#endif

#ifdef PLATFORM_UNIX
#define DECL_DLL 
#endif

#ifdef FIRST_ENCOUNTER
#include <Entities/Global.h>
#include <Entities/Common/Common.h>
#include <Entities/Common/GameInterface.h>
#include <Entities/Player.h>

#include <Entities/PlayerWeapons.h>
#include <Entities/PlayerMarker.h>
#include <Entities/ArmorItem.h>
#include <Entities/AmmoItem.h>
#include <Entities/HealthItem.h>
//#include <Entities/PowerUpItem.h>
#include <Entities/ModelHolder2.h>
#include <Entities/Light.h>
#include <Engine/Light/LightSource.h>
#include <Entities/Trigger.h>
#include <Entities/EnemySpawner.h>
#include <Entities/WorldBase.h>
#else
#include <EntitiesMP/Global.h>
#include <EntitiesMP/Common/Common.h>
#include <EntitiesMP/Common/GameInterface.h>
#include <EntitiesMP/Player.h>

#include <EntitiesMP/PlayerWeapons.h>
#include <EntitiesMP/PlayerMarker.h>
#include <EntitiesMP/ArmorItem.h>
#include <EntitiesMP/AmmoItem.h>
#include <EntitiesMP/HealthItem.h>
#include <EntitiesMP/PowerUpItem.h>
#include <EntitiesMP/ModelHolder2.h>
#include <EntitiesMP/Light.h>
#include <Engine/Light/LightSource.h>
#include <EntitiesMP/Trigger.h>
#include <EntitiesMP/EnemySpawner.h>
#include <EntitiesMP/WorldBase.h>

#endif
#undef DECL_DLL
