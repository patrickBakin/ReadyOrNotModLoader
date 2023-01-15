#include "KingOfTheHostageGS.h"
#include "Net/UnrealNetwork.h"

void AKingOfTheHostageGS::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AKingOfTheHostageGS, RedTeam_RoundTimeRemaining);
    DOREPLIFETIME(AKingOfTheHostageGS, BlueTeam_RoundTimeRemaining);
}

AKingOfTheHostageGS::AKingOfTheHostageGS() {
    this->RedTeam_RoundTimeRemaining = 0.00f;
    this->BlueTeam_RoundTimeRemaining = 0.00f;
}

