#pragma once
#include "CoreMinimal.h"
#include "ZeuzMachineResourcesCountIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzMachineResourcesCountIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AccountID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Type;
    
    FZeuzMachineResourcesCountIn();
};

