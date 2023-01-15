#pragma once
#include "CoreMinimal.h"
#include "ETeamType.generated.h"

UENUM(BlueprintType)
enum class ETeamType : uint8 {
    TT_NONE,
    TT_SERT_RED,
    TT_SERT_BLUE,
    TT_SUSPECT,
    TT_CIVILIAN,
    TT_SQUAD,
    TT_MAX UMETA(Hidden),
};

