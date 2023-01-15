#include "DynamicWorldActor.h"
#include "Net/UnrealNetwork.h"

void ADynamicWorldActor::SetDynamicSpawn(bool bShouldSpawn) {
}

void ADynamicWorldActor::OnRep_ReplicateSpawn() {
}


void ADynamicWorldActor::CheckDynamicSpawn() {
}

void ADynamicWorldActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADynamicWorldActor, bReplicateSpawn);
}

ADynamicWorldActor::ADynamicWorldActor() {
    this->bReplicateSpawn = false;
}

