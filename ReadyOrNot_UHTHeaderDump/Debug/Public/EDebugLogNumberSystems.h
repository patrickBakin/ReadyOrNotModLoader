#pragma once
#include "CoreMinimal.h"
#include "EDebugLogNumberSystems.generated.h"

UENUM(BlueprintType)
enum EDebugLogNumberSystems {
    DLNS_Decimal,
    DLNS_Binary,
    DLNS_Hex,
    DLNS_Octal,
    DLNS_Roman,
    DLNS_MAX UMETA(Hidden),
};

