#pragma once
#include "CoreMinimal.h"
#include "EDebugLogFrequencyUnit.generated.h"

UENUM(BlueprintType)
enum EDebugLogFrequencyUnit {
    DLFU_Hertz,
    DLFU_Kilohertz,
    DLFU_Megahertz,
    DLFU_Gigahertz,
    DLFU_RevolutionsPerMinute,
    DLFU_MAX UMETA(Hidden),
};

