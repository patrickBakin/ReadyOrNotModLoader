#pragma once
#include "CoreMinimal.h"
#include "ENavLOS.generated.h"

UENUM(BlueprintType)
enum class ENavLOS : uint8 {
    NL_Any,
    NL_BreakLOS,
    NL_RequireLOS,
    NL_RequireLOSToMyself,
    NL_MAX UMETA(Hidden),
};

