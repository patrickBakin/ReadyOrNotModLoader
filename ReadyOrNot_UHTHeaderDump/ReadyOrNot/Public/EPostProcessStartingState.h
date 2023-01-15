#pragma once
#include "CoreMinimal.h"
#include "EPostProcessStartingState.generated.h"

UENUM(BlueprintType)
enum class EPostProcessStartingState : uint8 {
    Forward,
    Reverse,
};

