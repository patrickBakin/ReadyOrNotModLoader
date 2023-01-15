#pragma once
#include "CoreMinimal.h"
#include "EPathedAwareness.generated.h"

UENUM(BlueprintType)
enum class EPathedAwareness : uint8 {
    PA_None,
    PA_Noise,
    PA_LastKnownEnemyPosition,
    PA_MAX UMETA(Hidden),
};

