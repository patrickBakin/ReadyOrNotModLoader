#pragma once
#include "CoreMinimal.h"
#include "EMultitoolFunctions.generated.h"

UENUM(BlueprintType)
enum class EMultitoolFunctions : uint8 {
    MF_None,
    MF_Lockpick,
    MF_Knife,
    MF_Wirecutter,
    MF_MAX UMETA(Hidden),
};

