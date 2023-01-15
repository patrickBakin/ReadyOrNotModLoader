#include "CaptureTheFlagGS.h"
#include "Net/UnrealNetwork.h"

void ACaptureTheFlagGS::OnRep_FlagStatus() {
}

void ACaptureTheFlagGS::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACaptureTheFlagGS, Flag);
    DOREPLIFETIME(ACaptureTheFlagGS, FlagBearer);
    DOREPLIFETIME(ACaptureTheFlagGS, FlagBearerTeam);
    DOREPLIFETIME(ACaptureTheFlagGS, bFlagCaptured);
    DOREPLIFETIME(ACaptureTheFlagGS, bGameWon);
}

ACaptureTheFlagGS::ACaptureTheFlagGS() {
    this->Flag = NULL;
    this->FlagBearer = NULL;
    this->FlagBearerTeam = ETeamType::TT_NONE;
    this->bFlagCaptured = false;
    this->bGameWon = false;
}

