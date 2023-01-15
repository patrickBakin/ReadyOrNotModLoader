#include "CoopGS.h"
#include "Net/UnrealNetwork.h"

class APlayerCharacter;
class AReadyOrNotPlayerController;

void ACoopGS::UpdateVotes(int32 Yes, int32 No) {
}

void ACoopGS::StartTOCBriefing(const FString& TOCLine) {
}

void ACoopGS::Server_SetDeployableDepot_Implementation(AReadyOrNotPlayerController* Controller, int32 NewDepotNum) {
}
bool ACoopGS::Server_SetDeployableDepot_Validate(AReadyOrNotPlayerController* Controller, int32 NewDepotNum) {
    return true;
}

void ACoopGS::OnRep_MapElement() {
}

void ACoopGS::OnRep_COOPMode() {
}

void ACoopGS::Multicast_OnMissionEnd_Implementation(bool bSuccess) {
}

void ACoopGS::Multicast_BroadcastNewSquadLeader_Implementation(APlayerCharacter* NewLeader) {
}

bool ACoopGS::IsPersonnelEnabled(int32 PersonnelNum) {
    return false;
}

bool ACoopGS::IsDeployableEnabled(int32 DeployableNumber) {
    return false;
}

TArray<int32> ACoopGS::GetUsedPersonnelPoints() {
    return TArray<int32>();
}

TArray<int32> ACoopGS::GetUnenabledPersonnel() {
    return TArray<int32>();
}

TArray<int32> ACoopGS::GetUnenabledDeployables() {
    return TArray<int32>();
}

int32 ACoopGS::GetPersonnelForMapNum(int32 MapPointNum) {
    return 0;
}

TArray<int32> ACoopGS::GetEnabledPersonnel() {
    return TArray<int32>();
}

TArray<FText> ACoopGS::GetEnabledDeployablesShortNames() {
    return TArray<FText>();
}

TArray<int32> ACoopGS::GetEnabledDeployables() {
    return TArray<int32>();
}

bool ACoopGS::CanChangeSpawn(bool bBlueTeam, ESelectedSpawn NewSpawn) {
    return false;
}

void ACoopGS::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACoopGS, bMissionSucceded);
    DOREPLIFETIME(ACoopGS, bMissionSoftCompleted);
    DOREPLIFETIME(ACoopGS, Mode);
    DOREPLIFETIME(ACoopGS, bCrouchingTigerHiddenDragon);
    DOREPLIFETIME(ACoopGS, CurrentDeployables);
    DOREPLIFETIME(ACoopGS, DeployableDepot);
    DOREPLIFETIME(ACoopGS, DepotLabel);
    DOREPLIFETIME(ACoopGS, DepotNumber);
    DOREPLIFETIME(ACoopGS, DepotCost);
    DOREPLIFETIME(ACoopGS, CurrentPersonnel);
    DOREPLIFETIME(ACoopGS, CurrentUsedPersonnelPoints);
    DOREPLIFETIME(ACoopGS, TotalAIOfficers);
    DOREPLIFETIME(ACoopGS, TotalOfficers);
    DOREPLIFETIME(ACoopGS, NumCompleteExtraObjectives);
    DOREPLIFETIME(ACoopGS, NumTotalExtraObjectives);
    DOREPLIFETIME(ACoopGS, TeamKills);
    DOREPLIFETIME(ACoopGS, bAllPlayerCharactesDead);
    DOREPLIFETIME(ACoopGS, SquadPointsRemaining);
    DOREPLIFETIME(ACoopGS, SelectedRedSpawnPoint);
    DOREPLIFETIME(ACoopGS, RedSpawnSquadPoints);
    DOREPLIFETIME(ACoopGS, SelectedBlueSpawnPoint);
    DOREPLIFETIME(ACoopGS, BlueSpawnSquadPoints);
    DOREPLIFETIME(ACoopGS, YesVotes);
    DOREPLIFETIME(ACoopGS, NoVotes);
}

ACoopGS::ACoopGS() {
    this->bMissionSucceded = false;
    this->bMissionSoftCompleted = false;
    this->Mode = ECOOPMode::CM_None;
    this->bCrouchingTigerHiddenDragon = false;
    this->CurrentDeployables = 0;
    this->DeployableDepot = NULL;
    this->DepotNumber = 0;
    this->DepotCost = 0;
    this->CurrentPersonnel = 0;
    this->CurrentUsedPersonnelPoints = 0;
    this->TotalAIOfficers = 0;
    this->TotalOfficers = 0;
    this->NumCompleteExtraObjectives = 0;
    this->NumTotalExtraObjectives = 0;
    this->TeamKills = 0;
    this->bAllPlayerCharactesDead = false;
    this->SquadPointsRemaining = 0;
    this->SelectedRedSpawnPoint = ESelectedSpawn::SS_FirstSpawn;
    this->RedSpawnSquadPoints = 0;
    this->SelectedBlueSpawnPoint = ESelectedSpawn::SS_FirstSpawn;
    this->BlueSpawnSquadPoints = 0;
    this->missionMusic = NULL;
    this->YesVotes = 0;
    this->NoVotes = 0;
    this->TOCDelay = 5.00f;
}

