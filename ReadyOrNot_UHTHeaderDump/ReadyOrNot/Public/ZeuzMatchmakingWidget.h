#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
//CROSS-MODULE INCLUDE V2: -ModuleName=Zeuzsdk -ObjectName=ZeuzMatchMakingStatus -FallbackName=ZeuzMatchMakingStatus
#include "EMatchmakingStatus.h"
#include "ZeuzMatchmakingWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API UZeuzMatchmakingWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMatchmakingStatus MatchmakingStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZeuzMatchMakingStatus ZeuzMatchMakingStatus;
    
public:
    UZeuzMatchmakingWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void TryConnectServer(const FString& ConnectIp);
    
    UFUNCTION(BlueprintCallable)
    void StopPartyMatchmaking();
    
    UFUNCTION(BlueprintCallable)
    void StopMatchmaking();
    
    UFUNCTION(BlueprintCallable)
    void StartPartyMatchmaking();
    
    UFUNCTION(BlueprintCallable)
    void StartMatchmaking(const FString& Region);
    
    UFUNCTION(BlueprintCallable)
    void ResetMatchmaking();
    
    UFUNCTION(BlueprintCallable)
    void OnZeuzMatchmakingUpdate(const FZeuzMatchMakingStatus& Status, const FString& Error);
    
    UFUNCTION(BlueprintCallable)
    void OnZeuzMatchmakingCreate(const FZeuzMatchMakingStatus& Status, const FString& Error);
    
    UFUNCTION(BlueprintCallable)
    void MatchmakingUpdate();
    
};

