#pragma once
#include "CoreMinimal.h"
#include "ESquadPosition.generated.h"

UENUM(BlueprintType)
enum class ESquadPosition : uint8 {
    SP_Alpha,
    SP_Beta,
    SP_Charlie,
    SP_Delta,
    SP_Foxtrot,
    SP_NONE,
    SP_MAX UMETA(Hidden),
};

