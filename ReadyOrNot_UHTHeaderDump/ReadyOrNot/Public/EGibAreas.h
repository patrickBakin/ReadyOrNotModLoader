#pragma once
#include "CoreMinimal.h"
#include "EGibAreas.generated.h"

UENUM(BlueprintType)
enum class EGibAreas : uint8 {
    GA_None,
    GA_LeftLeg,
    GA_RightLeg,
    GA_LeftArm,
    GA_RightArm,
    GA_Head,
    GA_MAX UMETA(Hidden),
};

