#include "SWATCharacter.h"

void ASWATCharacter::PlayOnShotDialogue(bool bIsFriendly) {
}

ASWATCharacter::ASWATCharacter() {
    this->LastSetBestFocus = NULL;
    this->SquadLeader = NULL;
    this->MaxGestureCooldownTime = 29.00f;
    this->MinGestureCooldownTime = 16.00f;
}

