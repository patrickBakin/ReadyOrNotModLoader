#pragma once
#include "CoreMinimal.h"
#include "ELightType.generated.h"

UENUM(BlueprintType)
enum class ELightType : uint8 {
    LT_None,
    LT_Day,
    LT_Night,
    LT_MAX UMETA(Hidden),
};

