#pragma once
#include "CoreMinimal.h"
#include "ECrouchCoverType.generated.h"

UENUM(BlueprintType)
enum class ECrouchCoverType : uint8 {
    Wall,
    LeftOnly,
    RightOnly,
    LeftAndRight,
    UpOnly,
    LeftAndUp,
    RightAndUp,
    LeftRightAndUp,
};

