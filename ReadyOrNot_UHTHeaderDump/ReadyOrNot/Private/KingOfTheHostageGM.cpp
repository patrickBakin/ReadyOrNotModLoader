#include "KingOfTheHostageGM.h"
#include "Templates/SubclassOf.h"

class APawn;

APawn* AKingOfTheHostageGM::SpawnHostage(TSubclassOf<APawn> HostageClass, TArray<FVector> SpawnLocations) {
    return NULL;
}


AKingOfTheHostageGM::AKingOfTheHostageGM() {
    this->Start_RoundTime = 900.00f;
    this->bBlueTeamOnAttack = false;
}

