// Copyright Epic Games, Inc. All Rights Reserved.


#include "AudioSubsystemPlayerController.h"
#include "EnhancedInputSubsystems.h"

void AAudioSubsystemPlayerController::BeginPlay()
{
	Super::BeginPlay();

	// get the enhanced input subsystem
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		// add the mapping context so we get controls
		Subsystem->AddMappingContext(InputMappingContext, 0);

		UE_LOG(LogTemp, Warning, TEXT("BeginPlay"));
	}
}

void AAudioSubsystemPlayerController::PostLoad()
{
	Super::PostLoad();
}
