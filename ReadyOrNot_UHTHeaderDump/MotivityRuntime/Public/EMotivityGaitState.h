#pragma once
#include "CoreMinimal.h"
#include "EMotivityGaitState.generated.h"

UENUM(BlueprintType)
enum class EMotivityGaitState : uint8 {
    MO_TURN,
    MO_WALK,
    MO_RUN,
    MO_SPRINT,
    MO_MAX UMETA(Hidden),
};

