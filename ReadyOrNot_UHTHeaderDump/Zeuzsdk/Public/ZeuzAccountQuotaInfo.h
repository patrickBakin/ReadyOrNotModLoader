#pragma once
#include "CoreMinimal.h"
#include "ZeuzAccountQuotaInfo.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzAccountQuotaInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Account;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuotaCL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuotaBM;
    
    FZeuzAccountQuotaInfo();
};

