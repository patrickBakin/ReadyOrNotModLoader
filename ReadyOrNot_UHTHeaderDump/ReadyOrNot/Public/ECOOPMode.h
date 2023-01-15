#pragma once
#include "CoreMinimal.h"
#include "ECOOPMode.generated.h"

UENUM(BlueprintType)
enum class ECOOPMode : uint8 {
    CM_None,
    CM_BombThreat,
    CM_ActiveShooter,
    CM_HostageRescue,
    CM_BarricadedSuspects,
    CM_Raid,
    CM_MAX UMETA(Hidden),
};

