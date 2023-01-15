#pragma once
#include "CoreMinimal.h"
#include "EIKStateEnum.generated.h"

UENUM(BlueprintType)
enum class EIKStateEnum : uint8 {
    IKE_None,
    IKE_Optimize,
    IKE_Full,
    IKE_MAX UMETA(Hidden),
};

