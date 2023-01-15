#pragma once
#include "CoreMinimal.h"
#include "ESurrenderExitType.generated.h"

UENUM(BlueprintType)
enum class ESurrenderExitType : uint8 {
    None,
    Default,
    Gun,
    Knife,
};

