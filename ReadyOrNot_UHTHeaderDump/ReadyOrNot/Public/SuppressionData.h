#pragma once
#include "CoreMinimal.h"
#include "SuppressionData.generated.h"

USTRUCT(BlueprintType)
struct FSuppressionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    READYORNOT_API FSuppressionData();
};

