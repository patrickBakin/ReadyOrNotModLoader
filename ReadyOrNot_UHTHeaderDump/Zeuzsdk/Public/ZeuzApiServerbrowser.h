#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ZeuzContext.h"
#include "ZeuzServerBrowserStateIn.h"
#include "ZeuzServerBrowserQueryIn.h"
#include "ZeuzServerBrowserQueryOut.h"
#include "ZeuzApiServerbrowser.generated.h"

UCLASS(Blueprintable)
class ZEUZSDK_API UZeuzApiServerbrowser : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE(FDelegateServerbrowserRefreshBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateServerbrowserRefreshBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateServerbrowserRefreshBP, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateServerbrowserQueryBPS, const FZeuzServerBrowserQueryOut&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateServerbrowserQueryBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateServerbrowserQueryBP, const FZeuzServerBrowserQueryOut&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE(FDelegateServerbrowserDestroyBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateServerbrowserDestroyBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateServerbrowserDestroyBP, const FString&, Error);
    
    UZeuzApiServerbrowser();
    UFUNCTION(BlueprintCallable)
    static void ServerbrowserRefreshBP(const FZeuzServerBrowserStateIn& In, const UZeuzApiServerbrowser::FDelegateServerbrowserRefreshBP& Callback, const UZeuzApiServerbrowser::FDelegateServerbrowserRefreshBPS& OnSuccess, const UZeuzApiServerbrowser::FDelegateServerbrowserRefreshBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ServerbrowserQueryBP(const FZeuzServerBrowserQueryIn& In, const UZeuzApiServerbrowser::FDelegateServerbrowserQueryBP& Callback, const UZeuzApiServerbrowser::FDelegateServerbrowserQueryBPS& OnSuccess, const UZeuzApiServerbrowser::FDelegateServerbrowserQueryBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ServerbrowserDestroyBP(const FString& In, const UZeuzApiServerbrowser::FDelegateServerbrowserDestroyBP& Callback, const UZeuzApiServerbrowser::FDelegateServerbrowserDestroyBPS& OnSuccess, const UZeuzApiServerbrowser::FDelegateServerbrowserDestroyBPF& OnFailure, const FZeuzContext& Ctx);
    
};

