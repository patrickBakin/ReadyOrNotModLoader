#pragma once
#include "CoreMinimal.h"
#include "EAnimationType.generated.h"

UENUM(BlueprintType)
enum EAnimationType {
    AT_Gun_FP,
    AT_Gun_TP,
    AT_Body_FP,
    AT_Body_TP,
    AT_MAX UMETA(Hidden),
};

