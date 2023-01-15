#pragma once
#include "CoreMinimal.h"
#include "EChangeBehaviour.generated.h"

UENUM(BlueprintType)
enum class EChangeBehaviour : uint8 {
    CB_Add,
    CB_Remove,
    CB_MAX UMETA(Hidden),
};

