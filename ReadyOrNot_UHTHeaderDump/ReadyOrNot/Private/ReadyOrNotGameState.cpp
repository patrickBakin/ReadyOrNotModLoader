#include "ReadyOrNotGameState.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=FMODStudio -ObjectName=FMODAudioComponent -FallbackName=FMODAudioComponent

class UObject;
class AActor;
class AController;
class APlayerController;
class ABaseItem;
class ABadAIAction;
class AReadyOrNotCharacter;
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
class APlayerCharacter;
class UReadyOrNotProfile;
class AReadyOrNotPlayerState;
class AReadyOrNotPlayerController;
class ULevelSequence;

void AReadyOrNotGameState::SkipMVPScreen() {
}

void AReadyOrNotGameState::SetTimeDilationSynced(float TimeDilation) {
}

void AReadyOrNotGameState::ResetReplicatedTimers() {
}

void AReadyOrNotGameState::RemoveYellListener(TScriptInterface<IListenForYell> YellListener) {
}

void AReadyOrNotGameState::RemoveWeaponClearingListener(TScriptInterface<IListenForWeaponClearing> WeaponClearingListener) {
}

void AReadyOrNotGameState::RemoveUncuffedListener(TScriptInterface<IListenForUncuffed> UncuffedListener) {
}

void AReadyOrNotGameState::RemoveSpawnListener(TScriptInterface<IListenForSpawn> SpawnListener) {
}

void AReadyOrNotGameState::RemoveRoundEndListener(TScriptInterface<IListenForRoundEnded> RoundEndListener) {
}

void AReadyOrNotGameState::RemoveReportListener(TScriptInterface<IListenForReport> ReportListener) {
}

void AReadyOrNotGameState::RemoveInjuryListener(TScriptInterface<IListenForInjury> InjuryListener) {
}

void AReadyOrNotGameState::RemoveIncapacitationListener(TScriptInterface<IListenForIncapacitation> IncapacitationListener) {
}

void AReadyOrNotGameState::RemoveGameStartListener(TScriptInterface<IListenForGameStart> GameStartListener) {
}

void AReadyOrNotGameState::RemoveGamePreStartListener(TScriptInterface<IListenForGamePreStart> GameStartListener) {
}

void AReadyOrNotGameState::RemoveGameEndListener(TScriptInterface<IListenForGameEnd> GameEndListener) {
}

void AReadyOrNotGameState::RemoveEvidenceListener(TScriptInterface<IListenForPickup> EvidenceListener) {
}

void AReadyOrNotGameState::RemoveDeathListener(TScriptInterface<IListenForDeath> DeathListener) {
}

void AReadyOrNotGameState::RemoveArrestListener(TScriptInterface<IListenForArrest> ArrestListener) {
}

void AReadyOrNotGameState::PlayerKilled(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* KilledCharacter) {
}

void AReadyOrNotGameState::PlayerArrested(AReadyOrNotCharacter* ArrestedCharacter, AReadyOrNotCharacter* InstigatorCharacter) {
}

void AReadyOrNotGameState::OverWriteModeNameText(FText newModeName) {
}

void AReadyOrNotGameState::OnSequenceStartedFunc(ULevelSequence* LevelSequence) {
}

void AReadyOrNotGameState::OnRep_WinsUpdated() {
}

void AReadyOrNotGameState::OnRep_StreamSeed() {
}

void AReadyOrNotGameState::OnRep_NextHost() {
}

void AReadyOrNotGameState::OnRep_MatchState() {
}

void AReadyOrNotGameState::OnRep_DrawPointDataChanged() {
}

void AReadyOrNotGameState::OnRep_CustomTimeDilation() {
}

void AReadyOrNotGameState::OnLoadoutFinished() {
}

void AReadyOrNotGameState::OnAuthenticationResponse(bool bSuccess, bool bSerialFound, bool bSerialValid, const FString& failedReason) {
}

void AReadyOrNotGameState::OnAlphaAccessChecked(bool bBanned, const FString& BanReason) {
}

void AReadyOrNotGameState::Multicast_StopSequence_Implementation(ULevelSequence* Sequence) {
}

void AReadyOrNotGameState::Multicast_PlaySequence_Implementation(ULevelSequence* Sequence) {
}

void AReadyOrNotGameState::Multicast_PlayAnnouncerForTeam_Implementation(const FString& SpeechRowName, ETeamType TeamType) {
}

void AReadyOrNotGameState::Multicast_OnYell_Implementation(AReadyOrNotCharacter* Yeller) {
}

