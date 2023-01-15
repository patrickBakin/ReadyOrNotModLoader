#pragma once
#include "CoreMinimal.h"
#include "EAxisMappingFilter.generated.h"

UENUM(BlueprintType)
enum class EAxisMappingFilter : uint8 {
    Name,
    Key,
    Scale,
    IsNotGamepad,
    IsNotKeyboard,
    IsNotMouse,
    IsNotAxis,
};

