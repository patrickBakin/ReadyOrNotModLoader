#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameModeBase -FallbackName=GameModeBase
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=BlueprintSessionResult -FallbackName=BlueprintSessionResult
#include "MainMenuGM.generated.h"

class UFMODEvent;
class UUserWidget;

UCLASS(Blueprintable, NonTransient)
class READYORNOT_API AMainMenuGM : public AGameModeBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnUpdateSessionSearch, bool, bComplete, FText, OutMessage, bool, bPVPSearch);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* MainMenuMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* MainMenuAmbience;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateSessionSearch OnUpdateSessionSearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* AuthenticationMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* MainMenu;
    
    AMainMenuGM();
    UFUNCTION(BlueprintCallable)
    void ShowMainMenuMsg();
    
    UFUNCTION(BlueprintCallable)
    void OnLobbySuccess();
    
    UFUNCTION(BlueprintCallable)
    void OnLobbyFailed();
    
    UFUNCTION(BlueprintCallable)
    void OnFindSessionSuccess(const TArray<FBlueprintSessionResult>& Results);
    
    UFUNCTION(BlueprintCallable)
    void OnFindSessionFailed(const TArray<FBlueprintSessionResult>& Results);
    
    UFUNCTION(BlueprintCallable)
    void OnDestroySessionBeforeStartingLobby();
    
    UFUNCTION(BlueprintCallable)
    void OnBanStatusChecked(const FString& SteamId, bool bIsBanned, const FString& BanReason, bool bIsMySteamId);
    
    UFUNCTION(BlueprintCallable)
    void GoToLobby(bool bOnlineMode, bool bFriendsOnly);
    
    UFUNCTION(BlueprintCallable)
    void FindOnlineSession(bool bNewSearch, bool bPVPSession);
    
    UFUNCTION(BlueprintCallable)
    void FindNextSessionList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateRestartWidget();
    
    UFUNCTION(BlueprintCallable)
    void CancelSessionSearch();
    
};

