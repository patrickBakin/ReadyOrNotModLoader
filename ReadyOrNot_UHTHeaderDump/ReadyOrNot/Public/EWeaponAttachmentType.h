#pragma once
#include "CoreMinimal.h"
#include "EWeaponAttachmentType.generated.h"

UENUM(BlueprintType)
enum class EWeaponAttachmentType : uint8 {
    Null,
    Optics,
    Muzzle,
    Underbarrel,
    Overbarrel,
    Stock,
    Grip,
    Illuminators,
    Ammunition,
};

