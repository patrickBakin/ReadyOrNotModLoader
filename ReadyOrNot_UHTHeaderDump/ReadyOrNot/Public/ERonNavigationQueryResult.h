#pragma once
#include "CoreMinimal.h"
#include "ERonNavigationQueryResult.generated.h"

UENUM(BlueprintType)
enum class ERonNavigationQueryResult : uint8 {
    Invalid,
    Error,
    Fail,
    Success,
};

