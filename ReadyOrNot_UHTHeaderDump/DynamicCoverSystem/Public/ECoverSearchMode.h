#pragma once
#include "CoreMinimal.h"
#include "ECoverSearchMode.generated.h"

UENUM(BlueprintType)
enum class ECoverSearchMode : uint8 {
    NonWallOnly,
    WallOnly,
    Both,
};

