// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/HUD.h"
#include "CarGameHud.generated.h"


UCLASS(config = Game)
class ACarGameHud : public AHUD
{
	GENERATED_BODY()

public:
	ACarGameHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface

};
