#include "ArrestAndRescueGS.h"
#include "Net/UnrealNetwork.h"

void AArrestAndRescueGS::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AArrestAndRescueGS, BlueRespawnWaves);
    DOREPLIFETIME(AArrestAndRescueGS, RedRespawnWaves);
}

AArrestAndRescueGS::AArrestAndRescueGS() {
    this->BlueRespawnWaves = 1;
    this->RedRespawnWaves = 1;
}

