#pragma once
#include "CoreMinimal.h"
#include "ETutorialMissionType.generated.h"

UENUM(BlueprintType)
enum class ETutorialMissionType : uint8 {
    ETM_None,
    ETM_ShootingRange,
    ETM_KillHouse,
    ETM_BasicControls,
    ETM_Mirrorgun,
    ETM_StackUp,
    ETM_Arrest,
    ETM_Grenades,
    ETM_Movement,
    ETM_MAX UMETA(Hidden),
};

