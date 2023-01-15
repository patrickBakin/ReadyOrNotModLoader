#include "DoorJam.h"
#include "Net/UnrealNetwork.h"

class ADoor;

void ADoorJam::Server_StartDoorjamPlacement_Implementation(ADoor* PendingDoor) {
}
bool ADoorJam::Server_StartDoorjamPlacement_Validate(ADoor* PendingDoor) {
    return true;
}

void ADoorJam::Server_FinishDoorjamPlacement_Implementation(ADoor* PendingDoor) {
}
bool ADoorJam::Server_FinishDoorjamPlacement_Validate(ADoor* PendingDoor) {
    return true;
}

void ADoorJam::OnRep_DoorjamSet() {
}

void ADoorJam::Multicast_StartPlacement_Implementation() {
}

void ADoorJam::JamDoor(ADoor* Door) {
}

void ADoorJam::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADoorJam, bSet);
    DOREPLIFETIME(ADoorJam, PlacedBy);
    DOREPLIFETIME(ADoorJam, PendingPlacement);
    DOREPLIFETIME(ADoorJam, JammedDoor);
}

ADoorJam::ADoorJam() {
    this->bSet = false;
    this->PlacedBy = NULL;
    this->PendingPlacement = NULL;
    this->JammedDoor = NULL;
    this->DoorJamSocket = TEXT("DoorJam");
    this->PlacedMesh = NULL;
    this->PlacementTimer = 0.30f;
    this->WedgeRemovalTime = 1.50f;
}

