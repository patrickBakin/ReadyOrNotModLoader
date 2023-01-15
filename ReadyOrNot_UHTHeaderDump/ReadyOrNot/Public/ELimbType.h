#pragma once
#include "CoreMinimal.h"
#include "ELimbType.generated.h"

UENUM(BlueprintType)
enum class ELimbType : uint8 {
    LT_None,
    LT_RightLeg,
    LT_LeftLeg,
    LT_RightArm,
    LT_LeftArm,
    LT_Head,
    LT_MAX UMETA(Hidden),
};

