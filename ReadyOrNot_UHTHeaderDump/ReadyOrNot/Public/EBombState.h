#pragma once
#include "CoreMinimal.h"
#include "EBombState.generated.h"

UENUM(BlueprintType)
enum class EBombState : uint8 {
    BS_None,
    BS_Active,
    BS_Disabled,
    BS_Exploded,
    BS_MAX UMETA(Hidden),
};

