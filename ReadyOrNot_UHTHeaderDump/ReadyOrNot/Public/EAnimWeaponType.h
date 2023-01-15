#pragma once
#include "CoreMinimal.h"
#include "EAnimWeaponType.generated.h"

UENUM(BlueprintType)
enum class EAnimWeaponType : uint8 {
    CWT_Unarmed,
    CWT_Pistol,
    CWT_Rifle,
    CWT_Arrested,
    CWT_Surrendered,
    CWT_Any,
    CWT_MAX UMETA(Hidden),
};

