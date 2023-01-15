#pragma once
#include "CoreMinimal.h"
#include "EBlockingAnimationExclusion.generated.h"

UENUM(BlueprintType)
enum class EBlockingAnimationExclusion : uint8 {
    BAE_None,
    BAE_Holster,
    BAE_Draw,
    BAE_FireSelect,
    BAE_MagCheck,
    BAE_PullPin,
    BAE_Throw,
    BAE_MAX UMETA(Hidden),
};

