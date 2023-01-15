#pragma once
#include "CoreMinimal.h"
#include "EVoteState.generated.h"

UENUM(BlueprintType)
enum class EVoteState : uint8 {
    Undecided,
    Yes,
    No,
};

