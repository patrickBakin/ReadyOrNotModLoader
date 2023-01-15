#pragma once
#include "CoreMinimal.h"
#include "EDoorBreachType.generated.h"

UENUM(BlueprintType)
enum class EDoorBreachType : uint8 {
    None,
    Open,
    Move,
    Kick,
    Shotgun,
    Ram,
    C2,
    Custom,
};

