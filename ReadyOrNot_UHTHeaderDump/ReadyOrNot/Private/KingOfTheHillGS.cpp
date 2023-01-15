#include "KingOfTheHillGS.h"
#include "Net/UnrealNetwork.h"

void AKingOfTheHillGS::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AKingOfTheHillGS, Mover);
}

AKingOfTheHillGS::AKingOfTheHillGS() {
    this->Mover = NULL;
}

