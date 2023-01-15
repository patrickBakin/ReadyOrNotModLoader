#pragma once
#include "CoreMinimal.h"
#include "EVoiceType.generated.h"

UENUM(BlueprintType)
enum class EVoiceType : uint8 {
    VT_Local,
    VT_Team,
    VT_MAX UMETA(Hidden),
};

