#pragma once
#include "CoreMinimal.h"
#include "EShotgunReloadType.generated.h"

UENUM(BlueprintType)
enum class EShotgunReloadType : uint8 {
    SRT_SingleLoad,
    SRT_MultiLoad,
    SRT_MAX UMETA(Hidden),
};

