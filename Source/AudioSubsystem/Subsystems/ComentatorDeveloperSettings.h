// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ComentatorDeveloperSettings.generated.h"

/**
 * 
 */

class USoundBase;

UCLASS(Config=Game, defaultconfig, meta=(DisplayName="Comentator Settings"))
class AUDIOSUBSYSTEM_API UComentatorDeveloperSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category="General", AdvancedDisplay)
	TSoftObjectPtr<USoundBase> FinishHimSound;
};
