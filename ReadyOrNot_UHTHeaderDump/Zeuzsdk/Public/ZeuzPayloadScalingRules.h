#pragma once
#include "CoreMinimal.h"
#include "ZeuzSafetyLimits.h"
#include "ZeuzPayloadQuota.h"
#include "ZeuzPayloadDef.h"
#include "ZeuzPayloadScalingRules.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzPayloadScalingRules {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableScaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZeuzPayloadDef PayloadDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZeuzPayloadQuota PayloadQuota;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZeuzSafetyLimits SafetyLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinUnreservedPayloads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxUnreservedPayloads;
    
    FZeuzPayloadScalingRules();
};

