#pragma once
#include "CoreMinimal.h"
#include "EFireMode.generated.h"

UENUM(BlueprintType)
enum class EFireMode : uint8 {
    FM_Single,
    FM_Auto,
    FM_Burst,
    FM_Continuous,
    FM_Safe,
    FM_MAX UMETA(Hidden),
};

