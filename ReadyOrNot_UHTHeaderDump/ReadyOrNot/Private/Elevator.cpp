#include "Elevator.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=FMODStudio -ObjectName=FMODAudioComponent -FallbackName=FMODAudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent

void AElevator::StartMovingElevator() {
}

void AElevator::SetSelectedFloor(int32 Floor) {
}

void AElevator::Server_SetSelectedFloor_Implementation(int32 Floor) {
}
bool AElevator::Server_SetSelectedFloor_Validate(int32 Floor) {
    return true;
}

void AElevator::Server_OpenCloseDoors_Implementation(bool bShouldCloseDoors) {
}
bool AElevator::Server_OpenCloseDoors_Validate(bool bShouldCloseDoors) {
    return true;
}

void AElevator::Multicast_PlayFloorReachedSound_Implementation() {
}

void AElevator::Multicast_PlayDoorOpenSound_Implementation() {
}

void AElevator::Multicast_PlayDoorCloseSound_Implementation() {
}

void AElevator::Multicast_PlayDestinationReachedSound_Implementation() {
}

void AElevator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AElevator, bMoveElevator);
    DOREPLIFETIME(AElevator, bCloseDoors);
    DOREPLIFETIME(AElevator, SelectedFloor);
}

AElevator::AElevator() {
    this->ElevatorPath = CreateDefaultSubobject<USplineComponent>(TEXT("ElevatorPath"));
    this->bMoveElevator = false;
    this->bCloseDoors = false;
    this->ElevatorMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Elevator"));
    this->DestinationReachedSound = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("DestinationReachedSound"));
    this->FloorReachedSound = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("FloorReachedSound"));
    this->DoorOpenSoundFMOD = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("DoorOpenSound"));
    this->DoorCloseSoundFMOD = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("DoorCloseSound"));
    this->Floors = 0;
    this->ElevatorSpeed = 1.00f;
    this->CurrentFloor = 0;
    this->MoveElevatorDelay = 1.50f;
    this->SelectedFloor = 0;
}

