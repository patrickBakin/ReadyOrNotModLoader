#pragma once
#include "CoreMinimal.h"
#include "EThreatLevel.generated.h"

UENUM(BlueprintType)
enum class EThreatLevel : uint8 {
    TL_None,
    TL_Low,
    TL_Medium,
    TL_High,
    TL_Extreme,
    TL_MAX UMETA(Hidden),
};

