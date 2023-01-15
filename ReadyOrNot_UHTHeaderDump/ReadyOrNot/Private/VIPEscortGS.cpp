#include "VIPEscortGS.h"
#include "Net/UnrealNetwork.h"

void AVIPEscortGS::OnRep_VIPKilled() {
}

void AVIPEscortGS::OnRep_VIPArrested() {
}

void AVIPEscortGS::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVIPEscortGS, HoldVIP_TimeRemaining);
    DOREPLIFETIME(AVIPEscortGS, bVIPArrested);
    DOREPLIFETIME(AVIPEscortGS, bCanKillVIP);
    DOREPLIFETIME(AVIPEscortGS, VIPCharacter);
    DOREPLIFETIME(AVIPEscortGS, VIPPlayer);
    DOREPLIFETIME(AVIPEscortGS, VIPPlayerState);
    DOREPLIFETIME(AVIPEscortGS, LastWinningTeam);
    DOREPLIFETIME(AVIPEscortGS, bVIPSelected);
    DOREPLIFETIME(AVIPEscortGS, bVIPKilled);
    DOREPLIFETIME(AVIPEscortGS, CurrentVIPTeam);
    DOREPLIFETIME(AVIPEscortGS, RecentArrester);
    DOREPLIFETIME(AVIPEscortGS, RecentFreer);
    DOREPLIFETIME(AVIPEscortGS, RecentVIPKiller);
}

AVIPEscortGS::AVIPEscortGS() {
    this->HoldVIP_TimeRemaining = 0.00f;
    this->bVIPArrested = false;
    this->bCanKillVIP = false;
    this->VIPCharacter = NULL;
    this->VIPPlayer = NULL;
    this->VIPPlayerState = NULL;
    this->LastWinningTeam = ETeamType::TT_NONE;
    this->bVIPSelected = false;
    this->bVIPKilled = false;
    this->CurrentVIPTeam = ETeamType::TT_NONE;
    this->RecentArrester = NULL;
    this->RecentFreer = NULL;
    this->RecentVIPKiller = NULL;
}

