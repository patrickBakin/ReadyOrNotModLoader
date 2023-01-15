#pragma once
#include "CoreMinimal.h"
#include "ERoNGaitState.generated.h"

UENUM(BlueprintType)
enum class ERoNGaitState : uint8 {
    RON_TURN,
    RON_WALK,
    RON_RUN,
    RON_SPRINT,
    RON_MAX UMETA(Hidden),
};

