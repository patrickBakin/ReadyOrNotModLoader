#include "FirefightGM.h"

void AFirefightGM::RegenerateRandomLoadouts() {
}

int32 AFirefightGM::GetNumberOfActivePlayersOnTeam(ETeamType Team) {
    return 0;
}

AFirefightGM::AFirefightGM() {
    this->bSuddenDeath = false;
    this->TeamKilledSound_SERT_RED = NULL;
    this->TeamKilledSound_SERT_BLUE = NULL;
    this->MatchLoopMusic = NULL;
    this->MatchStartMusic = NULL;
    this->MatchEndMusic = NULL;
    this->NumRedSpawned = 0;
    this->NumBlueSpawned = 0;
}

