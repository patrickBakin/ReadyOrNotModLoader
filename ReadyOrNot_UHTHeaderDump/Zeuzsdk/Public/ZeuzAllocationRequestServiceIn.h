#pragma once
#include "CoreMinimal.h"
#include "ZeuzAllocationRegionCount.h"
#include "ZeuzAllocationRequestServiceIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzAllocationRequestServiceIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AllocationID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZeuzAllocationRegionCount> RegionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimeoutSeconds;
    
    FZeuzAllocationRequestServiceIn();
};

