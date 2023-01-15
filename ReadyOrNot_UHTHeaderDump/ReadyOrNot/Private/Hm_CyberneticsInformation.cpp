#include "Hm_CyberneticsInformation.h"

FHm_CyberneticsInformation::FHm_CyberneticsInformation() {
    this->TeamType = ETeamType::TT_NONE;
    this->Health = 0.00f;
    this->bIsArrested = false;
    this->bIsSurrendered = false;
    this->bHasBeenReported = false;
    this->EquippedItemClass = NULL;
}

