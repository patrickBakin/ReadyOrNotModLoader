#pragma once
#include "CoreMinimal.h"
#include "EGenerationType.generated.h"

UENUM(BlueprintType)
enum class EGenerationType : uint8 {
    GT_None,
    GT_Scenarios,
    GT_RandomScenarios,
    GT_MAX UMETA(Hidden),
};

