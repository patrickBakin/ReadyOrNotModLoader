#pragma once
#include "CoreMinimal.h"
#include "ZeuzMachineResourceDataIn.h"
#include "ZeuzMachineResourceUpdateIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzMachineResourceUpdateIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ResourceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZeuzMachineResourceDataIn Data;
    
    FZeuzMachineResourceUpdateIn();
};

