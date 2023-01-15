#pragma once
#include "CoreMinimal.h"
#include "EPlanningStage.generated.h"

UENUM(BlueprintType)
enum class EPlanningStage : uint8 {
    PS_None,
    PS_Planning,
    PS_Situation,
    PS_Loadout,
    PS_MAX UMETA(Hidden),
};

