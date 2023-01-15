#pragma once
#include "CoreMinimal.h"
#include "UnlockRequirements.generated.h"

USTRUCT(BlueprintType)
struct FUnlockRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MapURL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Score;
    
    READYORNOT_API FUnlockRequirements();
};

