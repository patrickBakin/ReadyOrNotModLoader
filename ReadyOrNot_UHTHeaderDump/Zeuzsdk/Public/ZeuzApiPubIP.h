#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ZeuzContext.h"
#include "ZeuzApiPubIP.generated.h"

UCLASS(Blueprintable)
class ZEUZSDK_API UZeuzApiPubIP : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateGetPublicIPBPS, const FString&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateGetPublicIPBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateGetPublicIPBP, const FString&, Result, const FString&, Error);
    
    UZeuzApiPubIP();
    UFUNCTION(BlueprintCallable)
    static void GetPublicIPBP(bool v6, const UZeuzApiPubIP::FDelegateGetPublicIPBP& Callback, const UZeuzApiPubIP::FDelegateGetPublicIPBPS& OnSuccess, const UZeuzApiPubIP::FDelegateGetPublicIPBPF& OnFailure, const FZeuzContext& Ctx);
    
};