void AReadyOrNotGameState::Multicast_OnWeaponCleared_Implementation(ABaseItem* WeaponActor) {
}

void AReadyOrNotGameState::Multicast_OnTargetUncuffed_Implementation(AReadyOrNotCharacter* ArrestedCharacter, AReadyOrNotCharacter* Uncuffer) {
}

void AReadyOrNotGameState::Multicast_OnTargetReported_Implementation(AReadyOrNotCharacter* Reporter, UObject* ReportedTarget) {
}

void AReadyOrNotGameState::Multicast_OnTargetBecameReportable_Implementation(UObject* Target) {
}

void AReadyOrNotGameState::Multicast_OnRoundReset_Implementation() {
}

void AReadyOrNotGameState::Multicast_OnRoundEnded_Implementation() {
}

void AReadyOrNotGameState::Multicast_OnGameStarted_Implementation() {
}

void AReadyOrNotGameState::Multicast_OnGamePreStarted_Implementation() {
}

void AReadyOrNotGameState::Multicast_OnGameEnded_Implementation() {
}

void AReadyOrNotGameState::Multicast_OnEvidencePickedUp_Implementation(ABaseItem* EvidenceActor) {
}

void AReadyOrNotGameState::Multicast_OnEvidenceDropped_Implementation(ABaseItem* EvidenceActor) {
}

void AReadyOrNotGameState::Multicast_OnCharacterSpawned_Implementation(AReadyOrNotCharacter* SpawnedCharacter) {
}

void AReadyOrNotGameState::Multicast_OnCharacterInjured_Implementation(AReadyOrNotCharacter* Victim, float Damage, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser) {
}

void AReadyOrNotGameState::Multicast_OnCharacterIncapacitated_Implementation(AReadyOrNotCharacter* Victim, AReadyOrNotCharacter* Killer, AActor* Inflictor) {
}

void AReadyOrNotGameState::Multicast_OnCharacterDied_Implementation(AReadyOrNotCharacter* Victim, AReadyOrNotCharacter* Killer, AActor* Inflictor) {
}

void AReadyOrNotGameState::Multicast_OnArrestOccurred_Implementation(AReadyOrNotCharacter* ArrestedCharacter, AReadyOrNotCharacter* Arrester) {
}

void AReadyOrNotGameState::Multicast_BroadcastChatMessage_Implementation(FRChatMessage ChatMessage) {
}

void AReadyOrNotGameState::Multicast_AnnounceTeamReinforcements_Implementation(ETeamType TeamSpawned) {
}

void AReadyOrNotGameState::Multicast_AnnounceSuddenDeath_Implementation() {
}

void AReadyOrNotGameState::LoadStartupWidgetsAfterLoadingScreen() {
}

bool AReadyOrNotGameState::IsEveryoneReady() {
    return false;
}

bool AReadyOrNotGameState::IsAdminPlayerController(APlayerController* PlayerController) {
    return false;
}

float AReadyOrNotGameState::GetWinningScore(bool& bUsesScoring) {
    return 0.0f;
}

int32 AReadyOrNotGameState::GetTotalMissionAbuseCount() {
    return 0;
}

float AReadyOrNotGameState::GetTeamScore(ETeamType Team) {
    return 0.0f;
}

int32 AReadyOrNotGameState::GetRemainingRounds() {
    return 0;
}

void AReadyOrNotGameState::GetPlayerStatesOnTeamOrderedByScore(ETeamType Team, TArray<AReadyOrNotPlayerState*>& PlayerStates) {
}

TArray<AReadyOrNotPlayerState*> AReadyOrNotGameState::GetPlayerStatesOfTeam(ETeamType Team) {
    return TArray<AReadyOrNotPlayerState*>();
}

TArray<AReadyOrNotPlayerState*> AReadyOrNotGameState::GetPlayersAvailableForVote() const {
    return TArray<AReadyOrNotPlayerState*>();
}

void AReadyOrNotGameState::GetNextMapMode(FString& Map, FString& Mode) {
}

ABadAIAction* AReadyOrNotGameState::GetMostRecentBadAIActionReport() const {
    return NULL;
}

int32 AReadyOrNotGameState::GetMaxSwatScore() {
    return 0;
}

int32 AReadyOrNotGameState::GetMaxSuspectScore() {
    return 0;
}

FString AReadyOrNotGameState::GetMapURL() {
    return TEXT("");
}

FGameModeSettings AReadyOrNotGameState::GetGameModeSettings() {
    return FGameModeSettings{};
}

