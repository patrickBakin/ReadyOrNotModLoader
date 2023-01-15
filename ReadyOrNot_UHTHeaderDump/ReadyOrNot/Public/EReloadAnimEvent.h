#pragma once
#include "CoreMinimal.h"
#include "EReloadAnimEvent.generated.h"

UENUM(BlueprintType)
enum class EReloadAnimEvent : uint8 {
    RAE_MagIn,
    RAE_MagOut,
    RAE_MagInQuick,
    RAE_MagOutQuick,
    RAE_BoltClosed,
    RAE_BoltClosedQuick,
    RAE_BoltOpened,
    RAE_BoltOpenedQuick,
    RAE_MAX UMETA(Hidden),
};

