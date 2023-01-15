#pragma once
#include "CoreMinimal.h"
#include "ZeuzProfileItemRemIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzProfileItemRemIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FZeuzProfileItemRemIn();
};

