// Copyright Epic Games, Inc. All Rights Reserved.

#include "KSW_Unreal_ProjectGameMode.h"
#include "KSW_Unreal_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AKSW_Unreal_ProjectGameMode::AKSW_Unreal_ProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
