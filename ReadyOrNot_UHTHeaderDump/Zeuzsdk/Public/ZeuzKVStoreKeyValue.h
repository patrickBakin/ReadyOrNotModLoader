#pragma once
#include "CoreMinimal.h"
#include "ZeuzKVStoreKey.h"
#include "ZeuzKVStoreKeyValue.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzKVStoreKeyValue : public FZeuzKVStoreKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    FZeuzKVStoreKeyValue();
};

