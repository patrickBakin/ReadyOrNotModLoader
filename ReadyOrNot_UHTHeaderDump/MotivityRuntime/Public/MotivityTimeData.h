#pragma once
#include "CoreMinimal.h"
#include "MotivityTimeData.generated.h"

USTRUCT(BlueprintType)
struct MOTIVITYRUNTIME_API FMotivityTimeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> PredictionTimes;
    
    FMotivityTimeData();
};

