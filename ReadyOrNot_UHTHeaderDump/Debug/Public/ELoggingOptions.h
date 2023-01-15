#pragma once
#include "CoreMinimal.h"
#include "ELoggingOptions.generated.h"

UENUM(BlueprintType)
enum ELoggingOptions {
    LO_Viewport,
    LO_Console,
    LO_Both,
    LO_NoLog,
    LO_MAX UMETA(Hidden),
};

