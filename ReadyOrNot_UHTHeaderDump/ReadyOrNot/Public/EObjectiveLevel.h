#pragma once
#include "CoreMinimal.h"
#include "EObjectiveLevel.generated.h"

UENUM(BlueprintType)
enum class EObjectiveLevel : uint8 {
    PrimaryObjective,
    SecondaryObjective,
    TertiaryObjective,
};

