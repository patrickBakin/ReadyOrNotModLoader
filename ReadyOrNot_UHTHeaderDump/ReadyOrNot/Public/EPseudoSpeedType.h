#pragma once
#include "CoreMinimal.h"
#include "EPseudoSpeedType.generated.h"

UENUM(BlueprintType)
enum class EPseudoSpeedType : uint8 {
    Null,
    Slow,
    Walk,
    Run,
    Sprint,
    LimpWalk,
    LimpRun,
    Last,
};

