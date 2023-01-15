#pragma once
#include "CoreMinimal.h"
#include "ECoverFireType.generated.h"

UENUM(BlueprintType)
enum class ECoverFireType : uint8 {
    None,
    Blind,
    Exposed,
};

