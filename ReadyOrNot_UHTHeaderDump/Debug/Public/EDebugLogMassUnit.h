#pragma once
#include "CoreMinimal.h"
#include "EDebugLogMassUnit.generated.h"

UENUM(BlueprintType)
enum EDebugLogMassUnit {
    DLMU_Microgram,
    DLMU_Milligram,
    DLMU_Gram,
    DLMU_Kilogram,
    DLMU_Tonne,
    DLMU_Ounce,
    DLMU_Pound,
    DLMU_Stone,
    DLMU_MAX UMETA(Hidden),
};

