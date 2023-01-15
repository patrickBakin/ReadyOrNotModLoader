#pragma once
#include "CoreMinimal.h"
#include "EItemType.generated.h"

UENUM(BlueprintType)
enum class EItemType : uint8 {
    IT_None,
    IT_Rifles,
    IT_SubmachineGun,
    IT_LightMachineGun,
    IT_Shotgun,
    IT_Sniper,
    IT_PistolsLethal,
    IT_PistolsNonLethal,
    IT_PrimaryNonLethal,
    IT_Launcher,
    IT_Melee,
    IT_LessLethal,
    IT_Headwear,
    IT_BodyArmor,
    IT_Grenade,
    IT_GrenadeNonLethal,
    IT_TacticalDevice,
    IT_TacticalDeviceNonLethal,
    IT_TacticalOne,
    IT_TacticalTwo,
    IT_TacticalThree,
    IT_TacticalFour,
    IT_TacticalFive,
    IT_TacticalSix,
    IT_TacticalSeven,
    IT_TacticalEight,
    IT_LongTactical,
    IT_Skins,
    IT_Loadouts,
    IT_MAX UMETA(Hidden),
};

