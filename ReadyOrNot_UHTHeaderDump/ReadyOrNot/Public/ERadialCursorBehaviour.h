#pragma once
#include "CoreMinimal.h"
#include "ERadialCursorBehaviour.generated.h"

UENUM(BlueprintType)
enum class ERadialCursorBehaviour : uint8 {
    RCB_Clamped,
    RCB_Continuous,
    RCB_MAX UMETA(Hidden),
};

