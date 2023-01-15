#pragma once
#include "CoreMinimal.h"
#include "ERadialMenuCloseReason.generated.h"

UENUM(BlueprintType)
enum class ERadialMenuCloseReason : uint8 {
    MCR_UserClosed,
    MCR_ForceClosed,
    MCR_MAX UMETA(Hidden),
};