TArray<FDeploymentStatus> AReadyOrNotGameState::GetDeploymentStatusOfPlayers() {
    return TArray<FDeploymentStatus>();
}

int32 AReadyOrNotGameState::GetCurrentSwatScore() {
    return 0;
}

int32 AReadyOrNotGameState::GetCurrentSuspectScore() {
    return 0;
}

UReadyOrNotProfile* AReadyOrNotGameState::GetCurrentProfile() {
    return NULL;
}

TArray<AReadyOrNotPlayerController*> AReadyOrNotGameState::GetControllersAvailableForVote() const {
    return TArray<AReadyOrNotPlayerController*>();
}

void AReadyOrNotGameState::Client_BindCharacterEvents_Implementation(APlayerCharacter* Character) {
}

void AReadyOrNotGameState::AddYellListener(TScriptInterface<IListenForYell> YellListener) {
}

void AReadyOrNotGameState::AddWeaponClearingListener(TScriptInterface<IListenForWeaponClearing> WeaponClearingListener) {
}

void AReadyOrNotGameState::AddUncuffedListener(TScriptInterface<IListenForUncuffed> UncuffedListener) {
}

void AReadyOrNotGameState::AddSpawnListener(TScriptInterface<IListenForSpawn> SpawnListener) {
}

void AReadyOrNotGameState::AddRoundEndListener(TScriptInterface<IListenForRoundEnded> RoundEndListener) {
}

void AReadyOrNotGameState::AddReportListener(TScriptInterface<IListenForReport> ReportListener) {
}

void AReadyOrNotGameState::AddInjuryListener(TScriptInterface<IListenForInjury> InjuryListener) {
}

void AReadyOrNotGameState::AddIncapacitationListener(TScriptInterface<IListenForIncapacitation> IncapacitationListener) {
}

void AReadyOrNotGameState::AddGameStartListener(TScriptInterface<IListenForGameStart> GameStartListener) {
}

void AReadyOrNotGameState::AddGamePreStartListener(TScriptInterface<IListenForGamePreStart> GameStartListener) {
}

void AReadyOrNotGameState::AddGameEndListener(TScriptInterface<IListenForGameEnd> GameEndListener) {
}

void AReadyOrNotGameState::AddEvidenceListener(TScriptInterface<IListenForPickup> EvidenceListener) {
}

void AReadyOrNotGameState::AddDeathListener(TScriptInterface<IListenForDeath> DeathListener) {
}

void AReadyOrNotGameState::AddArrestListener(TScriptInterface<IListenForArrest> ArrestListener) {
}

void AReadyOrNotGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AReadyOrNotGameState, RandomStreamSeed);
    DOREPLIFETIME(AReadyOrNotGameState, NextHost);
    DOREPLIFETIME(AReadyOrNotGameState, MigrationGUID);
    DOREPLIFETIME(AReadyOrNotGameState, bHasHostFinishedLoading);
    DOREPLIFETIME(AReadyOrNotGameState, ScoringManager);
    DOREPLIFETIME(AReadyOrNotGameState, Rep_GameModeSettings);
    DOREPLIFETIME(AReadyOrNotGameState, TimeTillGameStartCountdown);
    DOREPLIFETIME(AReadyOrNotGameState, MissionObjectives);
    DOREPLIFETIME(AReadyOrNotGameState, RedTeamPlayers);
    DOREPLIFETIME(AReadyOrNotGameState, BlueTeamPlayers);
    DOREPLIFETIME(AReadyOrNotGameState, TotalMissionAbuseCount);
    DOREPLIFETIME(AReadyOrNotGameState, bUseReinforcements);
    DOREPLIFETIME(AReadyOrNotGameState, Reinforcements_TimeRemaining);
    DOREPLIFETIME(AReadyOrNotGameState, bRunWarmup);
    DOREPLIFETIME(AReadyOrNotGameState, ServerTimeUntilNextMap);
    DOREPLIFETIME(AReadyOrNotGameState, bWaitingForPlayers);
    DOREPLIFETIME(AReadyOrNotGameState, PlanningTimeLeft);
    DOREPLIFETIME(AReadyOrNotGameState, RedTeamWins);
    DOREPLIFETIME(AReadyOrNotGameState, BlueTeamWins);
    DOREPLIFETIME(AReadyOrNotGameState, EndPlayTimer);
    DOREPLIFETIME(AReadyOrNotGameState, RoundTimeRemaining);
    DOREPLIFETIME(AReadyOrNotGameState, bUseTimelimit);
    DOREPLIFETIME(AReadyOrNotGameState, Scorelimit);
    DOREPLIFETIME(AReadyOrNotGameState, CurrentReferendum);
    DOREPLIFETIME(AReadyOrNotGameState, RoundsPlayed);
    DOREPLIFETIME(AReadyOrNotGameState, RoundsToPlay);
    DOREPLIFETIME(AReadyOrNotGameState, RoundWinningTeam);
    DOREPLIFETIME(AReadyOrNotGameState, MatchWinningTeam);
    DOREPLIFETIME(AReadyOrNotGameState, RoundWinners);
    DOREPLIFETIME(AReadyOrNotGameState, MissionName);
    DOREPLIFETIME(AReadyOrNotGameState, MissionDescription);
    DOREPLIFETIME(AReadyOrNotGameState, MatchState);
    DOREPLIFETIME(AReadyOrNotGameState, NextURLReplicated);
    DOREPLIFETIME(AReadyOrNotGameState, WhitelistedLabels);
    DOREPLIFETIME(AReadyOrNotGameState, ModeURL_Replicated);
    DOREPLIFETIME(AReadyOrNotGameState, DrawingPointData);
    DOREPLIFETIME(AReadyOrNotGameState, CustomTimeDilationApplied);
    DOREPLIFETIME(AReadyOrNotGameState, AdminPlayerControllers);
    DOREPLIFETIME(AReadyOrNotGameState, TOCManager);
    DOREPLIFETIME(AReadyOrNotGameState, MarkerArray);
    DOREPLIFETIME(AReadyOrNotGameState, LineArray);
}

