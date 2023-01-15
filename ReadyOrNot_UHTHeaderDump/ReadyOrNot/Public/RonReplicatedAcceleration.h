#pragma once
#include "CoreMinimal.h"
#include "RonReplicatedAcceleration.generated.h"

USTRUCT(BlueprintType)
struct FRonReplicatedAcceleration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AccelXYRadians;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AccelXYMagnitude;
    
    UPROPERTY(EditAnywhere)
    int8 AccelZ;
    
    READYORNOT_API FRonReplicatedAcceleration();
};

