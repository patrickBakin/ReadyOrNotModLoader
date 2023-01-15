#pragma once
#include "CoreMinimal.h"
#include "ZeuzMachineInfo.h"
#include "ZeuzMachineGetOut.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzMachineGetOut {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZeuzMachineInfo> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FZeuzMachineGetOut();
};

