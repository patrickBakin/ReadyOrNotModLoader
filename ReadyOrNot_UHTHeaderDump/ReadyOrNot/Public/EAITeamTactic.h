#pragma once
#include "CoreMinimal.h"
#include "EAITeamTactic.generated.h"

UENUM(BlueprintType)
enum class EAITeamTactic : uint8 {
    None,
    Suppress,
    Cover,
    Flank,
    Push,
    Charge,
    Custom,
};

