#pragma once
#include "CoreMinimal.h"
#include "EEmptyMagReloadType.generated.h"

UENUM(BlueprintType)
enum class EEmptyMagReloadType : uint8 {
    RegularReload,
    FastReload,
};

