#pragma once
#include "CoreMinimal.h"
#include "EStandCoverType.generated.h"

UENUM(BlueprintType)
enum class EStandCoverType : uint8 {
    Wall,
    LeftOnly,
    RightOnly,
    LeftAndRight,
};

