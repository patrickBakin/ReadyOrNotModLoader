#pragma once
#include "CoreMinimal.h"
#include "EDroneDamageSpeed.generated.h"

UENUM(BlueprintType)
enum class EDroneDamageSpeed : uint8 {
    DDS_10PercentSpeed,
    DDS_20PercentSpeed,
    DDS_30PercentSpeed,
    DDS_40PercentSpeed,
    DDS_50PercentSpeed,
    DDS_60PercentSpeed,
    DDS_70PercentSpeed,
    DDS_80PercentSpeed,
    DDS_90PercentSpeed,
    DDS_MAX UMETA(Hidden),
};

