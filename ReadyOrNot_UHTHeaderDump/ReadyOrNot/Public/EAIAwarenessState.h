#pragma once
#include "CoreMinimal.h"
#include "EAIAwarenessState.generated.h"

UENUM(BlueprintType)
enum class EAIAwarenessState : uint8 {
    Unalerted,
    Suspicious,
    Alerted,
};

