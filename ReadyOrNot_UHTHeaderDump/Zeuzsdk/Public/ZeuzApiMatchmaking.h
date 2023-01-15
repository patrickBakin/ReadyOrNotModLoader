#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ZeuzContext.h"
#include "ZeuzMatchMakingServerInfo.h"
#include "ZeuzMatchMakingPartyInit.h"
#include "ZeuzMatchMakingInit.h"
#include "ZeuzMatchMakingStats.h"
#include "ZeuzMatchMakingStatus.h"
#include "ZeuzApiMatchmaking.generated.h"

UCLASS(Blueprintable)
class ZEUZSDK_API UZeuzApiMatchmaking : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMatchmakingUpdateBPS, const FZeuzMatchMakingStatus&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMatchmakingUpdateBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateMatchmakingUpdateBP, const FZeuzMatchMakingStatus&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMatchmakingStatsBPS, const FZeuzMatchMakingStats&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMatchmakingStatsBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateMatchmakingStatsBP, const FZeuzMatchMakingStats&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE(FDelegateMatchmakingServerrefreshBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMatchmakingServerrefreshBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMatchmakingServerrefreshBP, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE(FDelegateMatchmakingServerdestroyBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMatchmakingServerdestroyBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMatchmakingServerdestroyBP, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMatchmakingCreatepartyBPS, const FZeuzMatchMakingStatus&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMatchmakingCreatepartyBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateMatchmakingCreatepartyBP, const FZeuzMatchMakingStatus&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMatchmakingCreateBPS, const FZeuzMatchMakingStatus&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMatchmakingCreateBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateMatchmakingCreateBP, const FZeuzMatchMakingStatus&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE(FDelegateMatchmakingCloseBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMatchmakingCloseBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMatchmakingCloseBP, const FString&, Error);
    
    UZeuzApiMatchmaking();
    UFUNCTION(BlueprintCallable)
    static void MatchmakingUpdateBP(const FString& In, const UZeuzApiMatchmaking::FDelegateMatchmakingUpdateBP& Callback, const UZeuzApiMatchmaking::FDelegateMatchmakingUpdateBPS& OnSuccess, const UZeuzApiMatchmaking::FDelegateMatchmakingUpdateBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void MatchmakingStatsBP(const UZeuzApiMatchmaking::FDelegateMatchmakingStatsBP& Callback, const UZeuzApiMatchmaking::FDelegateMatchmakingStatsBPS& OnSuccess, const UZeuzApiMatchmaking::FDelegateMatchmakingStatsBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void MatchmakingServerrefreshBP(const FZeuzMatchMakingServerInfo& In, const UZeuzApiMatchmaking::FDelegateMatchmakingServerrefreshBP& Callback, const UZeuzApiMatchmaking::FDelegateMatchmakingServerrefreshBPS& OnSuccess, const UZeuzApiMatchmaking::FDelegateMatchmakingServerrefreshBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void MatchmakingServerdestroyBP(const FZeuzMatchMakingServerInfo& In, const UZeuzApiMatchmaking::FDelegateMatchmakingServerdestroyBP& Callback, const UZeuzApiMatchmaking::FDelegateMatchmakingServerdestroyBPS& OnSuccess, const UZeuzApiMatchmaking::FDelegateMatchmakingServerdestroyBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void MatchmakingCreatepartyBP(const FZeuzMatchMakingPartyInit& In, const UZeuzApiMatchmaking::FDelegateMatchmakingCreatepartyBP& Callback, const UZeuzApiMatchmaking::FDelegateMatchmakingCreatepartyBPS& OnSuccess, const UZeuzApiMatchmaking::FDelegateMatchmakingCreatepartyBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void MatchmakingCreateBP(const FZeuzMatchMakingInit& In, const UZeuzApiMatchmaking::FDelegateMatchmakingCreateBP& Callback, const UZeuzApiMatchmaking::FDelegateMatchmakingCreateBPS& OnSuccess, const UZeuzApiMatchmaking::FDelegateMatchmakingCreateBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void MatchmakingCloseBP(const FString& In, const UZeuzApiMatchmaking::FDelegateMatchmakingCloseBP& Callback, const UZeuzApiMatchmaking::FDelegateMatchmakingCloseBPS& OnSuccess, const UZeuzApiMatchmaking::FDelegateMatchmakingCloseBPF& OnFailure, const FZeuzContext& Ctx);
    
};

