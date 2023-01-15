#pragma once
#include "CoreMinimal.h"
#include "EClueState.generated.h"

UENUM(BlueprintType)
enum class EClueState : uint8 {
    Unclaimed,
    Collected,
    Dropped,
};

