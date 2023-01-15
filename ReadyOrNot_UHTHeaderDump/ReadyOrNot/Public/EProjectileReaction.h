#pragma once
#include "CoreMinimal.h"
#include "EProjectileReaction.generated.h"

UENUM(BlueprintType)
enum class EProjectileReaction : uint8 {
    PR_None,
    PR_Richochet,
    PR_Pierce,
    PR_MAX UMETA(Hidden),
};

