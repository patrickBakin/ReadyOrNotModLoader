#pragma once
#include "CoreMinimal.h"
#include "ZeuzPayloadDef.h"
#include "ZeuzPayloadUpdateIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzPayloadUpdateIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PayloadID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZeuzPayloadDef PayloadDef;
    
    FZeuzPayloadUpdateIn();
};

