#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameModeBase -FallbackName=GameModeBase
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "SavedLoadout.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "ETeamType.h"
#include "ERespawnMode.h"
#include "EMatchState.h"
#include "ReadyOrNotGameMode.generated.h"

class AActor;
class APawn;
class ACharacter;
class UUserWidget;
class APlayerController;
class AReadyOrNotGameState;
class AReadyOrNotCharacter;
class ACyberneticCharacter;
class APlayerCharacter;
class AReadyOrNotGameSession;
class ASpectatorPawn;
class ASpectatePawn;
class ATOCManager;

UCLASS(Blueprintable, NonTransient)
class READYORNOT_API AReadyOrNotGameMode : public AGameModeBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerRespawned, APawn*, Pawn, APlayerController*, Controller);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMatchStateChanged, EMatchState, NewMatchState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMatchStarted);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle GameModeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AReadyOrNotCharacter*, int32> AbuseCountMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCampaignTransitioning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle Reinforcement_Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRunWarmup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bArrestSpectator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowLoadouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPlayersAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabledForPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString urlShortName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Password;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> PlayerStartClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASpectatePawn> DeadSpectatorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LobbyStartTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RedCustomizationStartTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlueCustomizationStartTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SWATBlueStartTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SWATRedStartTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SuspectStartTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpectateKillerOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialPlayerRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawPlayerCameraSphere: 1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMatchStarted OnMatchStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERespawnMode RespawnMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTimelimitUsedInMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMatchState CurrentMatchState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMatchStateChanged OnMatchStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedLoadout DefaultLoadoutIfNothingLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ModeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ModeDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumPlayersToStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumPlayersForTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APlayerCharacter> BlueCharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APlayerCharacter> RedCharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APlayerController*> DeadPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APlayerController*> RespawnableDeadPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerSpawnTag;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerRespawned OnPlayerRespawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> CharacterHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bThrottleAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinThrottleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxThrottleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrottleMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASpectatorPawn> NormalSpectatorPawn;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATOCManager* TOCManager;
    
public:
    AReadyOrNotGameMode();
    UFUNCTION(BlueprintCallable)
    void ThrottleAI();
    
    UFUNCTION(BlueprintCallable)
    void SwapPlayerTeams();
    
    UFUNCTION(BlueprintCallable)
    void StartMatch();
    
    UFUNCTION(BlueprintCallable)
    ASpectatorPawn* SpawnSpectator(APlayerController* Controller, TSubclassOf<ASpectatorPawn> Class, FTransform SpawnTransform);
    
    UFUNCTION(BlueprintCallable)
    APlayerCharacter* SpawnPlayerCharacter(APlayerController* Controller, TSubclassOf<APlayerCharacter> Class, FTransform SpawnTransform);
    
    UFUNCTION(BlueprintCallable)
    bool ShouldCountDownTimelimitNow();
    
    UFUNCTION(BlueprintCallable)
    void SetPassword(const FString& newPassword);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchState(EMatchState NewMatchState);
    
    UFUNCTION(BlueprintCallable)
    void RestartGame();
    
    UFUNCTION(BlueprintCallable)
    void RespawnPlayer(APlayerController* Player, bool bForceSpectator);
    
    UFUNCTION(BlueprintCallable)
    void RespawnDeadPlayersOnTeam(ETeamType Team);
    
    UFUNCTION(BlueprintCallable)
    void RespawnDeadPlayers();
    
    UFUNCTION(BlueprintCallable)
    void RespawnAllPlayersOnTeam(ETeamType Team);
    
    UFUNCTION(BlueprintCallable)
    void RespawnAllPlayers();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveDeadPlayerAt(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveDeadPlayer(APlayerController* InPlayerController);
    
    UFUNCTION(BlueprintCallable)
    void RefreshSession();
    
    UFUNCTION(BlueprintCallable)
    void ProcessServerTravel(const FString& URL, bool bAbsolute);
    
    UFUNCTION(BlueprintCallable)
    void PlayerTakenDamage(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* DamagedCharacter, AActor* DamageCauser, float Damage, float HealthRemaining);
    
    UFUNCTION(BlueprintCallable)
    void PlayerKilled(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* KilledCharacter);
    
    UFUNCTION(BlueprintCallable)
    void PlayerFreed(ACharacter* Freed, ACharacter* Freer);
    
    UFUNCTION(BlueprintCallable)
    void PlayerDowned(AReadyOrNotCharacter* DownedCharacter, AReadyOrNotCharacter* InstigatorCharacter);
    
    UFUNCTION(BlueprintCallable)
    void PlayerArrested(AReadyOrNotCharacter* ArrestedCharacter, AReadyOrNotCharacter* InstigatorCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnOutOfBoundsTimeLimitEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnBanStatusChecked(const FString& SteamId, bool bIsBanned, const FString& BanReason, bool bIsMySteamId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void NextGame();
    
    UFUNCTION(BlueprintCallable)
    bool KickPlayer(APlayerController* KickedPlayer, const FText& KickReason);
    
    UFUNCTION(BlueprintCallable)
    bool IsTeamDead(ETeamType Team, bool bIncludeArrestedAsDead);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetThisPlayersStartPointByTag(APlayerController* Player, const FString& IncomingName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AReadyOrNotGameState* GetReadyOrNotGameState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AReadyOrNotGameSession* GetReadyOrNotGameSession();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMatchState GetMatchState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APlayerCharacter*> GetAllPlayerCharactersInWorld() const;
    
    UFUNCTION(BlueprintCallable)
    bool DoesLevelRequireGeneration();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CheckToAnnounceTeamkill(ACharacter* InstigatorCharacter, ACharacter* KilledCharacter);
    
    UFUNCTION(BlueprintCallable)
    bool AreAllPlayersDead();
    
    UFUNCTION(BlueprintCallable)
    static void AddAbuse(AReadyOrNotCharacter* Abuser, ACyberneticCharacter* Abused);
    
};

