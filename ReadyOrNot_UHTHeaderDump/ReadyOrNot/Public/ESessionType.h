#pragma once
#include "CoreMinimal.h"
#include "ESessionType.generated.h"

UENUM(BlueprintType)
enum class ESessionType : uint8 {
    ST_None,
    ST_SinglePlayer,
    ST_Public,
    ST_Friends,
    ST_MAX UMETA(Hidden),
};

