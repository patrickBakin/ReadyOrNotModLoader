#pragma once
#include "CoreMinimal.h"
#include "ZeuzAPIKeyPwHashIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzAPIKeyPwHashIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString APIKeyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProjID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PWHash;
    
    FZeuzAPIKeyPwHashIn();
};

