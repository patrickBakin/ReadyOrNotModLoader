#include "ReadyOrNotPlayerState.h"
#include "Net/UnrealNetwork.h"

class ABaseWeapon;

void AReadyOrNotPlayerState::UpdateScore() {
}

void AReadyOrNotPlayerState::SetTeam(ETeamType NewTeam) {
}

void AReadyOrNotPlayerState::SetReady(bool bIsReady, FSavedLoadout NewLoadout) {
}

void AReadyOrNotPlayerState::SetIsTalking_Implementation(bool bNewTalking) {
}
bool AReadyOrNotPlayerState::SetIsTalking_Validate(bool bNewTalking) {
    return true;
}

void AReadyOrNotPlayerState::ServerSetJoinedOnSquadLeader_Implementation() {
}
bool AReadyOrNotPlayerState::ServerSetJoinedOnSquadLeader_Validate() {
    return true;
}

void AReadyOrNotPlayerState::Server_UpdatePlayerSpawnTag_Implementation(const FString& NewTag) {
}
bool AReadyOrNotPlayerState::Server_UpdatePlayerSpawnTag_Validate(const FString& NewTag) {
    return true;
}

void AReadyOrNotPlayerState::Server_UpdateDrawing_Implementation(FPlanningDrawing Drawing) {
}

void AReadyOrNotPlayerState::Server_SetVoiceType_Implementation(EVoiceType NewVoiceType) {
}
bool AReadyOrNotPlayerState::Server_SetVoiceType_Validate(EVoiceType NewVoiceType) {
    return true;
}

void AReadyOrNotPlayerState::Server_SetTeam_Implementation(ETeamType NewTeam) {
}
bool AReadyOrNotPlayerState::Server_SetTeam_Validate(ETeamType NewTeam) {
    return true;
}

void AReadyOrNotPlayerState::Server_SetReady_Implementation(bool bIsReady, FSavedLoadout NewLoadout) {
}
bool AReadyOrNotPlayerState::Server_SetReady_Validate(bool bIsReady, FSavedLoadout NewLoadout) {
    return true;
}

void AReadyOrNotPlayerState::Server_SetPlayerName_Implementation(FName NewPlayerName) {
}
bool AReadyOrNotPlayerState::Server_SetPlayerName_Validate(FName NewPlayerName) {
    return true;
}

void AReadyOrNotPlayerState::Server_SetLoadout_Implementation(FSavedLoadout NewLoadout) {
}
bool AReadyOrNotPlayerState::Server_SetLoadout_Validate(FSavedLoadout NewLoadout) {
    return true;
}

void AReadyOrNotPlayerState::Server_SetIsInGame_Implementation(bool bNewIsInGame) {
}
bool AReadyOrNotPlayerState::Server_SetIsInGame_Validate(bool bNewIsInGame) {
    return true;
}

void AReadyOrNotPlayerState::Server_SendUnlockedDLC_Implementation(EDLC Dlc) {
}
bool AReadyOrNotPlayerState::Server_SendUnlockedDLC_Validate(EDLC Dlc) {
    return true;
}

void AReadyOrNotPlayerState::Server_FinishDrawing_Implementation(FPlanningDrawing Drawing) {
}

void AReadyOrNotPlayerState::ResetBulletsFired() {
}

void AReadyOrNotPlayerState::OnRep_UpdateServerSavedLoadout() {
}

void AReadyOrNotPlayerState::Notify_PendingChangeTeam_Implementation(ETeamType NewTeamType) {
}

bool AReadyOrNotPlayerState::IsVipPlayerState() {
    return false;
}

bool AReadyOrNotPlayerState::IsTalking() const {
    return false;
}

bool AReadyOrNotPlayerState::IsSquadLeader() {
    return false;
}

bool AReadyOrNotPlayerState::IsOwnerOfPlayerState() {
    return false;
}

void AReadyOrNotPlayerState::IncrementBulletsFired(ABaseWeapon* Weapon) {
}

bool AReadyOrNotPlayerState::HasEveryoneFinishedLoading(int32& OutTotal, int32& OutLoading, int32& OutLoaded) {
    return false;
}

EVoiceType AReadyOrNotPlayerState::GetVoiceType() {
    return EVoiceType::VT_Local;
}

ETeamType AReadyOrNotPlayerState::GetTeam() {
    return ETeamType::TT_NONE;
}

ETeamType AReadyOrNotPlayerState::GetPendingTeam() {
    return ETeamType::TT_NONE;
}

void AReadyOrNotPlayerState::GetNetworkStatus(float& AvgLag) {
}

int32 AReadyOrNotPlayerState::GetKillCount() {
    return 0;
}

int32 AReadyOrNotPlayerState::GetDeathCount() {
    return 0;
}

void AReadyOrNotPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AReadyOrNotPlayerState, bHasFinishedLoading);
    DOREPLIFETIME(AReadyOrNotPlayerState, Kills);
    DOREPLIFETIME(AReadyOrNotPlayerState, KillsThisLife);
    DOREPLIFETIME(AReadyOrNotPlayerState, TeamKills);
    DOREPLIFETIME(AReadyOrNotPlayerState, Arrests);
    DOREPLIFETIME(AReadyOrNotPlayerState, TimesArrested);
    DOREPLIFETIME(AReadyOrNotPlayerState, ArrestsThisLife);
    DOREPLIFETIME(AReadyOrNotPlayerState, Objectives);
    DOREPLIFETIME(AReadyOrNotPlayerState, Reports);
    DOREPLIFETIME(AReadyOrNotPlayerState, Evidence);
    DOREPLIFETIME(AReadyOrNotPlayerState, EvidenceActorsInPossession);
    DOREPLIFETIME(AReadyOrNotPlayerState, DeathDamageType);
    DOREPLIFETIME(AReadyOrNotPlayerState, DeathWeapon);
    DOREPLIFETIME(AReadyOrNotPlayerState, bDeadToPointDamage);
    DOREPLIFETIME(AReadyOrNotPlayerState, DeathTraceHit);
    DOREPLIFETIME(AReadyOrNotPlayerState, DeathKiller);
    DOREPLIFETIME(AReadyOrNotPlayerState, Deaths);
    DOREPLIFETIME(AReadyOrNotPlayerState, Incapacitations);
    DOREPLIFETIME(AReadyOrNotPlayerState, DamageDealt);
    DOREPLIFETIME(AReadyOrNotPlayerState, DamageReceived);
    DOREPLIFETIME(AReadyOrNotPlayerState, PlayerSpawnTag);
    DOREPLIFETIME(AReadyOrNotPlayerState, BulletsFired);
    DOREPLIFETIME(AReadyOrNotPlayerState, BulletsFiredThisLife);
    DOREPLIFETIME(AReadyOrNotPlayerState, Team);
    DOREPLIFETIME(AReadyOrNotPlayerState, ServerSavedLoadout);
    DOREPLIFETIME(AReadyOrNotPlayerState, bReady);
    DOREPLIFETIME(AReadyOrNotPlayerState, bSquadLeader);
    DOREPLIFETIME(AReadyOrNotPlayerState, LastLoadout);
    DOREPLIFETIME(AReadyOrNotPlayerState, PointsFromKills);
    DOREPLIFETIME(AReadyOrNotPlayerState, PointsFromDamage);
    DOREPLIFETIME(AReadyOrNotPlayerState, PointsFromArrests);
    DOREPLIFETIME(AReadyOrNotPlayerState, PointsFromObjective);
    DOREPLIFETIME(AReadyOrNotPlayerState, PointsFromReportingKills);
    DOREPLIFETIME(AReadyOrNotPlayerState, PointsFromReportingArrests);
    DOREPLIFETIME(AReadyOrNotPlayerState, bIsInGame);
    DOREPLIFETIME(AReadyOrNotPlayerState, bIsVIP);
    DOREPLIFETIME(AReadyOrNotPlayerState, bWasVIP);
    DOREPLIFETIME(AReadyOrNotPlayerState, GrenadesThrown);
    DOREPLIFETIME(AReadyOrNotPlayerState, TotalYells);
    DOREPLIFETIME(AReadyOrNotPlayerState, NumberOrdersGiven);
    DOREPLIFETIME(AReadyOrNotPlayerState, BulletsHit);
    DOREPLIFETIME(AReadyOrNotPlayerState, BulletsHitThisLife);
    DOREPLIFETIME(AReadyOrNotPlayerState, Headshots);
    DOREPLIFETIME(AReadyOrNotPlayerState, VoiceType);
    DOREPLIFETIME(AReadyOrNotPlayerState, bIsTalking);
    DOREPLIFETIME(AReadyOrNotPlayerState, bIsReplaySpectator);
    DOREPLIFETIME(AReadyOrNotPlayerState, DrawingArray);
    DOREPLIFETIME(AReadyOrNotPlayerState, CurrentDrawing);
}

AReadyOrNotPlayerState::AReadyOrNotPlayerState() {
    this->bHasFinishedLoading = false;
    this->Kills = 0;
    this->KillsThisLife = 0;
    this->TeamKills = 0;
    this->Arrests = 0;
    this->TimesArrested = 0;
    this->ArrestsThisLife = 0;
    this->Objectives = 0;
    this->Reports = 0;
    this->Evidence = 0;
    this->DeathDamageType = NULL;
    this->DeathWeapon = NULL;
    this->LastFireMode = EFireMode::FM_Single;
    this->bDeadToPointDamage = false;
    this->DeathKiller = NULL;
    this->Deaths = 0;
    this->Incapacitations = 0;
    this->DamageDealt = 0.00f;
    this->DamageReceived = 0.00f;
    this->BulletsFired = 0;
    this->BulletsFiredThisLife = 0;
    this->Team = ETeamType::TT_NONE;
    this->bReady = false;
    this->bSquadLeader = false;
    this->PointsFromKills = 0.00f;
    this->PointsFromDamage = 0.00f;
    this->PointsFromArrests = 0.00f;
    this->PointsFromObjective = 0.00f;
    this->PointsFromReportingKills = 0.00f;
    this->PointsFromReportingArrests = 0.00f;
    this->bIsInGame = false;
    this->bJoinInProgress = false;
    this->bIsVIP = false;
    this->bWasVIP = false;
    this->GrenadesThrown = 0;
    this->TotalYells = 0;
    this->NumberOrdersGiven = 0;
    this->BulletsHit = 0;
    this->BulletsHitThisLife = 0;
    this->Headshots = 0;
    this->TimeAlive = 0.00f;
    this->VoiceType = EVoiceType::VT_Local;
    this->bIsTalking = false;
    this->bTorsoInjured = false;
    this->bLeftArmInjured = false;
    this->bRightArmInjured = false;
    this->bLeftLegInjured = false;
    this->bRightLegInjured = false;
    this->bHeadInjured = false;
    this->BulletsBlocked = 0;
    this->HitsReceived = 0;
    this->bIsReplaySpectator = false;
}

