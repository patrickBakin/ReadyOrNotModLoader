#include "ReadyOrNotGameMode.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerStart -FallbackName=PlayerStart

class AActor;
class ACharacter;
class APlayerController;
class AReadyOrNotGameState;
class AReadyOrNotCharacter;
class ACyberneticCharacter;
class APlayerCharacter;
class AReadyOrNotGameSession;
class ASpectatorPawn;

void AReadyOrNotGameMode::ThrottleAI() {
}

void AReadyOrNotGameMode::SwapPlayerTeams() {
}

void AReadyOrNotGameMode::StartMatch() {
}

ASpectatorPawn* AReadyOrNotGameMode::SpawnSpectator(APlayerController* Controller, TSubclassOf<ASpectatorPawn> Class, FTransform SpawnTransform) {
    return NULL;
}

APlayerCharacter* AReadyOrNotGameMode::SpawnPlayerCharacter(APlayerController* Controller, TSubclassOf<APlayerCharacter> Class, FTransform SpawnTransform) {
    return NULL;
}

bool AReadyOrNotGameMode::ShouldCountDownTimelimitNow() {
    return false;
}

void AReadyOrNotGameMode::SetPassword(const FString& newPassword) {
}

void AReadyOrNotGameMode::SetMatchState(EMatchState NewMatchState) {
}

void AReadyOrNotGameMode::RestartGame() {
}

void AReadyOrNotGameMode::RespawnPlayer(APlayerController* Player, bool bForceSpectator) {
}

void AReadyOrNotGameMode::RespawnDeadPlayersOnTeam(ETeamType Team) {
}

void AReadyOrNotGameMode::RespawnDeadPlayers() {
}

void AReadyOrNotGameMode::RespawnAllPlayersOnTeam(ETeamType Team) {
}

void AReadyOrNotGameMode::RespawnAllPlayers() {
}

bool AReadyOrNotGameMode::RemoveDeadPlayerAt(int32 Index) {
    return false;
}

bool AReadyOrNotGameMode::RemoveDeadPlayer(APlayerController* InPlayerController) {
    return false;
}

void AReadyOrNotGameMode::RefreshSession() {
}

void AReadyOrNotGameMode::ProcessServerTravel(const FString& URL, bool bAbsolute) {
}

void AReadyOrNotGameMode::PlayerTakenDamage(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* DamagedCharacter, AActor* DamageCauser, float Damage, float HealthRemaining) {
}

void AReadyOrNotGameMode::PlayerKilled(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* KilledCharacter) {
}

void AReadyOrNotGameMode::PlayerFreed(ACharacter* Freed, ACharacter* Freer) {
}

void AReadyOrNotGameMode::PlayerDowned(AReadyOrNotCharacter* DownedCharacter, AReadyOrNotCharacter* InstigatorCharacter) {
}

void AReadyOrNotGameMode::PlayerArrested(AReadyOrNotCharacter* ArrestedCharacter, AReadyOrNotCharacter* InstigatorCharacter) {
}

void AReadyOrNotGameMode::OnOutOfBoundsTimeLimitEnded_Implementation() {
}

void AReadyOrNotGameMode::OnBanStatusChecked(const FString& SteamId, bool bIsBanned, const FString& BanReason, bool bIsMySteamId) {
}

void AReadyOrNotGameMode::NextGame() {
}

bool AReadyOrNotGameMode::KickPlayer(APlayerController* KickedPlayer, const FText& KickReason) {
    return false;
}

bool AReadyOrNotGameMode::IsTeamDead(ETeamType Team, bool bIncludeArrestedAsDead) {
    return false;
}

AActor* AReadyOrNotGameMode::GetThisPlayersStartPointByTag(APlayerController* Player, const FString& IncomingName) {
    return NULL;
}

AReadyOrNotGameState* AReadyOrNotGameMode::GetReadyOrNotGameState() {
    return NULL;
}

AReadyOrNotGameSession* AReadyOrNotGameMode::GetReadyOrNotGameSession() {
    return NULL;
}

EMatchState AReadyOrNotGameMode::GetMatchState() {
    return EMatchState::MS_None;
}

TArray<APlayerCharacter*> AReadyOrNotGameMode::GetAllPlayerCharactersInWorld() const {
    return TArray<APlayerCharacter*>();
}

bool AReadyOrNotGameMode::DoesLevelRequireGeneration() {
    return false;
}

void AReadyOrNotGameMode::CheckToAnnounceTeamkill_Implementation(ACharacter* InstigatorCharacter, ACharacter* KilledCharacter) {
}

bool AReadyOrNotGameMode::AreAllPlayersDead() {
    return false;
}

void AReadyOrNotGameMode::AddAbuse(AReadyOrNotCharacter* Abuser, ACyberneticCharacter* Abused) {
}

AReadyOrNotGameMode::AReadyOrNotGameMode() {
    this->bIsCampaignTransitioning = false;
    this->bRunWarmup = true;
    this->bArrestSpectator = true;
    this->bAllowLoadouts = true;
    this->MaxPlayersAllowed = 8;
    this->bEnabledForPlay = false;
    this->PlayerStartClass = APlayerStart::StaticClass();
    this->DeadSpectatorClass = NULL;
    this->LobbyStartTag = TEXT("LobbyView");
    this->RedCustomizationStartTag = TEXT("RedCustomization");
    this->BlueCustomizationStartTag = TEXT("BlueCustomization");
    this->SWATBlueStartTag = TEXT("SERT_BLUE");
    this->SWATRedStartTag = TEXT("SERT_RED");
    this->SuspectStartTag = TEXT("Suspect");
    this->bSpectateKillerOnDeath = false;
    this->bInitialPlayerRespawn = true;
    this->bDrawPlayerCameraSphere = false;
    this->RespawnMode = ERespawnMode::ImmediateRespawn;
    this->bTimelimitUsedInMode = true;
    this->CurrentMatchState = EMatchState::MS_Warmup;
    this->bCanRespawn = false;
    this->MinimumPlayersToStart = 1;
    this->MinimumPlayersForTimer = 2;
    this->CharacterHUD = NULL;
    this->bThrottleAI = true;
    this->MinThrottleRange = 100.00f;
    this->MaxThrottleRange = 1000.00f;
    this->ThrottleMultiplier = 1.00f;
    this->NormalSpectatorPawn = NULL;
    this->TOCManager = NULL;
}

