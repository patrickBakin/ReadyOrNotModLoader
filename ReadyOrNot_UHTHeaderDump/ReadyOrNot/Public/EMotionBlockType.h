#pragma once
#include "CoreMinimal.h"
#include "EMotionBlockType.generated.h"

UENUM(BlueprintType)
enum class EMotionBlockType : uint8 {
    MB_None,
    MB_Rifle,
    MB_Pistol,
    MB_Item,
    MB_HeavyItem,
    MB_Special,
    MB_Unarmed,
    MB_MAX UMETA(Hidden),
};

