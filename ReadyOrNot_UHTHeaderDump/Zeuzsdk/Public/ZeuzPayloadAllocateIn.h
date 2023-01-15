#pragma once
#include "CoreMinimal.h"
#include "ZeuzPayloadAllocateIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzPayloadAllocateIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AllocationID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RegionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FZeuzPayloadAllocateIn();
};

