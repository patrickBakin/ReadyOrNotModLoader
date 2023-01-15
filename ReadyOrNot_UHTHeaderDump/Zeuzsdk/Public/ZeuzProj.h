#pragma once
#include "CoreMinimal.h"
#include "ZeuzProjEnvInfo.h"
#include "ZeuzItemCommon.h"
#include "ZeuzProj.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzProj : public FZeuzItemCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Account;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Desc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZeuzProjEnvInfo> Envs;
    
    FZeuzProj();
};

