#include "ReadyOrNotGameInstance.h"

class AReadyOrNotGameState;
class AReadyOrNotGameMode;

void UReadyOrNotGameInstance::StopRecordingReplayFromBP() {
}

void UReadyOrNotGameInstance::StopRecordingReplay() {
}

void UReadyOrNotGameInstance::StopGeneratingPSOCache() {
}

void UReadyOrNotGameInstance::StartRecordingReplay() {
}

void UReadyOrNotGameInstance::StartGeneratingPSOCache() {
}

void UReadyOrNotGameInstance::SetLastJoinState(ELastMenuStateBeforeJoin LastJoiNState) {
}

bool UReadyOrNotGameInstance::SetInputAudioDevice(const FString& DeviceName, bool bShouldSave) {
    return false;
}

void UReadyOrNotGameInstance::RetryLogin() {
}

void UReadyOrNotGameInstance::RenameReplay(const FString& ReplayName, const FString& NewFriendlyReplayName) {
}

void UReadyOrNotGameInstance::RemovePauseGameCondition_Implementation(const FString& PauseCondition) {
}

void UReadyOrNotGameInstance::PlayReplayFromBP(const FString& ReplayName) {
}

void UReadyOrNotGameInstance::OpenReplayFolder() {
}

bool UReadyOrNotGameInstance::OnWindowCloseRequested() {
    return false;
}

void UReadyOrNotGameInstance::OnConnectSteamServer(const FString& URL) {
}

bool UReadyOrNotGameInstance::IsReplaySystemEnabled() {
    return false;
}

bool UReadyOrNotGameInstance::IsPublicMissionInProgress() {
    return false;
}

bool UReadyOrNotGameInstance::IsNetworkCompatible(const uint32 LocalNetworkVersion, const uint32 RemoteNetworkVersion) {
    return false;
}

bool UReadyOrNotGameInstance::IsLoggedIntoBackend() const {
    return false;
}

bool UReadyOrNotGameInstance::IsHostMigrationInProgress(FString& MigratedHostToName) {
    return false;
}

bool UReadyOrNotGameInstance::IsGameModded() {
    return false;
}

void UReadyOrNotGameInstance::Gratr() {
}

FString UReadyOrNotGameInstance::GetSessionTicket() {
    return TEXT("");
}

TArray<FReplayEvent> UReadyOrNotGameInstance::GetReplayEvents() {
    return TArray<FReplayEvent>();
}

uint32 UReadyOrNotGameInstance::GetLocalNetworkVersion() {
    return 0;
}

FString UReadyOrNotGameInstance::GetFriendlyGamemodeName(const FString& UnfriendlyName) {
    return TEXT("");
}

FString UReadyOrNotGameInstance::GetDiscordOneTimeUseCode() {
    return TEXT("");
}

TArray<FString> UReadyOrNotGameInstance::GetBuiltModdedMapList() {
    return TArray<FString>();
}

TArray<FString> UReadyOrNotGameInstance::GetBuiltMapList() {
    return TArray<FString>();
}

FString UReadyOrNotGameInstance::GetBestGuessMapName(const FString& MapName) {
    return TEXT("");
}

bool UReadyOrNotGameInstance::GetBanned() {
    return false;
}

uint8 UReadyOrNotGameInstance::GetBackendState() const {
    return 0;
}

bool UReadyOrNotGameInstance::GetAvailableAudioDevices(TArray<FString>& OutAudioDevices) {
    return false;
}

FString UReadyOrNotGameInstance::GetAndClearMainMenuDisplayMessage() {
    return TEXT("");
}

ELastMenuStateBeforeJoin UReadyOrNotGameInstance::GetAndClearLastJoinState() {
    return ELastMenuStateBeforeJoin::LM_None;
}

TArray<AReadyOrNotGameState*> UReadyOrNotGameInstance::GetAllGameStates() {
    return TArray<AReadyOrNotGameState*>();
}

TArray<AReadyOrNotGameMode*> UReadyOrNotGameInstance::GetAllGameModes() {
    return TArray<AReadyOrNotGameMode*>();
}

void UReadyOrNotGameInstance::GenerateURLMap() {
}

TMap<FString, FReplayData> UReadyOrNotGameInstance::FindReplays() {
    return TMap<FString, FReplayData>();
}

void UReadyOrNotGameInstance::DeleteReplay(const FString& ReplayName) {
}

void UReadyOrNotGameInstance::ConnectSteamServer(const FString& ServerConnect) {
}

void UReadyOrNotGameInstance::BuildMapList() {
}

void UReadyOrNotGameInstance::ApplyDecalSettings() {
}

void UReadyOrNotGameInstance::AddReplayEvent(const FString& Name, FVector Location, float Timestamp) {
}

void UReadyOrNotGameInstance::AddPauseGameCondition_Implementation(const FString& PauseCondition) {
}

UReadyOrNotGameInstance::UReadyOrNotGameInstance() {
    this->ReadyOrNotBackend = NULL;
    this->ModioManager = NULL;
    this->WeaponFOVMaterialCollection = NULL;
    this->SessionType = ESessionType::ST_None;
    this->SpawnWidgetOnLevelLoad = NULL;
    this->DedicatedServerGamesPlayedWithoutReturningToLobby = 0;
    this->DedicatedServerMapIdx = 0;
    this->bHostedGame = false;
    this->Saved_RoundTimerGameStart = 0.00f;
    this->Saved_RoundTimerBetweenMaps = 0.00f;
    this->Saved_ReinforcementTimer = 0.00f;
    this->Saved_Timelimit = 0.00f;
    this->Saved_RoundsPerMap = 0;
    this->Saved_Scorelimit = 0;
    this->Saved_AiEnabled = false;
    this->bIsSinglePlayerMode = false;
    this->HostMigrationManager = NULL;
    this->bShowingFPS = false;
    this->bIsRecordingReplay = false;
    this->bIsPlayingReplay = false;
    this->bReplayBeginTime = 0.00f;
}

