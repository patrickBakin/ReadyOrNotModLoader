#pragma once
#include "CoreMinimal.h"
#include "ETOCPriority.generated.h"

UENUM(BlueprintType)
enum class ETOCPriority : uint8 {
    ETP_Flush,
    ETP_HighPriority,
    ETP_MediumPriority,
    ETP_LowPriority,
    ETP_MAX UMETA(Hidden),
};

