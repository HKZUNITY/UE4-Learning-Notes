// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "firsttaskHUD.generated.h"

UCLASS()
class AfirsttaskHUD : public AHUD
{
	GENERATED_BODY()

public:
	AfirsttaskHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

