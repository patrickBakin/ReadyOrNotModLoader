#pragma once
#include "CoreMinimal.h"
#include "EFootConstEnum.generated.h"

UENUM(BlueprintType)
enum class EFootConstEnum : uint8 {
    FCE_Forward,
    FCE_Inverse,
    FCE_MAX UMETA(Hidden),
};

