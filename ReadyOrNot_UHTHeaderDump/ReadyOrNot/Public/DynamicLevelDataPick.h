#pragma once
#include "CoreMinimal.h"
#include "DynamicLevelDataPick.generated.h"

USTRUCT(BlueprintType)
struct FDynamicLevelDataPick {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Chance;
    
    READYORNOT_API FDynamicLevelDataPick();
};

