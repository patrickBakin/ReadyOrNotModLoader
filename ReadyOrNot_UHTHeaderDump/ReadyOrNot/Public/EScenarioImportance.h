#pragma once
#include "CoreMinimal.h"
#include "EScenarioImportance.generated.h"

UENUM(BlueprintType)
enum class EScenarioImportance : uint8 {
    SI_None,
    SI_AlwaysSpawn,
    SI_Pooled,
    SI_MAX UMETA(Hidden),
};

