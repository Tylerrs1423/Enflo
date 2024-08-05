// Copyright Epic Games, Inc. All Rights Reserved.

#include "EnfloGameMode.h"
#include "EnfloCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEnfloGameMode::AEnfloGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
