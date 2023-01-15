#pragma once
#include "CoreMinimal.h"
#include "ZeuzAllocationInfo.h"
#include "ZeuzAllocationGetOut.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzAllocationGetOut {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZeuzAllocationInfo> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FZeuzAllocationGetOut();
};

