#pragma once
#include "CoreMinimal.h"
#include "EPlanningPage.generated.h"

UENUM(BlueprintType)
enum class EPlanningPage : uint8 {
    PP_None,
    PP_Overview,
    PP_Spawn,
    PP_Deployables,
    PP_Tactics,
    PP_FreePlanning,
    PP_MAX UMETA(Hidden),
};

