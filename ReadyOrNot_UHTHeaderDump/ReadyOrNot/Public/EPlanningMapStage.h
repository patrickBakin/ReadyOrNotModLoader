#pragma once
#include "CoreMinimal.h"
#include "EPlanningMapStage.generated.h"

UENUM(BlueprintType)
enum class EPlanningMapStage : uint8 {
    PMS_Overview,
    PMS_Spawn,
    PMS_Deployables,
    PMS_PersonnelMain,
    PMS_PersonnelPoint,
    PMS_PersonnelMapZones,
    PMS_FreeDraw,
    PMS_MAX UMETA(Hidden),
};

