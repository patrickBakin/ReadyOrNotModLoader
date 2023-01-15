#pragma once
#include "CoreMinimal.h"
#include "EMappingType.generated.h"

UENUM(BlueprintType)
enum class EMappingType : uint8 {
    Axis,
    Action,
    Auto,
};

