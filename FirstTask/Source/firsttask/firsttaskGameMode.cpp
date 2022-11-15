// Copyright Epic Games, Inc. All Rights Reserved.

#include "firsttaskGameMode.h"
#include "firsttaskHUD.h"
#include "firsttaskCharacter.h"
#include "UObject/ConstructorHelpers.h"

AfirsttaskGameMode::AfirsttaskGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AfirsttaskHUD::StaticClass();
}
