#pragma once
#include "CoreMinimal.h"
#include "EPostProcessState.generated.h"

UENUM(BlueprintType)
enum class EPostProcessState : uint8 {
    Hold,
    Forward,
    Reverse,
    WaitingForReverse,
    Ended,
};

