#pragma once
#include "CoreMinimal.h"
#include "RelevancyTracker.generated.h"

USTRUCT(BlueprintType)
struct FRelevancyTracker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeUntilRecheck;
    
    READYORNOT_API FRelevancyTracker();
};

