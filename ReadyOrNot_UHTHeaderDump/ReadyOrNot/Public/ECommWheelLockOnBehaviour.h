#pragma once
#include "CoreMinimal.h"
#include "ECommWheelLockOnBehaviour.generated.h"

UENUM(BlueprintType)
enum class ECommWheelLockOnBehaviour : uint8 {
    LB_LockOnToObstruction,
    LB_KeepLockOn,
    LB_CancelLockOnWhenObstructed,
    LB_MAX UMETA(Hidden),
};

