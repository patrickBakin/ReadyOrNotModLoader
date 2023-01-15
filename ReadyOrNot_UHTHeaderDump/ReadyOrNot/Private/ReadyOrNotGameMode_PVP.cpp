#include "ReadyOrNotGameMode_PVP.h"

class AReadyOrNotPlayerState;

void AReadyOrNotGameMode_PVP::TimeLimitVictoryConditions_Implementation() {
}

void AReadyOrNotGameMode_PVP::TimelimitReached() {
}

void AReadyOrNotGameMode_PVP::RoundWonTeam(ETeamType WinningTeam) {
}

void AReadyOrNotGameMode_PVP::RoundWon(TArray<AReadyOrNotPlayerState*> WinningPlayers) {
}

void AReadyOrNotGameMode_PVP::RoundEnd() {
}

void AReadyOrNotGameMode_PVP::OnRoundStarted_Implementation() {
}

void AReadyOrNotGameMode_PVP::OnRoundEnded_Implementation() {
}

void AReadyOrNotGameMode_PVP::NextRound() {
}

void AReadyOrNotGameMode_PVP::Multicast_SetWinningTeam_Implementation(ETeamType WinningTeam) {
}

void AReadyOrNotGameMode_PVP::MatchEnd() {
}

void AReadyOrNotGameMode_PVP::CheckRoundEnd_Implementation(float DeltaSeconds) {
}

bool AReadyOrNotGameMode_PVP::AnyDeathsOnWinningTeam() {
    return false;
}

AReadyOrNotGameMode_PVP::AReadyOrNotGameMode_PVP() {
    this->RoundEndResetDelay = 5.00f;
    this->MatchEndResetDelay = 10.00f;
    this->RoundEndWidgetClass = NULL;
    this->bIncrementedRoundCounterThisRound = false;
}

