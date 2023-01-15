#pragma once
#include "CoreMinimal.h"
#include "ESituationPage.generated.h"

UENUM(BlueprintType)
enum class ESituationPage : uint8 {
    SP_None,
    SP_Objectives,
    SP_Suspects,
    SP_Civilians,
    SP_Timeline,
    SP_MAX UMETA(Hidden),
};

