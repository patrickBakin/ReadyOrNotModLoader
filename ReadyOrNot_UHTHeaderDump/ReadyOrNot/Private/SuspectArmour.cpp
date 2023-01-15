#include "SuspectArmour.h"
#include "Net/UnrealNetwork.h"

void ASuspectArmour::OnRep_ArmourData() {
}

void ASuspectArmour::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASuspectArmour, ArmourData);
}

ASuspectArmour::ASuspectArmour() {
    this->Durability = 0.00f;
    this->BlockedSoundEvent = NULL;
    this->PenetratedSoundEvent = NULL;
}

