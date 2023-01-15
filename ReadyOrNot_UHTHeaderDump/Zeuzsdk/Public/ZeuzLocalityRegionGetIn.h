#pragma once
#include "CoreMinimal.h"
#include "ZeuzLocalityRegionGetIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzLocalityRegionGetIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> RegionIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> DisplayNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ContainsLocations;
    
    FZeuzLocalityRegionGetIn();
};

