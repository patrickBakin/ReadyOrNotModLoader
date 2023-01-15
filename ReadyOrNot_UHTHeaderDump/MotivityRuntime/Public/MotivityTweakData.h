#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MotivityTimeData.h"
#include "MotivityCalibrationData.h"
#include "MotivityTweakData.generated.h"

UCLASS(Blueprintable)
class MOTIVITYRUNTIME_API UMotivityTweakData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMotivityTimeData PredictionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMotivityCalibrationData CalibrationData;
    
    UMotivityTweakData();
};

