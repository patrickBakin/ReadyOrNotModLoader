#pragma once
#include "CoreMinimal.h"
#include "ECoverFireType_FirePoint.generated.h"

UENUM(BlueprintType)
enum class ECoverFireType_FirePoint : uint8 {
    CT_Front,
    CT_Left,
    CT_Right,
    CT_MAX UMETA(Hidden),
};

