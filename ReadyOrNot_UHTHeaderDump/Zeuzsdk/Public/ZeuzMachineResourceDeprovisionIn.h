#pragma once
#include "CoreMinimal.h"
#include "ZeuzMachineResourceDeprovisionIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzMachineResourceDeprovisionIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AllocationID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Resources;
    
    FZeuzMachineResourceDeprovisionIn();
};

