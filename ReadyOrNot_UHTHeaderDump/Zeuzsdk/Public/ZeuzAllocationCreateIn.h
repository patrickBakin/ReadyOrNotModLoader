#pragma once
#include "CoreMinimal.h"
#include "ZeuzAllocationDef.h"
#include "ZeuzAllocationCreateIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzAllocationCreateIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProjID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EnvID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZeuzAllocationDef AllocationDef;
    
    FZeuzAllocationCreateIn();
};

