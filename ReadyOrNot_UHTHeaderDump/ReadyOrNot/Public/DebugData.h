#pragma once
#include "CoreMinimal.h"
#include "DebugData.generated.h"

USTRUCT(BlueprintType)
struct FDebugData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Value;
    
    READYORNOT_API FDebugData();
};

