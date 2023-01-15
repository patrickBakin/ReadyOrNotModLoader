#pragma once
#include "CoreMinimal.h"
#include "EAbortCoverReason.generated.h"

UENUM(BlueprintType)
enum class EAbortCoverReason : uint8 {
    Success,
    Forced,
    EnemySensed,
    SeenEnemyApproaching,
    HeardEnemyApproaching,
    EnemyMovingTowardsUs,
    EnemyFiredNearUs,
};

