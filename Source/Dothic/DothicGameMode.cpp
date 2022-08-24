// Copyright Epic Games, Inc. All Rights Reserved.

#include "DothicGameMode.h"
#include "DothicCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADothicGameMode::ADothicGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
