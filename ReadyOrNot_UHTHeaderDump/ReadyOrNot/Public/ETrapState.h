#pragma once
#include "CoreMinimal.h"
#include "ETrapState.generated.h"

UENUM(BlueprintType)
enum class ETrapState : uint8 {
    TS_Live,
    TS_Activated,
    TS_Disabled,
    TS_MAX UMETA(Hidden),
};

