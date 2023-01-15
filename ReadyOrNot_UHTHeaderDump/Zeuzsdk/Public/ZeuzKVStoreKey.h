#pragma once
#include "CoreMinimal.h"
#include "ZeuzKVStoreKey.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzKVStoreKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Partition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    FZeuzKVStoreKey();
};

