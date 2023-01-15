#include "C2Explosive.h"
#include "Net/UnrealNetwork.h"

class AActor;

void AC2Explosive::Server_StartC2Placement_Implementation(AActor* Actor) {
}
bool AC2Explosive::Server_StartC2Placement_Validate(AActor* Actor) {
    return true;
}

void AC2Explosive::Server_FinishC2Placement_Implementation() {
}
bool AC2Explosive::Server_FinishC2Placement_Validate() {
    return true;
}

void AC2Explosive::OnRep_LastPlacedC2Explosive() {
}

void AC2Explosive::Multicast_StartPlaceC2Explosive_Implementation() {
}

void AC2Explosive::EquipDetonator(bool bFromExplosives) const {
}

void AC2Explosive::Client_C2PlacementFinished_Implementation() {
}

void AC2Explosive::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AC2Explosive, LastPlacedC2Explosive);
    DOREPLIFETIME(AC2Explosive, CurrentActorPlacement);
}

AC2Explosive::AC2Explosive() {
    this->bIsValidPlacement = false;
    this->LastPlacedC2Explosive = NULL;
    this->MaxPlacementDistance = 100.00f;
    this->CurrentActorPlacement = NULL;
}

