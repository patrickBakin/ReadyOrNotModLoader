#pragma once
#include "CoreMinimal.h"
#include "ZeuzAccountDeveloperPasswordResetIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzAccountDeveloperPasswordResetIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EMail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Token;
    
    FZeuzAccountDeveloperPasswordResetIn();
};

