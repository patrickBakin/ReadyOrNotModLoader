#pragma once
#include "CoreMinimal.h"
#include "ZeuzPortDef.h"
#include "ZeuzPayloadDef.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzPayloadDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HostOS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Cmd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZeuzPortDef> Ports;
    
    FZeuzPayloadDef();
};

