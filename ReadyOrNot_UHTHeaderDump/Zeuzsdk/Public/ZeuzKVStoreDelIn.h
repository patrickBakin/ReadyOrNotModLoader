#pragma once
#include "CoreMinimal.h"
#include "ZeuzKVStoreKey.h"
#include "ZeuzKVStoreDelIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzKVStoreDelIn : public FZeuzKVStoreKey {
    GENERATED_BODY()
public:
    FZeuzKVStoreDelIn();
};

