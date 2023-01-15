#pragma once
#include "CoreMinimal.h"
#include "EDebugLogVolumeUnit.generated.h"

UENUM(BlueprintType)
enum EDebugLogVolumeUnit {
    DLVU_Litre,
    DLVU_Millilitre,
    DLVU_Gallon,
    DLVU_Pint,
    DLVU_Quart,
    DLVU_MAX UMETA(Hidden),
};

