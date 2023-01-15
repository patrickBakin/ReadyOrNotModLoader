#pragma once
#include "CoreMinimal.h"
#include "EDoorDamageType.generated.h"

UENUM(BlueprintType)
enum class EDoorDamageType : uint8 {
    DDT_None,
    DDT_Blasting,
    DDT_Shotgunning,
    DDT_Ramming,
    DDT_Kicking,
    DDT_MAX UMETA(Hidden),
};

