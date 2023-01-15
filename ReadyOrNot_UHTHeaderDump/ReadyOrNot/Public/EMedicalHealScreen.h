#pragma once
#include "CoreMinimal.h"
#include "EMedicalHealScreen.generated.h"

UENUM(BlueprintType)
enum class EMedicalHealScreen : uint8 {
    MHS_Healer,
    MHS_Healee,
    MHS_MortallyWounded,
    MHS_NoBrokenLimbs,
    MHS_MAX UMETA(Hidden),
};

