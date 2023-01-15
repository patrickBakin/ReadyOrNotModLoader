#pragma once
#include "CoreMinimal.h"
#include "RoNGaitTransitionData.h"
#include "RoNGaitLocomotionData.h"
#include "RoNGaitType.generated.h"

USTRUCT(BlueprintType)
struct FRoNGaitType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRoNGaitTransitionData TransitionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRoNGaitLocomotionData LocomotionData;
    
    READYORNOT_API FRoNGaitType();
};

