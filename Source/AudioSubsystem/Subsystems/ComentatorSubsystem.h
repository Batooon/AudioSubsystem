// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "ComentatorSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class AUDIOSUBSYSTEM_API UComentatorSubsystem : public ULocalPlayerSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TObjectPtr<USoundBase> FinishHimSound;

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	UFUNCTION(BlueprintCallable)
	void SayFinishHim();
};
