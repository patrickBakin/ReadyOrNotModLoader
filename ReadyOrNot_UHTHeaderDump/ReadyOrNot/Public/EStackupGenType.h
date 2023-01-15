#pragma once
#include "CoreMinimal.h"
#include "EStackupGenType.generated.h"

UENUM(BlueprintType)
enum class EStackupGenType : uint8 {
    SG_90DegreeLine,
    SG_0DegreeLine,
    SG_MAX UMETA(Hidden),
};

