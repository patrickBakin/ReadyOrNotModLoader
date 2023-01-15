#pragma once
#include "CoreMinimal.h"
#include "EActorAnalyticsState.generated.h"

UENUM(BlueprintType)
enum class EActorAnalyticsState : uint8 {
    AAS_None,
    AAS_Wounded,
    AAS_Dead,
    AAS_Arrested,
    AAS_MAX UMETA(Hidden),
};

