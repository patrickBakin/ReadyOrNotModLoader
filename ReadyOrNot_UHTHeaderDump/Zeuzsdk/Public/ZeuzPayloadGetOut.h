#pragma once
#include "CoreMinimal.h"
#include "ZeuzPayloadInfo.h"
#include "ZeuzPayloadGetOut.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzPayloadGetOut {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZeuzPayloadInfo> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FZeuzPayloadGetOut();
};

