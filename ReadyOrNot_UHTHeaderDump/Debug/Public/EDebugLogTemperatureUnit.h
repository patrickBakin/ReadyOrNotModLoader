#pragma once
#include "CoreMinimal.h"
#include "EDebugLogTemperatureUnit.generated.h"

UENUM(BlueprintType)
enum EDebugLogTemperatureUnit {
    DLTU_Celsius,
    DLTU_Fahrenheit,
    DLTU_Kelvin,
};

