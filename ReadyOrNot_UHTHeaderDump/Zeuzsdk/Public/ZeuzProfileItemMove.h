#pragma once
#include "CoreMinimal.h"
#include "ZeuzProfileItemMove.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzProfileItemMove {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FZeuzProfileItemMove();
};

