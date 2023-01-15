#pragma once
#include "CoreMinimal.h"
#include "EPlayerStatus.h"
#include "DeploymentStatus.generated.h"

class AReadyOrNotPlayerState;

USTRUCT(BlueprintType)
struct FDeploymentStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerStatus Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotPlayerState* PlayerState;
    
    READYORNOT_API FDeploymentStatus();
};

