// Fill out your copyright notice in the Description page of Project Settings.


#include "ComentatorSubsystem.h"

#include "ComentatorDeveloperSettings.h"
#include "Kismet/GameplayStatics.h"

void UComentatorSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	const UComentatorDeveloperSettings* ComentatorSettings = GetDefault<UComentatorDeveloperSettings>();

	FinishHimSound = ComentatorSettings->FinishHimSound.LoadSynchronous();
}

void UComentatorSubsystem::SayFinishHim()
{
	UGameplayStatics::PlaySound2D(this, FinishHimSound);
}
