#pragma once
#include "CoreMinimal.h"
#include "EInterfaceSoundType.generated.h"

UENUM(BlueprintType)
enum class EInterfaceSoundType : uint8 {
    IST_None,
    IST_Checkmark,
    IST_Button,
    IST_MAX UMETA(Hidden),
};

