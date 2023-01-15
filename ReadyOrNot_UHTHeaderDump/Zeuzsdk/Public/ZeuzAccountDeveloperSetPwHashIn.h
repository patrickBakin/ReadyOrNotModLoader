#pragma once
#include "CoreMinimal.h"
#include "ZeuzAccountDeveloperSetPwHashIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzAccountDeveloperSetPwHashIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentPWHash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NewPWHash;
    
    FZeuzAccountDeveloperSetPwHashIn();
};

