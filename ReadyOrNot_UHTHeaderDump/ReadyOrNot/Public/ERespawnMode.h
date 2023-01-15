#pragma once
#include "CoreMinimal.h"
#include "ERespawnMode.generated.h"

UENUM(BlueprintType)
enum class ERespawnMode : uint8 {
    NoRespawn,
    ImmediateRespawn,
    DelayedRespawn,
};

