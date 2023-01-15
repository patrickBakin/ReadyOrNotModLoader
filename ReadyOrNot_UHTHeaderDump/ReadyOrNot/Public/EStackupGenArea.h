#pragma once
#include "CoreMinimal.h"
#include "EStackupGenArea.generated.h"

UENUM(BlueprintType)
enum class EStackupGenArea : uint8 {
    SGA_None,
    SGA_FrontLeft,
    SGA_FrontRight,
    SGA_BackLeft,
    SGA_BackRight,
    SGA_All,
    SGA_MAX UMETA(Hidden),
};

