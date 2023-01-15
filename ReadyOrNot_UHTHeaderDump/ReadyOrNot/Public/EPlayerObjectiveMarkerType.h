#pragma once
#include "CoreMinimal.h"
#include "EPlayerObjectiveMarkerType.generated.h"

UENUM(BlueprintType)
enum class EPlayerObjectiveMarkerType : uint8 {
    POMT_None,
    POMT_VipRescue,
    POMT_VipExecute,
    POMT_Free,
    POMT_MAX UMETA(Hidden),
};

