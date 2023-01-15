#pragma once
#include "CoreMinimal.h"
#include "EMotivityInputMode.generated.h"

UENUM(BlueprintType)
enum class EMotivityInputMode : uint8 {
    MO_CAPSULE_VELOCITY,
    MO_STICK_INPUT,
    MO_LAST_INPUT_VECTOR,
    MO_WORLD_VECTOR,
    MO_MAX UMETA(Hidden),
};

