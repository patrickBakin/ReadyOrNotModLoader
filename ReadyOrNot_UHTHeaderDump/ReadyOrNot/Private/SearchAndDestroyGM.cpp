#include "SearchAndDestroyGM.h"

int32 ASearchAndDestroyGM::GetNumberOfActivePlayersOnTeam(ETeamType Team) {
    return 0;
}

ASearchAndDestroyGM::ASearchAndDestroyGM() {
    this->bBombPlanted = false;
    this->NumRedSpawned = 0;
    this->NumBlueSpawned = 0;
}

