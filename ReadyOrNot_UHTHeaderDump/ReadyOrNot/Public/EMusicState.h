#pragma once
#include "CoreMinimal.h"
#include "EMusicState.generated.h"

UENUM(BlueprintType)
enum class EMusicState : uint8 {
    MS_Preplanning,
    MS_Ambient,
    MS_Action,
    MS_Scripted,
    MS_MAX UMETA(Hidden),
};

