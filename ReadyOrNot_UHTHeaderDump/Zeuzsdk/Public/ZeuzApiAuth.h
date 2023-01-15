#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ZeuzSession.h"
#include "ZeuzAuthLoginResult.h"
#include "ZeuzAuthLoginIn.h"
#include "ZeuzContext.h"
#include "ZeuzTimestamp.h"
#include "ZeuzApiAuth.generated.h"

UCLASS(Blueprintable)
class ZEUZSDK_API UZeuzApiAuth : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE(FDelegateAuthSessiondelBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAuthSessiondelBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAuthSessiondelBP, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE(FDelegateAuthLogoutBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAuthLogoutBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAuthLogoutBP, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAuthLoginBPS, FZeuzAuthLoginResult, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAuthLoginBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAuthLoginBP, FZeuzAuthLoginResult, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAuthCheckBPS, FZeuzTimestamp, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAuthCheckBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAuthCheckBP, FZeuzTimestamp, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAuthActivesessionsgetBPS, const TArray<FZeuzSession>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAuthActivesessionsgetBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAuthActivesessionsgetBP, const TArray<FZeuzSession>&, Result, const FString&, Error);
    
    UZeuzApiAuth();
    UFUNCTION(BlueprintCallable)
    static void AuthSessiondelBP(const FString& In, const UZeuzApiAuth::FDelegateAuthSessiondelBP& Callback, const UZeuzApiAuth::FDelegateAuthSessiondelBPS& OnSuccess, const UZeuzApiAuth::FDelegateAuthSessiondelBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AuthLogoutBP(const FString& In, const UZeuzApiAuth::FDelegateAuthLogoutBP& Callback, const UZeuzApiAuth::FDelegateAuthLogoutBPS& OnSuccess, const UZeuzApiAuth::FDelegateAuthLogoutBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AuthLoginBP(const FZeuzAuthLoginIn& In, const UZeuzApiAuth::FDelegateAuthLoginBP& Callback, const UZeuzApiAuth::FDelegateAuthLoginBPS& OnSuccess, const UZeuzApiAuth::FDelegateAuthLoginBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AuthCheckBP(const FString& In, const UZeuzApiAuth::FDelegateAuthCheckBP& Callback, const UZeuzApiAuth::FDelegateAuthCheckBPS& OnSuccess, const UZeuzApiAuth::FDelegateAuthCheckBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AuthActivesessionsgetBP(const FString& In, const UZeuzApiAuth::FDelegateAuthActivesessionsgetBP& Callback, const UZeuzApiAuth::FDelegateAuthActivesessionsgetBPS& OnSuccess, const UZeuzApiAuth::FDelegateAuthActivesessionsgetBPF& OnFailure, const FZeuzContext& Ctx);
    
};

