#pragma once
#include "CoreMinimal.h"
#include "EToggleInventoryVis.generated.h"

UENUM(BlueprintType)
enum class EToggleInventoryVis : uint8 {
    TIV_None,
    TIV_HideAll,
    TIV_ShowAll,
    TIV_HideEquipped,
    TIV_ShowEquipped,
    TIV_MAX UMETA(Hidden),
};

