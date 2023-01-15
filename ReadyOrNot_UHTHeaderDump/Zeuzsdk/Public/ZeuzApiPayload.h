#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ZeuzContext.h"
#include "ZeuzPayloadUpdateIn.h"
#include "ZeuzPayloadStateGetIn.h"
#include "ZeuzPayloadResumeIn.h"
#include "ZeuzPayloadGetIn.h"
#include "ZeuzPayloadCreateIn.h"
#include "ZeuzPayloadAllocateIn.h"
#include "ZeuzPayloadStateInfo.h"
#include "ZeuzPayloadGetOut.h"
#include "ZeuzPayloadInfo.h"
#include "ZeuzApiPayload.generated.h"

UCLASS(Blueprintable)
class ZEUZSDK_API UZeuzApiPayload : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegatePayloadUpdateBPS, const FZeuzPayloadInfo&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegatePayloadUpdateBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegatePayloadUpdateBP, const FZeuzPayloadInfo&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegatePayloadUnreserveBPS, bool, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegatePayloadUnreserveBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegatePayloadUnreserveBP, bool, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegatePayloadStateupdateBPS, const TArray<FZeuzPayloadStateInfo>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegatePayloadStateupdateBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegatePayloadStateupdateBP, const TArray<FZeuzPayloadStateInfo>&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegatePayloadStateinfoBPS, const TArray<FZeuzPayloadStateInfo>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegatePayloadStateinfoBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegatePayloadStateinfoBP, const TArray<FZeuzPayloadStateInfo>&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegatePayloadResumeBPS, const FZeuzPayloadInfo&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegatePayloadResumeBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegatePayloadResumeBP, const FZeuzPayloadInfo&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegatePayloadRestartBPS, const FZeuzPayloadInfo&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegatePayloadRestartBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegatePayloadRestartBP, const FZeuzPayloadInfo&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegatePayloadReserveBPS, bool, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegatePayloadReserveBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegatePayloadReserveBP, bool, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE(FDelegatePayloadRemoveBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegatePayloadRemoveBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegatePayloadRemoveBP, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegatePayloadGetBPS, const FZeuzPayloadGetOut&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegatePayloadGetBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegatePayloadGetBP, const FZeuzPayloadGetOut&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegatePayloadCreateBPS, const FZeuzPayloadInfo&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegatePayloadCreateBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegatePayloadCreateBP, const FZeuzPayloadInfo&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegatePayloadAllocateBPS, const TArray<FZeuzPayloadInfo>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegatePayloadAllocateBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegatePayloadAllocateBP, const TArray<FZeuzPayloadInfo>&, Result, const FString&, Error);
    
    UZeuzApiPayload();
    UFUNCTION(BlueprintCallable)
    static void PayloadUpdateBP(const FZeuzPayloadUpdateIn& In, const UZeuzApiPayload::FDelegatePayloadUpdateBP& Callback, const UZeuzApiPayload::FDelegatePayloadUpdateBPS& OnSuccess, const UZeuzApiPayload::FDelegatePayloadUpdateBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void PayloadUnreserveBP(const FString& In, const UZeuzApiPayload::FDelegatePayloadUnreserveBP& Callback, const UZeuzApiPayload::FDelegatePayloadUnreserveBPS& OnSuccess, const UZeuzApiPayload::FDelegatePayloadUnreserveBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void PayloadStateupdateBP(const FZeuzPayloadStateGetIn& In, const UZeuzApiPayload::FDelegatePayloadStateupdateBP& Callback, const UZeuzApiPayload::FDelegatePayloadStateupdateBPS& OnSuccess, const UZeuzApiPayload::FDelegatePayloadStateupdateBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void PayloadStateinfoBP(const FZeuzPayloadStateGetIn& In, const UZeuzApiPayload::FDelegatePayloadStateinfoBP& Callback, const UZeuzApiPayload::FDelegatePayloadStateinfoBPS& OnSuccess, const UZeuzApiPayload::FDelegatePayloadStateinfoBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void PayloadResumeBP(const FZeuzPayloadResumeIn& In, const UZeuzApiPayload::FDelegatePayloadResumeBP& Callback, const UZeuzApiPayload::FDelegatePayloadResumeBPS& OnSuccess, const UZeuzApiPayload::FDelegatePayloadResumeBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void PayloadRestartBP(const FString& In, const UZeuzApiPayload::FDelegatePayloadRestartBP& Callback, const UZeuzApiPayload::FDelegatePayloadRestartBPS& OnSuccess, const UZeuzApiPayload::FDelegatePayloadRestartBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void PayloadReserveBP(const FString& In, const UZeuzApiPayload::FDelegatePayloadReserveBP& Callback, const UZeuzApiPayload::FDelegatePayloadReserveBPS& OnSuccess, const UZeuzApiPayload::FDelegatePayloadReserveBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void PayloadRemoveBP(const FString& In, const UZeuzApiPayload::FDelegatePayloadRemoveBP& Callback, const UZeuzApiPayload::FDelegatePayloadRemoveBPS& OnSuccess, const UZeuzApiPayload::FDelegatePayloadRemoveBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void PayloadGetBP(const FZeuzPayloadGetIn& In, const UZeuzApiPayload::FDelegatePayloadGetBP& Callback, const UZeuzApiPayload::FDelegatePayloadGetBPS& OnSuccess, const UZeuzApiPayload::FDelegatePayloadGetBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void PayloadCreateBP(const FZeuzPayloadCreateIn& In, const UZeuzApiPayload::FDelegatePayloadCreateBP& Callback, const UZeuzApiPayload::FDelegatePayloadCreateBPS& OnSuccess, const UZeuzApiPayload::FDelegatePayloadCreateBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void PayloadAllocateBP(const FZeuzPayloadAllocateIn& In, const UZeuzApiPayload::FDelegatePayloadAllocateBP& Callback, const UZeuzApiPayload::FDelegatePayloadAllocateBPS& OnSuccess, const UZeuzApiPayload::FDelegatePayloadAllocateBPF& OnFailure, const FZeuzContext& Ctx);
    
};

