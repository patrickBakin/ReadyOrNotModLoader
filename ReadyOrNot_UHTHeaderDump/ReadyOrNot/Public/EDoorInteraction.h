#pragma once
#include "CoreMinimal.h"
#include "EDoorInteraction.generated.h"

UENUM(BlueprintType)
enum class EDoorInteraction : uint8 {
    None,
    Open,
    Close,
    Peek,
    Push,
    Kick,
    Kick_Fail,
    Ram,
};

