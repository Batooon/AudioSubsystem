#pragma once

// #include "Engine/DataTable.h"
#include "FSSound.generated.h"

USTRUCT(BlueprintType)
struct FSSound : public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="Sound", MakeStructureDefaultValue="None"))
	TObjectPtr<USoundBase> Sound;
};
