#pragma once
#include "CoreMinimal.h"
#include "EHighScoreCategory.generated.h"

UENUM(BlueprintType)
enum class EHighScoreCategory : uint8 {
    HSC_None,
    HSC_COOP_DAILY,
    HSC_COOP_SEASON,
    HSC_PVP_DAILY,
    HSC_PVP_SEASON,
    HSC_MAX UMETA(Hidden),
};

