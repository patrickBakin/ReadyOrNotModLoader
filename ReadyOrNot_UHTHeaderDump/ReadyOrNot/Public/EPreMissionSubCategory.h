#pragma once
#include "CoreMinimal.h"
#include "EPreMissionSubCategory.generated.h"

UENUM(BlueprintType)
enum class EPreMissionSubCategory : uint8 {
    None,
    Primary,
    Secondary,
    Tactical,
    Appearance,
    Protection,
    ItemSelection,
    Grenades,
    Clean,
};

