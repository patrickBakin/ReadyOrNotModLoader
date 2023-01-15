#pragma once
#include "CoreMinimal.h"
#include "TrajectoryPoint.h"
#include "TrajectoryData.generated.h"

USTRUCT(BlueprintType)
struct MOTIVITYRUNTIME_API FTrajectoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTrajectoryPoint> TrajectoryPoints;
    
    FTrajectoryData();
};

