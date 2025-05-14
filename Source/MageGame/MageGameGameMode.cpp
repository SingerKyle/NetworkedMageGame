// Copyright Epic Games, Inc. All Rights Reserved.

#include "MageGameGameMode.h"
#include "MageGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMageGameGameMode::AMageGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
