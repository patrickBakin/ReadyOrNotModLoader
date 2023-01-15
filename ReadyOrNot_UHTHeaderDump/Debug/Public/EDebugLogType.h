#pragma once
#include "CoreMinimal.h"
#include "EDebugLogType.generated.h"

UENUM(BlueprintType)
enum EDebugLogType {
    DL_Info,
    DL_Success,
    DL_Warning,
    DL_Error,
    DL_Fatal,
    DL_MAX UMETA(Hidden),
};

