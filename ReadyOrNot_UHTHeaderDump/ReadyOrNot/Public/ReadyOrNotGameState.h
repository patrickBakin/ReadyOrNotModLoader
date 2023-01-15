#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameStateBase -FallbackName=GameStateBase
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageEvent -FallbackName=DamageEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "KillFeedData.h"
#include "FloorMapPointData.h"
#include "PlanningMarkerArray.h"
#include "PlanningLineArray.h"
#include "RChatMessage.h"
#include "GameModeSettings.h"
#include "DeploymentStatus.h"
#include "ETeamType.h"
#include "EMatchState.h"
#include "ReadyOrNotGameState.generated.h"

class UObject;
class AActor;
class UFMODEvent;
class UFMODAudioComponent;
class ACharacter;
class AController;
class APlayerController;
class AAIFactionManager;
class ABaseItem;
class ABadAIAction;
class AObjective;
class AReadyOrNotCharacter;
class UChallengeManager;
class UChallenge;
class UDebugDisplayWidget;
class UListenForReport;
class IListenForReport;
class UListenForPickup;
class IListenForPickup;
class UListenForInjury;
class IListenForInjury;
class UListenForIncapacitation;
class IListenForIncapacitation;
class UListenForGameStart;
class IListenForGameStart;
class UListenForGamePreStart;
class IListenForGamePreStart;
class UListenForGameEnd;
class IListenForGameEnd;
class UListenForDeath;
class IListenForDeath;
class UListenForArrest;
class IListenForArrest;
class AReferendum;
class UListenForYell;
class IListenForYell;
class UListenForWeaponClearing;
class IListenForWeaponClearing;
class UListenForUncuffed;
class IListenForUncuffed;
class UListenForSpawn;
class IListenForSpawn;
class UListenForRoundEnded;
class IListenForRoundEnded;
class UObituaryData;
class AMusicManager;
class APlayerCharacter;
class UReadyOrNotProfile;
class UWorld;
class UReadyOrNotVoiceConfig;
class AReadyOrNotSignificanceManager;
class APlayerState;
class AReadyOrNotPlayerState;
class AReadyOrNotPlayerController;
class AScoringManager;
class ATOCManager;
class ULevelSequence;
class UDataTable;
class ULevelStreaming;