AReadyOrNotGameState::AReadyOrNotGameState() {
    this->RandomStreamSeed = 0;
    this->VoiceConfig = NULL;
    this->NextHost = NULL;
    this->bHasHostFinishedLoading = false;
    this->ScoringManager = NULL;
    this->SignificanceManager = NULL;
    this->TimeTillGameStartCountdown = 10.00f;
    this->bHasLeftLoadOut = false;
    this->PreMissionStreamedLevel = NULL;
    this->ObituaryData = NULL;
    this->bAnnounceReinforcements = true;
    this->bRadioGlareEnabled = false;
    this->AnnouncerAudioComponent = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("Announcer Audio Component"));
    this->TotalMissionAbuseCount = 0;
    this->bDisableEquipment = false;
    this->bEnableCommandChat = true;
    this->bUseReinforcements = false;
    this->Reinforcements_TimeRemaining = 0.00f;
    this->bRunWarmup = true;
    this->SceneCapturePlayerCameraClass = NULL;
    this->bShowEnemiesAsSuspects = false;
    this->ServerTimeUntilNextMap = 0.00f;
    this->bWaitingForPlayers = false;
    this->PlanningTimeLeft = 480.00f;
    this->RedTeamWins = 0;
    this->BlueTeamWins = 0;
    this->EndPlayTimer = 30.00f;
    this->RoundTimeRemaining = 0.00f;
    this->bUseTimelimit = false;
    this->Scorelimit = 150;
    this->TimeSinceMatchStarted = 0.00f;
    this->CurrentReferendum = NULL;
    this->MusicManager = NULL;
    this->bCanShowScoreboard = true;
    this->bUsePlanningUICamera = false;
    this->RoundTimeElapsed = 0.00f;
    this->RoundsPlayed = 0;
    this->RoundsToPlay = 0;
    this->RoundWinningTeam = ETeamType::TT_NONE;
    this->MatchWinningTeam = ETeamType::TT_NONE;
    this->MatchState = EMatchState::MS_None;
    this->DebugDisplayWidget = NULL;
    this->bPvPMode = false;
    this->bCanReportToTOC = false;
    this->GametypeDamageModifier = 1.00f;
    this->HeadDamageModifier = 2.00f;
    this->FootDamageModifier = 0.20f;
    this->LegDamageModifier = 0.30f;
    this->ArmDamageModifier = 0.20f;
    this->OtherLimbDamageModifier = 1.00f;
    this->bFreeForAll = false;
    this->bDisablePickups = false;
    this->bRevivesAllowed = false;
    this->bBallisticsDebug = false;
    this->bDamageDebug = false;
    this->bSpeechRecognitionDebug = false;
    this->bGOAPDebug = false;
    this->bAnnounceTeamReinforcements = false;
    this->ChallengeManager = NULL;
    this->ChallengeManagerClass = NULL;
    this->bInPlanningMenu = false;
    this->CustomTimeDilationApplied = 1.00f;
    this->TOCManager = NULL;
}

