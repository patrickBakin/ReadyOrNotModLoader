#pragma once
#include "CoreMinimal.h"
#include "EDoorCheckResult.generated.h"

UENUM(BlueprintType)
enum class EDoorCheckResult : uint8 {
    None,
    Unlocked,
    Locked,
    Jammed,
    Blocked,
};

