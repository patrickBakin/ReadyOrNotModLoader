#pragma once
#include "CoreMinimal.h"
#include "EMirrorContactType.generated.h"

UENUM(BlueprintType)
enum class EMirrorContactType : uint8 {
    AI,
    Trap,
    Custom,
    Both,
};

