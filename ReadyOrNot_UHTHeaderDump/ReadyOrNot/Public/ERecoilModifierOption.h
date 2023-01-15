#pragma once
#include "CoreMinimal.h"
#include "ERecoilModifierOption.generated.h"

UENUM(BlueprintType)
enum class ERecoilModifierOption : uint8 {
    RMO_ModifyRecoil,
    RMO_AddRecoil,
    RMO_SubtractRecoil,
    RMO_MAX UMETA(Hidden),
};

