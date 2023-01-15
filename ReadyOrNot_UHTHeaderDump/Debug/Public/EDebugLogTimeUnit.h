#pragma once
#include "CoreMinimal.h"
#include "EDebugLogTimeUnit.generated.h"

UENUM(BlueprintType)
enum EDebugLogTimeUnit {
    DLTU_Nanoseconds,
    DLTU_Microseconds,
    DLTU_Milliseconds,
    DLTU_Seconds,
    DLTU_Minutes,
    DLTU_Hours,
    DLTU_Days,
    DLTU_Weeks,
    DLTU_Months,
    DLTU_Years,
    DLTU_Decades,
    DLTU_Centuries,
    DLTU_Millennium,
    DLTU_MAX UMETA(Hidden),
};

