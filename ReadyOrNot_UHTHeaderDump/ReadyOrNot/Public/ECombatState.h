#pragma once
#include "CoreMinimal.h"
#include "ECombatState.generated.h"

UENUM(BlueprintType)
enum class ECombatState : uint8 {
    CS_Unaware,
    CS_Suspicious,
    CS_Fleeing,
    CS_Hesitation,
    CS_Cover,
    CS_ArmedAndDangerous,
    CS_MAX UMETA(Hidden),
};

