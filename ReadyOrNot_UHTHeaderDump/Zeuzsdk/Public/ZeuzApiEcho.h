#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ZeuzContext.h"
#include "ZeuzEchoOut.h"
#include "ZeuzEcho2Out.h"
#include "ZeuzEchoIn.h"
#include "ZeuzEcho2In.h"
#include "ZeuzEcho3In.h"
#include "ZeuzApiEcho.generated.h"

UCLASS(Blueprintable)
class ZEUZSDK_API UZeuzApiEcho : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateEcho4BPS, const FString&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateEcho4BPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateEcho4BP, const FString&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateEcho3BPS, const FZeuzEchoOut&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateEcho3BPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateEcho3BP, const FZeuzEchoOut&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateEcho2BPS, const FZeuzEcho2Out&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateEcho2BPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateEcho2BP, const FZeuzEcho2Out&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateEcho1BPS, const FZeuzEchoOut&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateEcho1BPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateEcho1BP, const FZeuzEchoOut&, Result, const FString&, Error);
    
    UZeuzApiEcho();
    UFUNCTION(BlueprintCallable)
    static void Echo4BP(const FString& In, const UZeuzApiEcho::FDelegateEcho4BP& Callback, const UZeuzApiEcho::FDelegateEcho4BPS& OnSuccess, const UZeuzApiEcho::FDelegateEcho4BPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void Echo3BP(const FZeuzEcho3In& In, const UZeuzApiEcho::FDelegateEcho3BP& Callback, const UZeuzApiEcho::FDelegateEcho3BPS& OnSuccess, const UZeuzApiEcho::FDelegateEcho3BPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void Echo2BP(const FZeuzEcho2In& In, const UZeuzApiEcho::FDelegateEcho2BP& Callback, const UZeuzApiEcho::FDelegateEcho2BPS& OnSuccess, const UZeuzApiEcho::FDelegateEcho2BPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void Echo1BP(const FZeuzEchoIn& In, const UZeuzApiEcho::FDelegateEcho1BP& Callback, const UZeuzApiEcho::FDelegateEcho1BPS& OnSuccess, const UZeuzApiEcho::FDelegateEcho1BPF& OnFailure, const FZeuzContext& Ctx);
    
};

