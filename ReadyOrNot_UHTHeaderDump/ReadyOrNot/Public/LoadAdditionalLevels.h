#pragma once
#include "CoreMinimal.h"
#include "LoadAdditionalLevels.generated.h"

USTRUCT(BlueprintType)
struct FLoadAdditionalLevels {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SubLevelNames;
    
    READYORNOT_API FLoadAdditionalLevels();
};

