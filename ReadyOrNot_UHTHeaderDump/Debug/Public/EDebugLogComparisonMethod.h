#pragma once
#include "CoreMinimal.h"
#include "EDebugLogComparisonMethod.generated.h"

UENUM(BlueprintType)
enum EDebugLogComparisonMethod {
    CM_Equal_To,
    CM_Not_Equal_To,
    CM_Greater_Than_Or_Equal_To,
    CM_Less_Than_Or_Equal_To,
    CM_Greater_Than,
    CM_Less_Than,
    CM_MAX UMETA(Hidden),
};

