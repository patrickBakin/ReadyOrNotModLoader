#pragma once
#include "CoreMinimal.h"
#include "EWeaponUnderbarrelAnimationType.generated.h"

UENUM(BlueprintType)
enum class EWeaponUnderbarrelAnimationType : uint8 {
    WU_None,
    WU_VFG,
    WU_AFG,
    WU_Handstop,
    WU_MAX UMETA(Hidden),
};

