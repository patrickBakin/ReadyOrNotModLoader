#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ZeuzContext.h"
#include "ZeuzImagemanagerPublishState.h"
#include "ZeuzImageManagerPresignedFileUrlIn.h"
#include "ZeuzImageManagerPullInput.h"
#include "ZeuzImageManagerPublishInput.h"
#include "ZeuzImageManagerManifest.h"
#include "ZeuzImageManagerPushPullOutput.h"
#include "ZeuzImageManagerListEntry.h"
#include "ZeuzApiImagemanager.generated.h"

UCLASS(Blueprintable)
class ZEUZSDK_API UZeuzApiImagemanager : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateImagemanagerPushFileUrlBPS, const FString&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateImagemanagerPushFileUrlBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateImagemanagerPushFileUrlBP, const FString&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateImagemanagerPushBPS, const FZeuzImageManagerPushPullOutput&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateImagemanagerPushBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateImagemanagerPushBP, const FZeuzImageManagerPushPullOutput&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateImagemanagerPullFileUrlBPS, const FString&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateImagemanagerPullFileUrlBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateImagemanagerPullFileUrlBP, const FString&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateImagemanagerPullBPS, const FZeuzImageManagerPushPullOutput&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateImagemanagerPullBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateImagemanagerPullBP, const FZeuzImageManagerPushPullOutput&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateImagemanagerPublishBPS, const FZeuzImagemanagerPublishState&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateImagemanagerPublishBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateImagemanagerPublishBP, const FZeuzImagemanagerPublishState&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateImagemanagerListBPS, const TArray<FZeuzImageManagerListEntry>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateImagemanagerListBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateImagemanagerListBP, const TArray<FZeuzImageManagerListEntry>&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateImagemanagerGetpublishstateBPS, const FZeuzImagemanagerPublishState&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateImagemanagerGetpublishstateBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateImagemanagerGetpublishstateBP, const FZeuzImagemanagerPublishState&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE(FDelegateImagemanagerDiscardBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateImagemanagerDiscardBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateImagemanagerDiscardBP, const FString&, Error);
    
    UZeuzApiImagemanager();
    UFUNCTION(BlueprintCallable)
    static void ImagemanagerPushFileUrlBP(const FZeuzImageManagerPresignedFileUrlIn& In, const UZeuzApiImagemanager::FDelegateImagemanagerPushFileUrlBP& Callback, const UZeuzApiImagemanager::FDelegateImagemanagerPushFileUrlBPS& OnSuccess, const UZeuzApiImagemanager::FDelegateImagemanagerPushFileUrlBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ImagemanagerPushBP(const FZeuzImageManagerManifest& In, const UZeuzApiImagemanager::FDelegateImagemanagerPushBP& Callback, const UZeuzApiImagemanager::FDelegateImagemanagerPushBPS& OnSuccess, const UZeuzApiImagemanager::FDelegateImagemanagerPushBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ImagemanagerPullFileUrlBP(const FZeuzImageManagerPresignedFileUrlIn& In, const UZeuzApiImagemanager::FDelegateImagemanagerPullFileUrlBP& Callback, const UZeuzApiImagemanager::FDelegateImagemanagerPullFileUrlBPS& OnSuccess, const UZeuzApiImagemanager::FDelegateImagemanagerPullFileUrlBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ImagemanagerPullBP(const FZeuzImageManagerPullInput& In, const UZeuzApiImagemanager::FDelegateImagemanagerPullBP& Callback, const UZeuzApiImagemanager::FDelegateImagemanagerPullBPS& OnSuccess, const UZeuzApiImagemanager::FDelegateImagemanagerPullBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ImagemanagerPublishBP(const FZeuzImageManagerPublishInput& In, const UZeuzApiImagemanager::FDelegateImagemanagerPublishBP& Callback, const UZeuzApiImagemanager::FDelegateImagemanagerPublishBPS& OnSuccess, const UZeuzApiImagemanager::FDelegateImagemanagerPublishBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ImagemanagerListBP(const UZeuzApiImagemanager::FDelegateImagemanagerListBP& Callback, const UZeuzApiImagemanager::FDelegateImagemanagerListBPS& OnSuccess, const UZeuzApiImagemanager::FDelegateImagemanagerListBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ImagemanagerGetpublishstateBP(const FString& In, const UZeuzApiImagemanager::FDelegateImagemanagerGetpublishstateBP& Callback, const UZeuzApiImagemanager::FDelegateImagemanagerGetpublishstateBPS& OnSuccess, const UZeuzApiImagemanager::FDelegateImagemanagerGetpublishstateBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ImagemanagerDiscardBP(const UZeuzApiImagemanager::FDelegateImagemanagerDiscardBP& Callback, const UZeuzApiImagemanager::FDelegateImagemanagerDiscardBPS& OnSuccess, const UZeuzApiImagemanager::FDelegateImagemanagerDiscardBPF& OnFailure, const FZeuzContext& Ctx);
    
};

