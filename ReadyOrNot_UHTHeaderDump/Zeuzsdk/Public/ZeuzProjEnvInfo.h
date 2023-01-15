#pragma once
#include "CoreMinimal.h"
#include "ZeuzProjEnvInfo.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzProjEnvInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Title;
    
    FZeuzProjEnvInfo();
};

