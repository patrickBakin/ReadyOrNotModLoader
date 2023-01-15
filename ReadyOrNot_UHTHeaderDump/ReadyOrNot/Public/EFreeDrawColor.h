#pragma once
#include "CoreMinimal.h"
#include "EFreeDrawColor.generated.h"

UENUM(BlueprintType)
enum class EFreeDrawColor : uint8 {
    FDC_Black,
    FDC_Red,
    FDC_Blue,
    FDC_Gold,
    FDC_Green,
    FDC_Purple,
    FDC_Orange,
    FDC_Cyan,
    FDC_MAX UMETA(Hidden),
};

