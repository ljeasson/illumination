// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Project_IlluminationGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_ILLUMINATION_API AProject_IlluminationGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
		virtual void StartPlay() override;
};
