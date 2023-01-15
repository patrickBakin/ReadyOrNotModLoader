#pragma once
#include "CoreMinimal.h"
#include "EMatchmakingStatus.generated.h"

UENUM(BlueprintType)
enum class EMatchmakingStatus : uint8 {
    MS_None,
    MS_Matchmaking,
    MS_Success,
    MS_Failure,
    MS_Cancelled,
    MS_MAX UMETA(Hidden),
};

