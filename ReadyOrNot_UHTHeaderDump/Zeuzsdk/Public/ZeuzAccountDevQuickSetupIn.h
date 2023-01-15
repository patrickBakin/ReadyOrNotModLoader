#pragma once
#include "CoreMinimal.h"
#include "ZeuzAccountDevQuickSetupIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzAccountDevQuickSetupIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Login;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PWHash;
    
    FZeuzAccountDevQuickSetupIn();
};

