#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "BPUniqueNetId.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=BlueprintSessionResult -FallbackName=BlueprintSessionResult
#include "EBPLoginStatus.h"
#include "AdvancedFriendsInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UAdvancedFriendsInterface : public UInterface {
    GENERATED_BODY()
};

class IAdvancedFriendsInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSessionInviteReceived(FBPUniqueNetId PersonInviting, const FBlueprintSessionResult& SearchResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSessionInviteAccepted(FBPUniqueNetId PersonInvited, const FBlueprintSessionResult& SearchResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerVoiceStateChanged(FBPUniqueNetId PlayerId, bool bIsTalking);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerLoginStatusChanged(EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus, FBPUniqueNetId PlayerUniqueNetID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerLoginChanged(int32 PlayerNum);
    
};

