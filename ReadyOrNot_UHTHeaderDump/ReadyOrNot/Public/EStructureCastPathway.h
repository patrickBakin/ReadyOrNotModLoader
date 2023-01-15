#pragma once
#include "CoreMinimal.h"
#include "EStructureCastPathway.generated.h"

UENUM(BlueprintType)
enum class EStructureCastPathway : uint8 {
    CastSuccess,
    CastFailed,
};

