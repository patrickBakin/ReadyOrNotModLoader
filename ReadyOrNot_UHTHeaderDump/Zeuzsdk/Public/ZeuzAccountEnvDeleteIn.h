#pragma once
#include "CoreMinimal.h"
#include "ZeuzAccountEnvDeleteIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzAccountEnvDeleteIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Proj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Env;
    
    FZeuzAccountEnvDeleteIn();
};

