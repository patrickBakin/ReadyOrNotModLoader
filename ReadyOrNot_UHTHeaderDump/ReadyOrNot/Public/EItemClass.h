#pragma once
#include "CoreMinimal.h"
#include "EItemClass.generated.h"

UENUM(BlueprintType)
enum class EItemClass : uint8 {
    IC_NoClass,
    IC_AssaultRifle,
    IC_SMG,
    IC_LMG,
    IC_Pistol,
    IC_Sniper,
    IC_Melee,
    IC_LessLethal,
    IC_Shotgun,
    IC_Launcher,
    IC_Grenade,
    IC_Shield,
    IC_Armor,
    IC_Headgear,
    IC_TacticalDevice,
    IC_LongTactical,
    IC_Officer,
    IC_Uniform,
    IC_Plates,
    IC_Patches,
    IC_MAX UMETA(Hidden),
};

