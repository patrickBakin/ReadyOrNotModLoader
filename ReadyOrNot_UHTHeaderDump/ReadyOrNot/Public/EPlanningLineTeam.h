#pragma once
#include "CoreMinimal.h"
#include "EPlanningLineTeam.generated.h"

UENUM(BlueprintType)
enum class EPlanningLineTeam : uint8 {
    PLT_Gold,
    PLT_Red,
    PLT_Blue,
    PLT_MAX UMETA(Hidden),
};

