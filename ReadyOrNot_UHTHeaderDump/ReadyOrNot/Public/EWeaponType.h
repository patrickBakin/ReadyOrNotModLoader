#pragma once
#include "CoreMinimal.h"
#include "EWeaponType.generated.h"

UENUM(BlueprintType)
enum class EWeaponType : uint8 {
    WT_None,
    WT_Rifles,
    WT_SubmachineGun,
    WT_Shotgun,
    WT_PistolsLethal,
    WT_PistolsNonLethal,
    WT_PrimaryNonLethal,
    WT_Launcher,
    WT_Special,
    WT_Unarmed,
    WT_MAX UMETA(Hidden),
};

