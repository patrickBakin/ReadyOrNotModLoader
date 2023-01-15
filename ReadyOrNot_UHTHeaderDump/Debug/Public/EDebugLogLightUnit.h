#pragma once
#include "CoreMinimal.h"
#include "EDebugLogLightUnit.generated.h"

UENUM(BlueprintType)
enum EDebugLogLightUnit {
    DLLU_Lumens,
    DLLU_Candela,
    DLLU_Lux,
    DLLU_CandelaPerMeter2,
    DLLU_MAX UMETA(Hidden),
};

