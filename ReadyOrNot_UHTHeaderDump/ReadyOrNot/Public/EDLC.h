#pragma once
#include "CoreMinimal.h"
#include "EDLC.generated.h"

UENUM(BlueprintType)
enum class EDLC : uint8 {
    DLC_None,
    DLC_Supporter,
    DLC_PreorderBonus,
    DLC_MAX UMETA(Hidden),
};

