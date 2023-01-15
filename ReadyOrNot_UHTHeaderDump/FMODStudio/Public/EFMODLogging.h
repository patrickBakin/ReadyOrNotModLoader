#pragma once
#include "CoreMinimal.h"
#include "EFMODLogging.generated.h"

UENUM(BlueprintType)
enum EFMODLogging {
    LEVEL_NONE,
    LEVEL_ERROR,
    LEVEL_WARNING,
    LEVEL_LOG = 0x4,
    LEVEL_MAX UMETA(Hidden),
};

