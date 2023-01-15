#pragma once
#include "CoreMinimal.h"
#include "ZeuzProviderResourceTypes.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzProviderResourceTypes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Provider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ResourceTypes;
    
    FZeuzProviderResourceTypes();
};

