#pragma once
#include "CoreMinimal.h"
#include "EMatchState.generated.h"

UENUM(BlueprintType)
enum class EMatchState : uint8 {
    MS_None,
    MS_Warmup,
    MS_Playing,
    MS_RoundEnded,
    MS_MatchEnded,
    MS_GoingToNextLevel,
    MS_MAX UMETA(Hidden),
};

