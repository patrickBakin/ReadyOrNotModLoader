#pragma once
#include "CoreMinimal.h"
#include "ZeuzProfileItemNameCount.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzProfileItemNameCount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FZeuzProfileItemNameCount();
};

