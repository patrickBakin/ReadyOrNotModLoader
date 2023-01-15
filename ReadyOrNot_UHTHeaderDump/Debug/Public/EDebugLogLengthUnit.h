#pragma once
#include "CoreMinimal.h"
#include "EDebugLogLengthUnit.generated.h"

UENUM(BlueprintType)
enum EDebugLogLengthUnit {
    DLLU_Centimeter,
    DLLU_Micrometer,
    DLLU_Millimeter,
    DLLU_Meter,
    DLLU_Kilometer,
    DLLU_Inch,
    DLLU_Feet,
    DLLU_Mile,
    DLLU_NauticalMile,
    DLLU_Yard,
    DLLU_Lightyears,
};

