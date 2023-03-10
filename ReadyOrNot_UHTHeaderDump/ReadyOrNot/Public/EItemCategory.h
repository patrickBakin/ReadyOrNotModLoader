#pragma once
#include "CoreMinimal.h"
#include "EItemCategory.generated.h"

UENUM(BlueprintType)
enum class EItemCategory : uint8 {
    IC_None,
    IC_Primary,
    IC_Secondary,
    IC_Grenade,
    IC_Gadget,
    IC_Magazine,
    IC_Helmet,
    IC_Helmet_Light,
    IC_Headset,
    IC_Goggles,
    IC_Chest,
    IC_Watch,
    IC_Radio,
    IC_NVG,
    IC_UseableWithShield,
    IC_Grenade_Keybind1,
    IC_Grenade_Keybind2,
    IC_Grenade_Keybind3,
    IC_Grenade_Keybind4,
    IC_Device_Keybind1,
    IC_Device_Keybind2,
    IC_Device_Keybind3,
    IC_Device_Keybind4,
    IC_Badge_Armour,
    IC_OCSpray,
    IC_Multitool,
    IC_Zipcuffs,
    IC_Armor,
    IC_Chemlight,
    IC_Shield,
    IC_Flashbang,
    IC_Ninebang,
    IC_CSGas,
    IC_Stingball,
    IC_Optiwand,
    IC_Beanbag,
    IC_Taser,
    IC_Pepperball,
    IC_C2Explosive,
    IC_Detonator,
    IC_Doorjam,
    IC_BatteringRam,
    IC_BreachingShotgun,
    IC_Tablet,
    IC_TacticalDevice,
    IC_LongTactical,
    IC_GasMask,
    IC_Launcher,
    IC_MedicalKit,
    IC_LockpickGun,
    IC_Shotgun,
    IC_MAX UMETA(Hidden),
};

