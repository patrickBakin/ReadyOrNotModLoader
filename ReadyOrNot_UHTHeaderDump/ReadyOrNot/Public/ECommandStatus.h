#pragma once
#include "CoreMinimal.h"
#include "ECommandStatus.generated.h"

UENUM(BlueprintType)
enum class ECommandStatus : uint8 {
    CS_None,
    CS_Inactive,
    CS_Active,
    CS_Complete,
    CS_Failed,
    CS_MAX UMETA(Hidden),
};

