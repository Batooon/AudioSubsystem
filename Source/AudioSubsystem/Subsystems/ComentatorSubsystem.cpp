// Fill out your copyright notice in the Description page of Project Settings.


#include "ComentatorSubsystem.h"

#include "ComentatorDeveloperSettings.h"
#include "AudioSubsystem/FSSound.h"
#include "Kismet/GameplayStatics.h"

struct FSSound;

void UComentatorSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	const UComentatorDeveloperSettings* ComentatorSettings = GetDefault<UComentatorDeveloperSettings>();

	Sounds = ComentatorSettings->SoundsTable.LoadSynchronous();
}

void UComentatorSubsystem::PlaySound(const FName soundName)
{
	if(const FSSound* sound = GetSound(soundName, nullptr))
	{
		UGameplayStatics::PlaySound2D(this, sound->Sound);
	}
}

void UComentatorSubsystem::PlaySoundFromEmiter(const FName soundName, const USceneComponent* emiter)
{
	if(const FSSound* sound = GetSound(soundName, nullptr))
	{
		UGameplayStatics::PlaySoundAtLocation(emiter, sound->Sound,
			emiter->GetComponentLocation(),
			emiter->GetComponentRotation());
	}
}

FSSound* UComentatorSubsystem::GetSound(const FName& soundName, const TCHAR* ContextString) const
{
	return Sounds->FindRow<FSSound>(soundName, ContextString);
}
