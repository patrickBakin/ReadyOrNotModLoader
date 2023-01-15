#pragma once
#include "CoreMinimal.h"
#include "EDistanceMatchingType.generated.h"

UENUM(BlueprintType)
enum class EDistanceMatchingType : uint8 {
    Start,
    Stop,
    Pivot,
    Jump,
    Fall,
    None,
};

