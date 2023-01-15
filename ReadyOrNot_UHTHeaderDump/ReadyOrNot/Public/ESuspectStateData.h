#pragma once
#include "CoreMinimal.h"
#include "ESuspectStateData.generated.h"

UENUM(BlueprintType)
enum class ESuspectStateData : uint8 {
    SSD_NONE,
    SSD_IS_TRACKING,
    SSD_HAS_BEST_ACTION,
    SSD_HAS_BEST_CONTINUOUS_ACTION = 0x4,
    SSD_HAS_BEST_COMBAT_MOVE_ACTION = 0x8,
    SSD_MAX UMETA(Hidden),
};

