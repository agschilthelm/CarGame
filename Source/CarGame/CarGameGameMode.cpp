// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "CarGame.h"
#include "CarGameGameMode.h"
#include "CarGamePawn.h"
#include "CarGameHud.h"

ACarGameGameMode::ACarGameGameMode()
{
	DefaultPawnClass = ACarGamePawn::StaticClass();
	HUDClass = ACarGameHud::StaticClass();
}
