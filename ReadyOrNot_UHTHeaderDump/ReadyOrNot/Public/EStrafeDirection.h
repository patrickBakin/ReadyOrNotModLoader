#pragma once
#include "CoreMinimal.h"
#include "EStrafeDirection.generated.h"

UENUM(BlueprintType)
namespace EStrafeDirection {
    enum Type {
        F,
        L,
        R,
        B,
        FL,
        FR,
        BR,
        BL,
    };
}

