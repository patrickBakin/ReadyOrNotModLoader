#pragma once
#include "CoreMinimal.h"
#include "EPlanningMapTool.generated.h"

UENUM(BlueprintType)
enum class EPlanningMapTool : uint8 {
    PMT_Draw,
    PMT_Pan,
    PMT_MAX UMETA(Hidden),
};

