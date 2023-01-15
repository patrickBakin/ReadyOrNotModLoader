#pragma once
#include "CoreMinimal.h"
#include "ETrackingStage.generated.h"

UENUM(BlueprintType)
enum class ETrackingStage : uint8 {
    TS_FindingCover,
    TS_InvestigatingPoints,
    TS_ReturningToOriginalSpot,
    TS_MAX UMETA(Hidden),
};

