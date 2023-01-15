#pragma once
#include "CoreMinimal.h"
#include "ECoverStance.generated.h"

UENUM(BlueprintType)
enum class ECoverStance : uint8 {
    Both,
    StandOnly,
    CrouchOnly,
};

