#include "ReadyOrNotGameSession.h"

void AReadyOrNotGameSession::WriteOutConfig() {
}

void AReadyOrNotGameSession::UpdateServerMatchmakeQueue() {
}

void AReadyOrNotGameSession::SetServerSettings(float NewRoundTimerGameStart, float NewRoundTimerBetweenMaps, float NewReinforcementTimer, float NewTimelimit, int32 NewRoundsPerMap, int32 NewScorelimit, bool NewAiEnabled) {
}

void AReadyOrNotGameSession::RefreshMatchmakeServer() {
}

void AReadyOrNotGameSession::OnMatchmakingCreateParty(const FZeuzMatchMakingStatus& MatchmakingStatus, const FString& Error) {
}

void AReadyOrNotGameSession::OnGetRegions(const TArray<FZeuzRegion>& ZeuzRegions, const FString& Error) {
}

void AReadyOrNotGameSession::OnGetPayloadsMatchmakingCreateParty(const FZeuzPayloadGetOut& PayloadOut, const FString& Error) {
}

void AReadyOrNotGameSession::OnGetPayloadServerRefresh(const FZeuzPayloadGetOut& PayloadOut, const FString& Error) {
}

void AReadyOrNotGameSession::MakeLoadingMapOnlyURL(const FString& MapURL) {
}

void AReadyOrNotGameSession::AddServerToMatchMakeQueue() {
}

AReadyOrNotGameSession::AReadyOrNotGameSession() {
    this->SessionData = NULL;
    this->ServerName = TEXT("Ready Or Not Dedicated Server");
    this->MapList.AddDefaulted(1);
    this->ReturnToLobbyAfterXMissions = 1;
    this->MaxConnections = 16;
    this->AdminPassword = TEXT("admin");
    this->MaxTeamKillsBeforeAutoKick = 2;
    this->MaxTeamKillsBeforeAutoBan = 4;
    this->SecondsUntilKickedForAFK = 0.00f;
    this->SecondsUntilAutostartLobby = -1.00f;
    this->MinPlayersForAutostart = 1;
    this->RoundTimerGameStart = 90.00f;
    this->RoundTimerBetweenMaps = 30.00f;
    this->ReinforcementTimer = 30.00f;
    this->RespawnTimer = 8.00f;
    this->Timelimit = 1200.00f;
    this->Scorelimit = 150;
    this->RoundsPerMap = 2;
    this->bAiEnabled = true;
    this->EventId = 0;
    this->ClientNetSpeed = 250000;
}

