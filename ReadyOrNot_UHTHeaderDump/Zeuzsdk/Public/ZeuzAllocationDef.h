#pragma once
#include "CoreMinimal.h"
#include "ZeuzMachineSpec.h"
#include "ZeuzScalingRules.h"
#include "ZeuzAllocationDef.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzAllocationDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Regions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZeuzScalingRules ScalingRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZeuzMachineSpec MachineMinSpec;
    
    FZeuzAllocationDef();
};

