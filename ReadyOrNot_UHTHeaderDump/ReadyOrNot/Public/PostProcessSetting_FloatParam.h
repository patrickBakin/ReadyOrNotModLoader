#pragma once
#include "CoreMinimal.h"
#include "PostProcessSetting_Base.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "PostProcessSetting_FloatParam.generated.h"

USTRUCT(BlueprintType)
struct FPostProcessSetting_FloatParam : public FPostProcessSetting_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float End;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve Curve;
    
    READYORNOT_API FPostProcessSetting_FloatParam();
};

