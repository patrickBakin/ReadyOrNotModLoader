#pragma once
#include "CoreMinimal.h"
#include "ELedgeWidth.generated.h"

UENUM(BlueprintType)
enum class ELedgeWidth : uint8 {
    LW_None,
    LW_Ledge,
    LW_Rail,
    LW_Fall,
    LW_MAX UMETA(Hidden),
};

