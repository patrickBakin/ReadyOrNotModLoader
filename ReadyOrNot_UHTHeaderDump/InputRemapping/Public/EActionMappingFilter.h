#pragma once
#include "CoreMinimal.h"
#include "EActionMappingFilter.generated.h"

UENUM(BlueprintType)
enum class EActionMappingFilter : uint8 {
    Name,
    Key,
    Shift,
    Ctrl,
    Alt,
    Cmd,
    IsNotGamepad,
    IsNotKeyboard,
    IsNotMouse,
};

