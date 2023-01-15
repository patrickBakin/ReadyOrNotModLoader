#pragma once
#include "CoreMinimal.h"
#include "EPlayerHealthStatus.generated.h"

UENUM(BlueprintType)
enum class EPlayerHealthStatus : uint8 {
    HS_Healthy,
    HS_Injured,
    HS_Downed,
    HS_Incapacitated,
    HS_Dead,
    HS_Arrested,
    HS_NotAvailable,
    HS_MAX UMETA(Hidden),
};

