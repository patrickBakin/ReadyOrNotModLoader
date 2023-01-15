#pragma once
#include "CoreMinimal.h"
#include "MODParam.generated.h"

USTRUCT(BlueprintType)
struct FMODParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName paramName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float paramVal;
    
    READYORNOT_API FMODParam();
};

