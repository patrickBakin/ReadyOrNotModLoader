#include "GunGameGM.h"

class ABaseItem;
class APlayerCharacter;
class AReadyOrNotPlayerState;

TArray<AReadyOrNotPlayerState*> AGunGameGM::FindTopKillers() {
    return TArray<AReadyOrNotPlayerState*>();
}

ABaseItem* AGunGameGM::EquipNextGun(APlayerCharacter* Player, bool bAdvanceGunIdx) {
    return NULL;
}

AGunGameGM::AGunGameGM() {
    this->RespawnTime = 5.00f;
    this->bSuddenDeath = false;
    this->KillsToProgress = 5;
}

