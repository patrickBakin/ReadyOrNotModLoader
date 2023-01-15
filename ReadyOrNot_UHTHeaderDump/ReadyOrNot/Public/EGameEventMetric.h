#pragma once
#include "CoreMinimal.h"
#include "EGameEventMetric.generated.h"

UENUM(BlueprintType)
enum class EGameEventMetric : uint8 {
    GEM_NONE,
    GEM_GAME_STARTED,
    GEM_GAME_JOINED,
    GEM_GAME_FINISHED,
    GEM_GAME_CRASHED,
    GEM_PLAYER_GAME_FINISHED,
    GEM_MAX UMETA(Hidden),
};

