#pragma once
#include "CoreMinimal.h"
#include "ZeuzAllocationRegionCount.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzAllocationRegionCount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RegionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FZeuzAllocationRegionCount();
};

