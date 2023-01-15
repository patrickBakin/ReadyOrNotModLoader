#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ZeuzContext.h"
#include "ZeuzApiPing.generated.h"

UCLASS(Blueprintable)
class ZEUZSDK_API UZeuzApiPing : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_ThreeParams(FDelegateDoPingBPS, const FString&, Target, float, Duration, const FString&, Resolved);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateDoPingBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_FourParams(FDelegateDoPingBP, const FString&, Target, float, Duration, const FString&, Resolved, const FString&, Error);
    
    UZeuzApiPing();
    UFUNCTION(BlueprintCallable)
    static void DoPingBP(const FString& Target, float Timeout, const UZeuzApiPing::FDelegateDoPingBP& Callback, const UZeuzApiPing::FDelegateDoPingBPS& OnSuccess, const UZeuzApiPing::FDelegateDoPingBPF& OnFailure, const FZeuzContext& Ctx);
    
};

