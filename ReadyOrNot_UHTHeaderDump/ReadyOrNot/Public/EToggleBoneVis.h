#pragma once
#include "CoreMinimal.h"
#include "EToggleBoneVis.generated.h"

UENUM(BlueprintType)
enum class EToggleBoneVis : uint8 {
    TBV_None,
    TBV_HideBone,
    TBV_ShowBone,
    TBV_MAX UMETA(Hidden),
};

