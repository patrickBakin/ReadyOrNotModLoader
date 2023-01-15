#pragma once
#include "CoreMinimal.h"
#include "ENavType.generated.h"

UENUM(BlueprintType)
enum class ENavType : uint8 {
    NT_SinglePoint,
    NT_Circle,
    NT_Grid,
    NT_MAX UMETA(Hidden),
};

