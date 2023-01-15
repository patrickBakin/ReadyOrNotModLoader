#pragma once
#include "CoreMinimal.h"
#include "EHolsterAnimationType.generated.h"

UENUM(BlueprintType)
enum class EHolsterAnimationType : uint8 {
    HAT_Normal,
    HAT_SkipHolster,
    HAT_AlwaysPlayHolster,
    HAT_MAX UMETA(Hidden),
};

