#include "TugOfWarGS.h"
#include "Net/UnrealNetwork.h"

void ATugOfWarGS::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATugOfWarGS, Mover);
}

ATugOfWarGS::ATugOfWarGS() {
    this->Mover = NULL;
}

