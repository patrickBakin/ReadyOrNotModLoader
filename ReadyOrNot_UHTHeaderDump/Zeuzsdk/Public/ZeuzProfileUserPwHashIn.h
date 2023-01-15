#pragma once
#include "CoreMinimal.h"
#include "ZeuzProfileUserPwHashIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzProfileUserPwHashIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PWHash;
    
    FZeuzProfileUserPwHashIn();
};

