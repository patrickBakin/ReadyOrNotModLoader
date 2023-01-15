#pragma once
#include "CoreMinimal.h"
#include "ECharacterDeathReason.generated.h"

UENUM(BlueprintType)
enum class ECharacterDeathReason : uint8 {
    None,
    PrimaryWeapon,
    SecondaryWeapon,
    TasedToDeath,
    FellFromHighHeight,
    Suicide,
    Headshot,
    Bleedout,
    Grenade,
    Explosion,
    MultipleUnhealedWounds,
};

