#pragma once
#include "CoreMinimal.h"
#include "EDebugLogSpeedUnit.generated.h"

UENUM(BlueprintType)
enum EDebugLogSpeedUnit {
    DLSU_CentimetersPerSec,
    DLSU_CentimetersPerHour,
    DLSU_MicrometersPerSec,
    DLSU_MicrometersPerHour,
    DLSU_MillimetersPerSec,
    DLSU_MillimetersPerHour,
    DLSU_MetersPerSec,
    DLSU_MetersPerHour,
    DLSU_KilometersPerSec,
    DLSU_KilometersPerHour,
    DLSU_InchesPerSec,
    DLSU_InchesPerHour,
    DLSU_FeetPerSec,
    DLSU_FeetPerHour,
    DLSU_MilesPerSec,
    DLSU_MilesPerHour,
    DLSU_YardsPerSec,
    DLSU_YardsPerHour,
    DLSU_Knots,
    DLSU_MAX UMETA(Hidden),
};

