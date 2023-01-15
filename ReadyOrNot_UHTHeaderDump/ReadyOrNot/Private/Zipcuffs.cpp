#include "Zipcuffs.h"
#include "Net/UnrealNetwork.h"

class AActor;
class AReadyOrNotCharacter;

void AZipcuffs::Server_ArrestStart_Implementation(AReadyOrNotCharacter* TargetedChar) {
}
bool AZipcuffs::Server_ArrestStart_Validate(AReadyOrNotCharacter* TargetedChar) {
    return true;
}

void AZipcuffs::Server_ArrestComplete_Implementation() {
}
bool AZipcuffs::Server_ArrestComplete_Validate() {
    return true;
}

void AZipcuffs::Server_ArrestCancelled_Implementation() {
}
bool AZipcuffs::Server_ArrestCancelled_Validate() {
    return true;
}

void AZipcuffs::OnRagdollArrestInteractionStarted() {
}

void AZipcuffs::OnRagdollArrestComplete_Slave(AActor* Slave) {
}

void AZipcuffs::OnRagdollArrestComplete_Driver(AActor* Driver) {
}

void AZipcuffs::Multicast_OnRagdollArrestStart_Implementation(AReadyOrNotCharacter* ArrestTarget) {
}

void AZipcuffs::Client_ArrestComplete_Implementation() {
}

void AZipcuffs::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AZipcuffs, bArresting);
}

AZipcuffs::AZipcuffs() {
    this->PendingArrestCharacter = NULL;
    this->TargetedCharacter = NULL;
    this->bArresting = false;
    this->ArrestMaxDistance = 200.00f;
    this->UseZipcuffs_1P = NULL;
    this->UseZipcuffs_3P = NULL;
    this->ArrestTime = 2.00f;
    this->ForcedInteractionData = NULL;
    this->ArrestRagdoll_Up = NULL;
    this->ArrestRagdoll_Down = NULL;
    this->ArrestRagdoll_Left = NULL;
    this->ArrestRagdoll_Right = NULL;
    this->SpawnedZipcuffsClass = NULL;
    this->FMODZipcuffsArrest = NULL;
}

