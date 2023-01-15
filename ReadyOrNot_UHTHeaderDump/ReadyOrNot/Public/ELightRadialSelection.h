#pragma once
#include "CoreMinimal.h"
#include "ELightRadialSelection.generated.h"

UENUM(BlueprintType)
enum class ELightRadialSelection : uint8 {
    LR_None,
    LR_NVGs,
    LR_WeaponLight,
    LR_Chemlight,
    LR_MAX UMETA(Hidden),
};