UCLASS(Blueprintable)
class READYORNOT_API AReadyOrNotGameState : public AGameStateBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWinsUpdated);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnUpdateKillFeed, AActor*, Causer, ACharacter*, InstigatorCharacter, ACharacter*, KilledCharacter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSequenceStarted, ULevelSequence*, LevelSequence);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChatMessage, FRChatMessage, Message);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StreamSeed, meta=(AllowPrivateAccess=true))
    int32 RandomStreamSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReadyOrNotVoiceConfig* VoiceConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NextHost, meta=(AllowPrivateAccess=true))
    APlayerState* NextHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NextHost, meta=(AllowPrivateAccess=true))
    FString MigrationGUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bHasHostFinishedLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABaseItem*> AllItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> LoadedDataTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AScoringManager* ScoringManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, AAIFactionManager*> AIFactionManagers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotSignificanceManager* SignificanceManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle Rep_GameModeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TimeTillGameStartCountdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABadAIAction*> BadAIActionActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasLeftLoadOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelStreaming* PreMissionStreamedLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> SubPreMissionPlanningLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ModeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ModeRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AObjective*> MissionObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObituaryData* ObituaryData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnnounceReinforcements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRadioGlareEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* ReplenishAllAmmoSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AReadyOrNotCharacter*> RedTeamPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AReadyOrNotCharacter*> BlueTeamPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* AnnouncerAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 TotalMissionAbuseCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IListenForArrest>> ArrestListeners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IListenForDeath>> DeathListeners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IListenForIncapacitation>> IncapacitationListeners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IListenForInjury>> InjuryListeners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IListenForSpawn>> SpawnListeners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IListenForPickup>> EvidenceListeners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IListenForWeaponClearing>> WeaponClearingListeners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IListenForReport>> ReportListeners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IListenForGameStart>> GameStartListeners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IListenForGameEnd>> GameEndListeners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IListenForGamePreStart>> GamePreStartListeners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IListenForRoundEnded>> RoundEndListeners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IListenForYell>> YellListeners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IListenForUncuffed>> UncuffedListeners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCommandChat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bUseReinforcements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Reinforcements_TimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bRunWarmup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> SceneCapturePlayerCameraClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowEnemiesAsSuspects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKillFeedData> KillFeedData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateKillFeed OnUpdateKillFeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ServerTimeUntilNextMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameRulesIntroAnnouncerRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bWaitingForPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float PlanningTimeLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WinsUpdated, meta=(AllowPrivateAccess=true))
    int32 RedTeamWins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WinsUpdated, meta=(AllowPrivateAccess=true))
    int32 BlueTeamWins;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWinsUpdated OnWinsUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float EndPlayTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float RoundTimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bUseTimelimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 Scorelimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceMatchStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AReferendum* CurrentReferendum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMusicManager* MusicManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AReferendum>> AllowedReferendumTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanShowScoreboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePlanningUICamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RoundTimeElapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 RoundsPlayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 RoundsToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WinsUpdated, meta=(AllowPrivateAccess=true))
    ETeamType RoundWinningTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WinsUpdated, meta=(AllowPrivateAccess=true))
    ETeamType MatchWinningTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AReadyOrNotPlayerState*> RoundWinners;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChatMessage OnChatMessageReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString MissionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FText MissionDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MatchState, meta=(AllowPrivateAccess=true))
    EMatchState MatchState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString NextURLReplicated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSequenceStarted OnSequenceStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FName> WhitelistedLabels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDebugDisplayWidget> DebugDisplayWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString ModeURL_Replicated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DrawPointDataChanged, meta=(AllowPrivateAccess=true))
    TArray<FFloorMapPointData> DrawingPointData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPvPMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanReportToTOC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GametypeDamageModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadDamageModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FootDamageModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LegDamageModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmDamageModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OtherLimbDamageModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFreeForAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisablePickups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRevivesAllowed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRChatMessage> SavedChatMessages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBallisticsDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDamageDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpeechRecognitionDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGOAPDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnnounceTeamReinforcements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Msg_BothTeamsReinforced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Msg_RedTeamReinforced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Msg_BlueTeamReinforced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UChallenge>> GameModeChallenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UChallengeManager* ChallengeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UChallengeManager> ChallengeManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInPlanningMenu: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CustomTimeDilation, meta=(AllowPrivateAccess=true))
    float CustomTimeDilationApplied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<APlayerController*> AdminPlayerControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ATOCManager* TOCManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FPlanningMarkerArray MarkerArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FPlanningLineArray LineArray;
    
    AReadyOrNotGameState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SkipMVPScreen();
    
    UFUNCTION(BlueprintCallable)
    void SetTimeDilationSynced(float TimeDilation);
    
    UFUNCTION(BlueprintCallable)
    void ResetReplicatedTimers();
    
    UFUNCTION(BlueprintCallable)
    void RemoveYellListener(TScriptInterface<IListenForYell> YellListener);
    
    UFUNCTION(BlueprintCallable)
    void RemoveWeaponClearingListener(TScriptInterface<IListenForWeaponClearing> WeaponClearingListener);
    
    UFUNCTION(BlueprintCallable)
    void RemoveUncuffedListener(TScriptInterface<IListenForUncuffed> UncuffedListener);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSpawnListener(TScriptInterface<IListenForSpawn> SpawnListener);
    
    UFUNCTION(BlueprintCallable)
    void RemoveRoundEndListener(TScriptInterface<IListenForRoundEnded> RoundEndListener);
    
    UFUNCTION(BlueprintCallable)
    void RemoveReportListener(TScriptInterface<IListenForReport> ReportListener);
    
    UFUNCTION(BlueprintCallable)
    void RemoveInjuryListener(TScriptInterface<IListenForInjury> InjuryListener);
    
    UFUNCTION(BlueprintCallable)
    void RemoveIncapacitationListener(TScriptInterface<IListenForIncapacitation> IncapacitationListener);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGameStartListener(TScriptInterface<IListenForGameStart> GameStartListener);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGamePreStartListener(TScriptInterface<IListenForGamePreStart> GameStartListener);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGameEndListener(TScriptInterface<IListenForGameEnd> GameEndListener);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEvidenceListener(TScriptInterface<IListenForPickup> EvidenceListener);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDeathListener(TScriptInterface<IListenForDeath> DeathListener);
    
    UFUNCTION(BlueprintCallable)
    void RemoveArrestListener(TScriptInterface<IListenForArrest> ArrestListener);
    
    UFUNCTION(BlueprintCallable)
    void PlayerKilled(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* KilledCharacter);
    
    UFUNCTION(BlueprintCallable)
    void PlayerArrested(AReadyOrNotCharacter* ArrestedCharacter, AReadyOrNotCharacter* InstigatorCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OverWriteModeNameText(FText newModeName);
    
    UFUNCTION(BlueprintCallable)
    void OnSequenceStartedFunc(ULevelSequence* LevelSequence);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WinsUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StreamSeed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NextHost();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MatchState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DrawPointDataChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CustomTimeDilation();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadoutFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnAuthenticationResponse(bool bSuccess, bool bSerialFound, bool bSerialValid, const FString& failedReason);
    
    UFUNCTION(BlueprintCallable)
    void OnAlphaAccessChecked(bool bBanned, const FString& BanReason);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_StopSequence(ULevelSequence* Sequence);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PlaySequence(ULevelSequence* Sequence);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PlayAnnouncerForTeam(const FString& SpeechRowName, ETeamType TeamType);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnYell(AReadyOrNotCharacter* Yeller);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnWeaponCleared(ABaseItem* WeaponActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnTargetUncuffed(AReadyOrNotCharacter* ArrestedCharacter, AReadyOrNotCharacter* Uncuffer);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnTargetReported(AReadyOrNotCharacter* Reporter, UObject* ReportedTarget);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnTargetBecameReportable(UObject* Target);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnRoundReset();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnRoundEnded();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnGameStarted();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnGamePreStarted();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnGameEnded();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnEvidencePickedUp(ABaseItem* EvidenceActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnEvidenceDropped(ABaseItem* EvidenceActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnCharacterSpawned(AReadyOrNotCharacter* SpawnedCharacter);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnCharacterInjured(AReadyOrNotCharacter* Victim, float Damage, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnCharacterIncapacitated(AReadyOrNotCharacter* Victim, AReadyOrNotCharacter* Killer, AActor* Inflictor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnCharacterDied(AReadyOrNotCharacter* Victim, AReadyOrNotCharacter* Killer, AActor* Inflictor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnArrestOccurred(AReadyOrNotCharacter* ArrestedCharacter, AReadyOrNotCharacter* Arrester);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_BroadcastChatMessage(FRChatMessage ChatMessage);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_AnnounceTeamReinforcements(ETeamType TeamSpawned);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_AnnounceSuddenDeath();
    
    UFUNCTION(BlueprintCallable)
    void LoadStartupWidgetsAfterLoadingScreen();
    
    UFUNCTION(BlueprintCallable)
    bool IsEveryoneReady();
    
    UFUNCTION(BlueprintCallable)
    bool IsAdminPlayerController(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWinningScore(bool& bUsesScoring);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalMissionAbuseCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTeamScore(ETeamType Team);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingRounds();
    
    UFUNCTION(BlueprintCallable)
    void GetPlayerStatesOnTeamOrderedByScore(ETeamType Team, TArray<AReadyOrNotPlayerState*>& PlayerStates);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AReadyOrNotPlayerState*> GetPlayerStatesOfTeam(ETeamType Team);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AReadyOrNotPlayerState*> GetPlayersAvailableForVote() const;
    
    UFUNCTION(BlueprintCallable)
    void GetNextMapMode(FString& Map, FString& Mode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABadAIAction* GetMostRecentBadAIActionReport() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxSwatScore();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxSuspectScore();
    
    UFUNCTION(BlueprintCallable)
    FString GetMapURL();
    
    UFUNCTION(BlueprintCallable)
    FGameModeSettings GetGameModeSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDeploymentStatus> GetDeploymentStatusOfPlayers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentSwatScore();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentSuspectScore();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UReadyOrNotProfile* GetCurrentProfile();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AReadyOrNotPlayerController*> GetControllersAvailableForVote() const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_BindCharacterEvents(APlayerCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void AddYellListener(TScriptInterface<IListenForYell> YellListener);
    
    UFUNCTION(BlueprintCallable)
    void AddWeaponClearingListener(TScriptInterface<IListenForWeaponClearing> WeaponClearingListener);
    
    UFUNCTION(BlueprintCallable)
    void AddUncuffedListener(TScriptInterface<IListenForUncuffed> UncuffedListener);
    
    UFUNCTION(BlueprintCallable)
    void AddSpawnListener(TScriptInterface<IListenForSpawn> SpawnListener);
    
    UFUNCTION(BlueprintCallable)
    void AddRoundEndListener(TScriptInterface<IListenForRoundEnded> RoundEndListener);
    
    UFUNCTION(BlueprintCallable)
    void AddReportListener(TScriptInterface<IListenForReport> ReportListener);
    
    UFUNCTION(BlueprintCallable)
    void AddInjuryListener(TScriptInterface<IListenForInjury> InjuryListener);
    
    UFUNCTION(BlueprintCallable)
    void AddIncapacitationListener(TScriptInterface<IListenForIncapacitation> IncapacitationListener);
    
    UFUNCTION(BlueprintCallable)
    void AddGameStartListener(TScriptInterface<IListenForGameStart> GameStartListener);
    
    UFUNCTION(BlueprintCallable)
    void AddGamePreStartListener(TScriptInterface<IListenForGamePreStart> GameStartListener);
    
    UFUNCTION(BlueprintCallable)
    void AddGameEndListener(TScriptInterface<IListenForGameEnd> GameEndListener);
    
    UFUNCTION(BlueprintCallable)
    void AddEvidenceListener(TScriptInterface<IListenForPickup> EvidenceListener);
    
    UFUNCTION(BlueprintCallable)
    void AddDeathListener(TScriptInterface<IListenForDeath> DeathListener);
    
    UFUNCTION(BlueprintCallable)
    void AddArrestListener(TScriptInterface<IListenForArrest> ArrestListener);
    
};

