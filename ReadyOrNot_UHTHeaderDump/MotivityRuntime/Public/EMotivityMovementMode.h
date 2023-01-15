#pragma once
#include "CoreMinimal.h"
#include "EMotivityMovementMode.generated.h"

UENUM(BlueprintType)
enum class EMotivityMovementMode : uint8 {
    MO_CAPSULE,
    MO_ROOTMOTION,
    MO_MAX UMETA(Hidden),
};

