#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ZeuzContext.h"
#include "ZeuzTimestamp.h"
#include "ZeuzSimpleAuthLoginIn.h"
#include "ZeuzSimpleProfileUserCreateIn.h"
#include "ZeuzApiSimpleAuth.generated.h"

UCLASS(Blueprintable)
class ZEUZSDK_API UZeuzApiSimpleAuth : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateSimpleProfileUsercreateBPS, const FString&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateSimpleProfileUsercreateBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateSimpleProfileUsercreateBP, const FString&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAuthLoginBPS, FZeuzContext, Context);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAuthLoginBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAuthLoginBP, FZeuzContext, Context, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAuthCheckSessionBPS, FZeuzTimestamp, Expires);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAuthCheckSessionBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAuthCheckSessionBP, FZeuzTimestamp, Expires, const FString&, Error);
    
    UZeuzApiSimpleAuth();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString StringHash(const FString& Val);
    
    UFUNCTION(BlueprintCallable)
    static void SimpleProfileUsercreateBP(const FZeuzSimpleProfileUserCreateIn& In, const UZeuzApiSimpleAuth::FDelegateSimpleProfileUsercreateBP& Callback, const UZeuzApiSimpleAuth::FDelegateSimpleProfileUsercreateBPS& OnSuccess, const UZeuzApiSimpleAuth::FDelegateSimpleProfileUsercreateBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString CalcPWHash(const FString& Login, const FString& Password);
    
    UFUNCTION(BlueprintCallable)
    static void AuthLoginBP(const FZeuzSimpleAuthLoginIn& In, const UZeuzApiSimpleAuth::FDelegateAuthLoginBP& Callback, const UZeuzApiSimpleAuth::FDelegateAuthLoginBPS& OnSuccess, const UZeuzApiSimpleAuth::FDelegateAuthLoginBPF& OnFailure, const FZeuzContext& Ctx, bool SaveDefaultContext);
    
    UFUNCTION(BlueprintCallable)
    static void AuthCheckSessionBP(const UZeuzApiSimpleAuth::FDelegateAuthCheckSessionBP& Callback, const UZeuzApiSimpleAuth::FDelegateAuthCheckSessionBPS& OnSuccess, const UZeuzApiSimpleAuth::FDelegateAuthCheckSessionBPF& OnFailure, const FZeuzContext Ctx);
    
};

