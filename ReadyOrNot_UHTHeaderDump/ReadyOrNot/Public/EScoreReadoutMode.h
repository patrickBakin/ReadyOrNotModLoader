#pragma once
#include "CoreMinimal.h"
#include "EScoreReadoutMode.generated.h"

UENUM(BlueprintType)
enum class EScoreReadoutMode : uint8 {
    AllScores,
    OnlyPositive,
    OnlyNegative,
    Disabled,
};

