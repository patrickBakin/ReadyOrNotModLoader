#pragma once
#include "CoreMinimal.h"
#include "EPersonnel.generated.h"

UENUM(BlueprintType)
enum class EPersonnel : uint8 {
    PERS_None,
    PERS_TruckDriver,
    PERS_NoisemakerOperator,
    PERS_VentilationExpert,
    PERS_Spotter,
    PERS_Marksman,
    PERS_Sniper,
    PERS_FloodlightOperator,
    PERS_PowerCrew,
    PERS_Negotiator,
    PERS_MAX UMETA(Hidden),
};

