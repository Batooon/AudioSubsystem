// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "ComentatorSubsystem.generated.h"

struct FSSound;

/**
 * 
 */
UCLASS()
class AUDIOSUBSYSTEM_API UComentatorSubsystem : public ULocalPlayerSubsystem
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void PlaySound(const FName soundName);

	UFUNCTION(BlueprintCallable)
	void PlaySoundFromEmiter(const FName soundName, const USceneComponent* emiter);

protected:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

private:
	UDataTable* Sounds;

	FSSound* GetSound(const FName& soundName, const TCHAR* ContextString) const;
};
