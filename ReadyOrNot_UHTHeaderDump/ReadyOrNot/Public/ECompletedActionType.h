#pragma once
#include "CoreMinimal.h"
#include "ECompletedActionType.generated.h"

UENUM(BlueprintType)
enum class ECompletedActionType : uint8 {
    CAT_ArrestedTarget,
    CAT_ReportedTarget,
    CAT_FreedTarget,
    CAT_LockPicked,
    CAT_LadderRetracted,
    CAT_ItemRetrieved,
    CAT_MagInserted,
    CAT_MagRemoved,
    CAT_MagChanged,
    CAT_InteractActor,
    CAT_WedgeDeployed,
    CAT_C2Deployed,
    CAT_WedgeRemoved,
    CAT_TrapDisarmed,
    CAT_C2Removed,
    CAT_MAX UMETA(Hidden),
};

