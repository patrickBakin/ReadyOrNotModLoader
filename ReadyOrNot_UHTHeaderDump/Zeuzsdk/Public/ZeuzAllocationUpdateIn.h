#pragma once
#include "CoreMinimal.h"
#include "ZeuzAllocationDef.h"
#include "ZeuzAllocationUpdateIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzAllocationUpdateIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AllocationID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZeuzAllocationDef AllocationDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    FZeuzAllocationUpdateIn();
};

