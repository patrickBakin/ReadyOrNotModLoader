#pragma once
#include "CoreMinimal.h"
#include "ZeuzKVStoreKeyValue.h"
#include "ZeuzKVStorePutIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzKVStorePutIn : public FZeuzKVStoreKeyValue {
    GENERATED_BODY()
public:
    FZeuzKVStorePutIn();
};

