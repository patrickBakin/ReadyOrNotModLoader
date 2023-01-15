#pragma once
#include "CoreMinimal.h"
#include "EItemOverrideRule.generated.h"

UENUM(BlueprintType)
enum class EItemOverrideRule : uint8 {
    NONE,
    ADDITIVE_ONLY,
    LAYERED_ONLY,
    ADDITIVE_LAYERED,
};

