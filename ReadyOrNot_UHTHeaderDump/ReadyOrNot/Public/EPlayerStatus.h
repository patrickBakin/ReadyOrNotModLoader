#pragma once
#include "CoreMinimal.h"
#include "EPlayerStatus.generated.h"

UENUM(BlueprintType)
enum class EPlayerStatus : uint8 {
    PS_None,
    PS_NotReady,
    PS_Ready,
    PS_Deployed,
    PS_MAX UMETA(Hidden),
};

