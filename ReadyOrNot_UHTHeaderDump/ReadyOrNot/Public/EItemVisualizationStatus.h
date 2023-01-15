#pragma once
#include "CoreMinimal.h"
#include "EItemVisualizationStatus.generated.h"

UENUM(BlueprintType)
enum class EItemVisualizationStatus : uint8 {
    IVS_None,
    IVS_FPEquipped,
    IVS_MAX UMETA(Hidden),
};

