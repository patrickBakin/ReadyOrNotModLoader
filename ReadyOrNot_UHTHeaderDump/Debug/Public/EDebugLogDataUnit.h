#pragma once
#include "CoreMinimal.h"
#include "EDebugLogDataUnit.generated.h"

UENUM(BlueprintType)
enum EDebugLogDataUnit {
    DLDU_Bit,
    DLDU_Byte,
    DLDU_Kilobyte,
    DLDU_Megabyte,
    DLDU_Gigabyte,
    DLDU_Terabyte,
    DLDU_Petabyte,
    DLDU_MAX UMETA(Hidden),
};

