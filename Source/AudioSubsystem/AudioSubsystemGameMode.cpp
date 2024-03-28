// Copyright Epic Games, Inc. All Rights Reserved.

#include "AudioSubsystemGameMode.h"
#include "AudioSubsystemCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAudioSubsystemGameMode::AAudioSubsystemGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
