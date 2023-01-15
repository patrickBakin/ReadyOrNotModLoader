#include "TrapActorAttachedToDoor.h"
#include "Net/UnrealNetwork.h"

void ATrapActorAttachedToDoor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATrapActorAttachedToDoor, AttachedToDoor);
    DOREPLIFETIME(ATrapActorAttachedToDoor, MappedSplineLocation);
    DOREPLIFETIME(ATrapActorAttachedToDoor, bChunk1Destroyed);
    DOREPLIFETIME(ATrapActorAttachedToDoor, bChunk2Destroyed);
    DOREPLIFETIME(ATrapActorAttachedToDoor, bSubdoorChunk1Destroyed);
    DOREPLIFETIME(ATrapActorAttachedToDoor, bSubdoorChunk2Destroyed);
}

ATrapActorAttachedToDoor::ATrapActorAttachedToDoor() {
    this->AttachedToDoor = NULL;
    this->WireYPosition = 24.00f;
    this->CurveStrength = 40.00f;
    this->MappedSplineLocation = 0.00f;
    this->bChunk1Destroyed = false;
    this->bChunk2Destroyed = false;
    this->bSubdoorChunk1Destroyed = false;
    this->bSubdoorChunk2Destroyed = false;
}

