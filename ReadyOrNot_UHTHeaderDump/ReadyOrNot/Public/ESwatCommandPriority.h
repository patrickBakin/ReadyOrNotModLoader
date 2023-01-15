#pragma once
#include "CoreMinimal.h"
#include "ESwatCommandPriority.generated.h"

UENUM(BlueprintType)
enum class ESwatCommandPriority : uint8 {
    SCP_PrioritizeCommands,
    SCP_PrioritizeThreats,
    SCP_MAX UMETA(Hidden),
};

