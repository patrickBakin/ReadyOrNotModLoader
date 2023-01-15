#pragma once
#include "CoreMinimal.h"
#include "ZeuzAPIKeyGetIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzAPIKeyGetIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString APIKeyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProjID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NotRevoked;
    
    FZeuzAPIKeyGetIn();
};

