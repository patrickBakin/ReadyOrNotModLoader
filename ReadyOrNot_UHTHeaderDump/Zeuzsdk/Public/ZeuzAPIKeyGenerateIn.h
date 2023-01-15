#pragma once
#include "CoreMinimal.h"
#include "ZeuzAPIKeyGenerateIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzAPIKeyGenerateIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProjID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Title;
    
    FZeuzAPIKeyGenerateIn();
};

