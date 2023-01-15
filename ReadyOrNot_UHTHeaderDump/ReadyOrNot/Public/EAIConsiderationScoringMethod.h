#pragma once
#include "CoreMinimal.h"
#include "EAIConsiderationScoringMethod.generated.h"

UENUM(BlueprintType)
enum class EAIConsiderationScoringMethod : uint8 {
    Additive,
    Subtractive,
    Multiplicative,
    Divisive,
};

