#pragma once
#include "CoreMinimal.h"
#include "ZeuzAccountChange.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzAccountChange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Account;
    
    FZeuzAccountChange();
};

