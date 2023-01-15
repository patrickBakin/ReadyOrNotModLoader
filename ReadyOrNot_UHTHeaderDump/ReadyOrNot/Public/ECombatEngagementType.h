#pragma once
#include "CoreMinimal.h"
#include "ECombatEngagementType.generated.h"

UENUM(BlueprintType)
enum class ECombatEngagementType : uint8 {
    FireWeapon,
    Melee,
    ExplosiveVest,
    Custom,
};

