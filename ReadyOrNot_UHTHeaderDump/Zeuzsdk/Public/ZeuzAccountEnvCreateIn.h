#pragma once
#include "CoreMinimal.h"
#include "ZeuzProperties.h"
#include "ZeuzAccountEnvCreateIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzAccountEnvCreateIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Proj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Desc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZeuzProperties Props;
    
    FZeuzAccountEnvCreateIn();
};

