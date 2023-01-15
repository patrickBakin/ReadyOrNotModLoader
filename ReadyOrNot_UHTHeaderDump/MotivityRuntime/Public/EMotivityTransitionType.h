#pragma once
#include "CoreMinimal.h"
#include "EMotivityTransitionType.generated.h"

UENUM(BlueprintType)
enum class EMotivityTransitionType : uint8 {
    StandardBlend,
    Inertialization,
};

