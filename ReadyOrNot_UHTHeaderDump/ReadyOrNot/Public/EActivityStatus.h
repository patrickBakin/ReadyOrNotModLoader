#pragma once
#include "CoreMinimal.h"
#include "EActivityStatus.generated.h"

UENUM(BlueprintType)
enum class EActivityStatus : uint8 {
    Uninitialized,
    Initialized,
    Started,
    Paused,
    SoftComplete,
    Complete,
};

