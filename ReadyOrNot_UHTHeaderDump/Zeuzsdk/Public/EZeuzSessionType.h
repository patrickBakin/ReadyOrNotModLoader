#pragma once
#include "CoreMinimal.h"
#include "EZeuzSessionType.generated.h"

UENUM(BlueprintType)
enum class EZeuzSessionType : uint8 {
    ST_Developer,
    ST_ApiKey,
    ST_User,
    ST_MAX UMETA(Hidden),
};

