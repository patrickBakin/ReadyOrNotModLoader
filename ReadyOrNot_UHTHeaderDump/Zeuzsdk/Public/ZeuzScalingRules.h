#pragma once
#include "CoreMinimal.h"
#include "ZeuzPayloadScalingRules.h"
#include "ZeuzMachineScalingRules.h"
#include "ZeuzScalingRules.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzScalingRules {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZeuzMachineScalingRules Machine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZeuzPayloadScalingRules Payload;
    
    FZeuzScalingRules();
};

