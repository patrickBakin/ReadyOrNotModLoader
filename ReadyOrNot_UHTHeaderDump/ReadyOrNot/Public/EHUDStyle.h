#pragma once
#include "CoreMinimal.h"
#include "EHUDStyle.generated.h"

UENUM(BlueprintType)
enum class EHUDStyle : uint8 {
    Default,
    Minimal,
    Detail,
    Immersive,
};

