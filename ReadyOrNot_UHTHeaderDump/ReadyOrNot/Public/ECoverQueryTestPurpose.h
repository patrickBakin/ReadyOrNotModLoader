#pragma once
#include "CoreMinimal.h"
#include "ECoverQueryTestPurpose.generated.h"

UENUM(BlueprintType)
enum class ECoverQueryTestPurpose : uint8 {
    FilterOnly,
    ScoreOnly,
    FilterAndScore,
};

