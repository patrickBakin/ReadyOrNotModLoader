#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ZeuzContext.h"
#include "ZeuzLobbyUserIn.h"
#include "ZeuzLobbyRefresh.h"
#include "ZeuzLobbyQueryIn.h"
#include "ZeuzLobbyKick.h"
#include "ZeuzLobbyJoin.h"
#include "ZeuzLobbyStartDestroy.h"
#include "ZeuzLobbyStateIn.h"
#include "ZeuzLobbyServerConnect.h"
#include "ZeuzLobbyQueryOut.h"
#include "ZeuzLobbyUsersOut.h"
#include "ZeuzApiLobby.generated.h"

UCLASS(Blueprintable)
class ZEUZSDK_API UZeuzApiLobby : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLobbyUserBPS, const FZeuzLobbyUsersOut&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLobbyUserBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateLobbyUserBP, const FZeuzLobbyUsersOut&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLobbyUpdateBPS, const FZeuzLobbyUsersOut&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLobbyUpdateBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateLobbyUpdateBP, const FZeuzLobbyUsersOut&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLobbyStartBPS, const FZeuzLobbyServerConnect&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLobbyStartBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateLobbyStartBP, const FZeuzLobbyServerConnect&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLobbyRefreshBPS, const FZeuzLobbyUsersOut&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLobbyRefreshBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateLobbyRefreshBP, const FZeuzLobbyUsersOut&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLobbyQueryBPS, const FZeuzLobbyQueryOut&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLobbyQueryBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateLobbyQueryBP, const FZeuzLobbyQueryOut&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE(FDelegateLobbyLeaveBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLobbyLeaveBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLobbyLeaveBP, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE(FDelegateLobbyKickBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLobbyKickBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLobbyKickBP, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLobbyJoinBPS, const FZeuzLobbyUsersOut&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLobbyJoinBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateLobbyJoinBP, const FZeuzLobbyUsersOut&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE(FDelegateLobbyDestroyBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLobbyDestroyBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLobbyDestroyBP, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLobbyCreateBPS, const FZeuzLobbyUsersOut&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLobbyCreateBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateLobbyCreateBP, const FZeuzLobbyUsersOut&, Result, const FString&, Error);
    
    UZeuzApiLobby();
    UFUNCTION(BlueprintCallable)
    static void LobbyUserBP(const FZeuzLobbyUserIn& In, const UZeuzApiLobby::FDelegateLobbyUserBP& Callback, const UZeuzApiLobby::FDelegateLobbyUserBPS& OnSuccess, const UZeuzApiLobby::FDelegateLobbyUserBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyUpdateBP(const FZeuzLobbyStateIn& In, const UZeuzApiLobby::FDelegateLobbyUpdateBP& Callback, const UZeuzApiLobby::FDelegateLobbyUpdateBPS& OnSuccess, const UZeuzApiLobby::FDelegateLobbyUpdateBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyStartBP(const FZeuzLobbyStartDestroy& In, const UZeuzApiLobby::FDelegateLobbyStartBP& Callback, const UZeuzApiLobby::FDelegateLobbyStartBPS& OnSuccess, const UZeuzApiLobby::FDelegateLobbyStartBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyRefreshBP(const FZeuzLobbyRefresh& In, const UZeuzApiLobby::FDelegateLobbyRefreshBP& Callback, const UZeuzApiLobby::FDelegateLobbyRefreshBPS& OnSuccess, const UZeuzApiLobby::FDelegateLobbyRefreshBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyQueryBP(const FZeuzLobbyQueryIn& In, const UZeuzApiLobby::FDelegateLobbyQueryBP& Callback, const UZeuzApiLobby::FDelegateLobbyQueryBPS& OnSuccess, const UZeuzApiLobby::FDelegateLobbyQueryBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyLeaveBP(const FZeuzLobbyJoin& In, const UZeuzApiLobby::FDelegateLobbyLeaveBP& Callback, const UZeuzApiLobby::FDelegateLobbyLeaveBPS& OnSuccess, const UZeuzApiLobby::FDelegateLobbyLeaveBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyKickBP(const FZeuzLobbyKick& In, const UZeuzApiLobby::FDelegateLobbyKickBP& Callback, const UZeuzApiLobby::FDelegateLobbyKickBPS& OnSuccess, const UZeuzApiLobby::FDelegateLobbyKickBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyJoinBP(const FZeuzLobbyJoin& In, const UZeuzApiLobby::FDelegateLobbyJoinBP& Callback, const UZeuzApiLobby::FDelegateLobbyJoinBPS& OnSuccess, const UZeuzApiLobby::FDelegateLobbyJoinBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyDestroyBP(const FZeuzLobbyStartDestroy& In, const UZeuzApiLobby::FDelegateLobbyDestroyBP& Callback, const UZeuzApiLobby::FDelegateLobbyDestroyBPS& OnSuccess, const UZeuzApiLobby::FDelegateLobbyDestroyBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyCreateBP(const FZeuzLobbyStateIn& In, const UZeuzApiLobby::FDelegateLobbyCreateBP& Callback, const UZeuzApiLobby::FDelegateLobbyCreateBPS& OnSuccess, const UZeuzApiLobby::FDelegateLobbyCreateBPF& OnFailure, const FZeuzContext& Ctx);
    
};

