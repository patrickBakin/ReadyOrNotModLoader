#pragma once
#include "CoreMinimal.h"
#include "EPostProcessEndOptions.generated.h"

UENUM(BlueprintType)
enum class EPostProcessEndOptions : uint8 {
    End,
    Hold,
    Loop,
    Reverse,
};

