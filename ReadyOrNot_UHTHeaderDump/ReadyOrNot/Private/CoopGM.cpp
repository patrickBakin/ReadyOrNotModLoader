#include "CoopGM.h"

class AActor;
class ACharacter;
class AReadyOrNotCharacter;
class UBulletDamageType;
class APlayerStart;
class ASWATManager;

void ACoopGM::StartMissionEndTimer(bool bWon) {
}

void ACoopGM::SpawnSuspectsAndHostages() {
}

void ACoopGM::SpawnPolice() {
}

void ACoopGM::SpawnDeployables() {
}

void ACoopGM::Server_SoftClearVoteCheck_Implementation() {
}

void ACoopGM::RemoveAllSpawnedAI() {
}

void ACoopGM::Personnel_SpawnVentilation(int32 PersonnelNum, int32 MapPointNum) {
}

void ACoopGM::Personnel_SpawnTruckDriver(int32 PersonnelNum, int32 MapPointNum) {
}

void ACoopGM::Personnel_SpawnPowerCrew() {
}

void ACoopGM::Personnel_SpawnOperator(int32 PersonnelNum, int32 MapPointNum, bool bNoisemaker) {
}

void ACoopGM::Personnel_SpawnNegotiator() {
}

void ACoopGM::Personnel_SpawnHighground(int32 PersonnelNum, int32 MapPointNum, bool bSpotter, bool bMarksman, bool bSniper) {
}

void ACoopGM::MissionEnd(bool bSuccess) {
}

ASWATManager* ACoopGM::GetSWATManager() {
    return NULL;
}

ECOOPMode ACoopGM::GetCOOPMode() const {
    return ECOOPMode::CM_None;
}

void ACoopGM::FriendlyAIKilled(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* KilledCharacter) {
}

void ACoopGM::FindSpotUpgradeSWAT() {
}

APlayerStart* ACoopGM::FindPlayerStartForTeam(ETeamType Team) {
    return NULL;
}

void ACoopGM::EnemyAIKilled(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* KilledCharacter) {
}

void ACoopGM::EnemyAIBulletHit(float Damage, AActor* Causer, ACharacter* InstigatorCharacter, ACharacter* HitCharacter, const UBulletDamageType* DamageEvent) {
}

void ACoopGM::EnemyAIArrested(AReadyOrNotCharacter* ArrestedCharacter, AReadyOrNotCharacter* InstigatorCharacter) {
}

void ACoopGM::CheckSpawners() {
}

ACoopGM::ACoopGM() {
    this->SWATManager = NULL;
    this->SuspectsAndCivilianManager = NULL;
    this->GameplayManager = NULL;
    this->Mode = ECOOPMode::CM_None;
    this->AvoidanceManager = NULL;
    this->KilledSuspectAvoidanceShape = NULL;
    this->bNegotiatorActive = false;
    this->bAIEquipSameLoadoutAsPlayer = false;
    this->MaxHostagesKilledBeforeMissionFailed = 1;
    this->MaxTeamKillsBeforeAIRetaliates = 2;
    this->CommandDecalClass = NULL;
    this->SwatAlphaClass = NULL;
    this->SwatBetaClass = NULL;
    this->SwatCharlieClass = NULL;
    this->SwatDeltaClass = NULL;
    this->FriendlyAIController = NULL;
    this->EvidenceClass = NULL;
    this->GameStartedWidget = NULL;
    this->KeycardClass = NULL;
    this->AI_SpawnTag = TEXT("AI_SPAWN");
    this->NextHighgroundDesignation = 0;
    this->bUniqueOfficerSoundsets = false;
    this->NumPickedOfficerSoundsets = 0;
    this->PickedOfficerSoundsets = 0;
    this->AISpawnDistance = 5000.00f;
    this->NegFeedback = NULL;
    this->PosFeedBack = NULL;
}

