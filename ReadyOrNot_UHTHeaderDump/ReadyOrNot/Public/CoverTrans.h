#pragma once
#include "CoreMinimal.h"
#include "CoverTrans.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FCoverTrans {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CoverEnterTrans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CoverExitTrans;
    
    READYORNOT_API FCoverTrans();
};

