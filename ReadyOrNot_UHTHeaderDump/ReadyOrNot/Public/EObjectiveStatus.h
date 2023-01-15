#pragma once
#include "CoreMinimal.h"
#include "EObjectiveStatus.generated.h"

UENUM(BlueprintType)
enum class EObjectiveStatus : uint8 {
    Objective_InProgress,
    Objective_Complete,
    Objective_Failed,
    Objective_MAX UMETA(Hidden),
};

