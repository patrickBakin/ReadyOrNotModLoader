#pragma once
#include "CoreMinimal.h"
#include "EGrenadeThrowSettingType.generated.h"

UENUM(BlueprintType)
enum class EGrenadeThrowSettingType : uint8 {
    GUT_QuickGrenadeThrow,
    GUT_ClassicGrenadeThrow,
    GUT_MAX UMETA(Hidden),
};

