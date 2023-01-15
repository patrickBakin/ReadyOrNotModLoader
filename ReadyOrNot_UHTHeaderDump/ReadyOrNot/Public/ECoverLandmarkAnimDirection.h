#pragma once
#include "CoreMinimal.h"
#include "ECoverLandmarkAnimDirection.generated.h"

UENUM(BlueprintType)
enum class ECoverLandmarkAnimDirection : uint8 {
    Forward,
    Left,
    Right,
};

