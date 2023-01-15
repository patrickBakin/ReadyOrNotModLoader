#pragma once
#include "CoreMinimal.h"
#include "EDebugLogAngularUnit.generated.h"

UENUM(BlueprintType)
enum EDebugLogAngularUnit {
    DLAU_Degrees,
    DLAU_Radians,
    DLAU_MAX UMETA(Hidden),
};

