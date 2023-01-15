#pragma once
#include "CoreMinimal.h"
#include "ERONBuildConfiguration.generated.h"

UENUM(BlueprintType)
enum class ERONBuildConfiguration : uint8 {
    Unknown,
    Editor,
    Debug,
    Development,
    Shipping,
    FinalRelease,
    Test,
};

