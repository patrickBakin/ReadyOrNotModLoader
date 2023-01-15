#pragma once
#include "CoreMinimal.h"
#include "ELedgeHeight.generated.h"

UENUM(BlueprintType)
enum class ELedgeHeight : uint8 {
    LH_None,
    LH_Step,
    LH_Vault,
    LH_Mantle,
    LH_MAX UMETA(Hidden),
};

