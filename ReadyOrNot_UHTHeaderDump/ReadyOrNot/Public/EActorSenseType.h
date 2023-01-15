#pragma once
#include "CoreMinimal.h"
#include "EActorSenseType.generated.h"

UENUM(BlueprintType)
enum class EActorSenseType : uint8 {
    Sight,
    Sound,
    Damage,
};

