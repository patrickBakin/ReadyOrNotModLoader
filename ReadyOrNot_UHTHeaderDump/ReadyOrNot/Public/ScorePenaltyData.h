#pragma once
#include "CoreMinimal.h"
#include "ScorePenaltyData.generated.h"

USTRUCT(BlueprintType)
struct FScorePenaltyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PenaltyCount;
    
    READYORNOT_API FScorePenaltyData();
};

