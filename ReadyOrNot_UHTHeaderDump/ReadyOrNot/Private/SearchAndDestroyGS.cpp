#include "SearchAndDestroyGS.h"
#include "Net/UnrealNetwork.h"

void ASearchAndDestroyGS::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASearchAndDestroyGS, BombCountActive);
    DOREPLIFETIME(ASearchAndDestroyGS, bBombPlanted);
    DOREPLIFETIME(ASearchAndDestroyGS, bBombDetonate);
    DOREPLIFETIME(ASearchAndDestroyGS, bBombDefused);
    DOREPLIFETIME(ASearchAndDestroyGS, bHasBomb);
}

ASearchAndDestroyGS::ASearchAndDestroyGS() {
    this->BombCountActive = 0.00f;
    this->bBombPlanted = false;
    this->bBombDetonate = false;
    this->bBombDefused = false;
    this->bHasBomb = NULL;
}

