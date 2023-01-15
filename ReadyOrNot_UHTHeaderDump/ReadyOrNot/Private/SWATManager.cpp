#include "SWATManager.h"
#include "Templates/SubclassOf.h"

class AActor;
class ABaseItem;
class ABaseGrenade;
class AReadyOrNotCharacter;
class ADoor;
class APlayerCharacter;
class UWorld;
class ASWATManager;
class ASWATCharacter;
class UTeamBreachAndClearActivity;

void ASWATManager::RemoveHoldCommand(ETeamType TeamType) {
}

void ASWATManager::PlaySwatCommandVoiceLine(const FString& VoiceLine, const FString& OverrideSpearkerName) {
}

bool ASWATManager::IsSWATTeamDead(ETeamType Team) const {
    return false;
}

bool ASWATManager::IsPlayerAKnownEnemy(APlayerCharacter* PlayerCharacter) const {
    return false;
}

void ASWATManager::GiveWedgeDoorCommand(AActor* Target, ETeamType TeamType, FVector CommandLocation, FVector CommandNormal) {
}

void ASWATManager::GiveWaitingForCommand() {
}

void ASWATManager::GiveStackUpCommand(AActor* Target, ETeamType TeamType, FVector CommandLocation, FVector CommandNormal, bool bCheckDoor) {
}

void ASWATManager::GiveRestrainCommand(AActor* Target, ETeamType TeamType, FVector CommandLocation) {
}

void ASWATManager::GiveReportTargetCommand(AActor* Target, ETeamType TeamType) {
}

void ASWATManager::GiveRemoveWedgeCommand(AActor* Target, ETeamType TeamType, FVector CommandLocation, FVector CommandNormal) {
}

void ASWATManager::GivePickLockCommand(AActor* Target, ETeamType TeamType, FVector CommandLocation) {
}

void ASWATManager::GiveOpenDoorCommand(AActor* Target, ETeamType TeamType, FVector CommandLocation) {
}

void ASWATManager::GiveMoveCommand(ETeamType TeamType, FVector CommandLocation, FVector CommandNormal, float Delay, bool bMoveToCover) {
}

void ASWATManager::GiveHoldCommand(ETeamType TeamType) {
}

void ASWATManager::GiveFallInCommand(ETeamType TeamType) {
}

void ASWATManager::GiveDropChemlightAtLocation(ETeamType TeamType, FVector CommandLocation) {
}

void ASWATManager::GiveDisarmTrapOnDoorCommand(AActor* Target, ETeamType TeamType, FVector CommandLocation, FVector CommandNormal, bool bWaitForNextCommand) {
}

void ASWATManager::GiveDisarmStandaloneTrapCommand(AActor* Target, ETeamType TeamType) {
}

void ASWATManager::GiveDeployShield(ETeamType TeamType) {
}

void ASWATManager::GiveDeployGrenadeAtLocation(ETeamType TeamType, FVector CommandLocation, TSubclassOf<ABaseGrenade> Grenade) {
}

void ASWATManager::GiveCollectEvidenceCommand(AActor* Target, ETeamType TeamType) {
}

void ASWATManager::GiveCloseDoorCommand(AActor* Target, ETeamType TeamType, FVector CommandLocation) {
}

void ASWATManager::GiveCheckForTrapsCommand(AActor* Target, ETeamType TeamType, FVector CommandLocation, FVector CommandNormal) {
}

void ASWATManager::GiveCheckForContactsCommand(AActor* Target, ETeamType TeamType, FVector CommandLocation, FVector CommandNormal) {
}

void ASWATManager::GiveBreachAndClearCommand(ADoor* Door, EDoorBreachType DoorBreachType, ETeamType TeamType, FVector CommandLocation, FVector CommandNormal, TSubclassOf<ABaseItem> DoorBreachItemClass, TSubclassOf<ABaseItem> DoorUseItemClass, TSubclassOf<UTeamBreachAndClearActivity> InCustomBreachAndClearActivityClass) {
}

TArray<ASWATCharacter*> ASWATManager::GetSwatTeam() const {
    return TArray<ASWATCharacter*>();
}

TArray<ASWATCharacter*> ASWATManager::GetSWATSortedByDistanceToLocation(FVector Location, ETeamType FilterTeam, ADoor* StackUpDoor, bool bAscendingOrder) {
    return TArray<ASWATCharacter*>();
}

ASWATManager* ASWATManager::GetSWATManager(UWorld* World) {
    return NULL;
}

ASWATCharacter* ASWATManager::GetSwatCharacterAtSquadPosition(ESquadPosition InSquadPosition) const {
    return NULL;
}

ESwatCommand ASWATManager::GetQueuedSwatCommandForSquadPosition(ESquadPosition SquadPosition) const {
    return ESwatCommand::SC_None;
}

AReadyOrNotCharacter* ASWATManager::GetLeadCharacter() {
    return NULL;
}

bool ASWATManager::CanGiveActivityToSWAT(ASWATCharacter* SWAT, ETeamType Team) const {
    return false;
}

bool ASWATManager::CanDropItemContext(TSubclassOf<ABaseItem> Item) {
    return false;
}

ASWATManager::ASWATManager() {
    this->LeadCharacter = NULL;
    this->SquadLeader = NULL;
    this->CurrentDefaultCommand = ESwatCommand::SC_FallIn;
    this->SwatCommandPriority = ESwatCommandPriority::SCP_PrioritizeCommands;
    this->ActiveCommandTeam = ETeamType::TT_SQUAD;
}

