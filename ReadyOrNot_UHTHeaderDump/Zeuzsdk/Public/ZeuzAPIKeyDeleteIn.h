#pragma once
#include "CoreMinimal.h"
#include "ZeuzAPIKeyDeleteIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzAPIKeyDeleteIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString APIKeyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProjID;
    
    FZeuzAPIKeyDeleteIn();
};

