#pragma once
#include "CoreMinimal.h"
#include "EFilterMovePointGeneration.generated.h"

UENUM(BlueprintType)
enum EFilterMovePointGeneration {
    FMNP_None,
    FNMP_LeftOnly,
    FNMP_RightOnly,
    FNMP_HardLeft,
    FNMP_HardRight,
};

