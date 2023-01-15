#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ZeuzAPIKey.h"
#include "ZeuzAPIKeyDeleteIn.h"
#include "ZeuzAPIKeyGenerateIn.h"
#include "ZeuzAPIKeyGetIn.h"
#include "ZeuzAPIKeyPwHashIn.h"
#include "ZeuzContext.h"
#include "ZeuzApiApikey.generated.h"

UCLASS(Blueprintable)
class ZEUZSDK_API UZeuzApiApikey : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateApikeyUpdateBPS, FZeuzAPIKey, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateApikeyUpdateBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateApikeyUpdateBP, FZeuzAPIKey, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateApikeySetpwhashBPS, FZeuzAPIKey, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateApikeySetpwhashBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateApikeySetpwhashBP, FZeuzAPIKey, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE(FDelegateApikeyRevokeBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateApikeyRevokeBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateApikeyRevokeBP, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateApikeyGetBPS, const TArray<FZeuzAPIKey>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateApikeyGetBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateApikeyGetBP, const TArray<FZeuzAPIKey>&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateApikeyGetallBPS, const TArray<FZeuzAPIKey>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateApikeyGetallBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateApikeyGetallBP, const TArray<FZeuzAPIKey>&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateApikeyGenerateBPS, FZeuzAPIKey, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateApikeyGenerateBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateApikeyGenerateBP, FZeuzAPIKey, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE(FDelegateApikeyDeleteBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateApikeyDeleteBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateApikeyDeleteBP, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateApikeyCreateBPS, FZeuzAPIKey, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateApikeyCreateBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateApikeyCreateBP, FZeuzAPIKey, Result, const FString&, Error);
    
    UZeuzApiApikey();
    UFUNCTION(BlueprintCallable)
    static void ApikeyUpdateBP(FZeuzAPIKey In, const UZeuzApiApikey::FDelegateApikeyUpdateBP& Callback, const UZeuzApiApikey::FDelegateApikeyUpdateBPS& OnSuccess, const UZeuzApiApikey::FDelegateApikeyUpdateBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ApikeySetpwhashBP(const FZeuzAPIKeyPwHashIn& In, const UZeuzApiApikey::FDelegateApikeySetpwhashBP& Callback, const UZeuzApiApikey::FDelegateApikeySetpwhashBPS& OnSuccess, const UZeuzApiApikey::FDelegateApikeySetpwhashBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ApikeyRevokeBP(const FZeuzAPIKeyDeleteIn& In, const UZeuzApiApikey::FDelegateApikeyRevokeBP& Callback, const UZeuzApiApikey::FDelegateApikeyRevokeBPS& OnSuccess, const UZeuzApiApikey::FDelegateApikeyRevokeBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ApikeyGetBP(const FString& In, const UZeuzApiApikey::FDelegateApikeyGetBP& Callback, const UZeuzApiApikey::FDelegateApikeyGetBPS& OnSuccess, const UZeuzApiApikey::FDelegateApikeyGetBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ApikeyGetallBP(const FZeuzAPIKeyGetIn& In, const UZeuzApiApikey::FDelegateApikeyGetallBP& Callback, const UZeuzApiApikey::FDelegateApikeyGetallBPS& OnSuccess, const UZeuzApiApikey::FDelegateApikeyGetallBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ApikeyGenerateBP(const FZeuzAPIKeyGenerateIn& In, const UZeuzApiApikey::FDelegateApikeyGenerateBP& Callback, const UZeuzApiApikey::FDelegateApikeyGenerateBPS& OnSuccess, const UZeuzApiApikey::FDelegateApikeyGenerateBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ApikeyDeleteBP(const FZeuzAPIKeyDeleteIn& In, const UZeuzApiApikey::FDelegateApikeyDeleteBP& Callback, const UZeuzApiApikey::FDelegateApikeyDeleteBPS& OnSuccess, const UZeuzApiApikey::FDelegateApikeyDeleteBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ApikeyCreateBP(FZeuzAPIKey In, const UZeuzApiApikey::FDelegateApikeyCreateBP& Callback, const UZeuzApiApikey::FDelegateApikeyCreateBPS& OnSuccess, const UZeuzApiApikey::FDelegateApikeyCreateBPF& OnFailure, const FZeuzContext& Ctx);
    
};

