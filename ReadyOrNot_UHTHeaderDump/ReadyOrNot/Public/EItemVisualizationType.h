#pragma once
#include "CoreMinimal.h"
#include "EItemVisualizationType.generated.h"

UENUM(BlueprintType)
enum class EItemVisualizationType : uint8 {
    IVT_None,
    IVT_Primary,
    IVT_Secondary,
    IVT_LongTactical,
    IVT_Helmet,
    IVT_Equipped,
    IVT_MAX UMETA(Hidden),
};

