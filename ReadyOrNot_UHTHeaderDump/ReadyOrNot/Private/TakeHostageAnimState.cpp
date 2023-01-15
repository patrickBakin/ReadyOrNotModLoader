#include "TakeHostageAnimState.h"

FTakeHostageAnimState::FTakeHostageAnimState() {
    this->bIsTakingHostage = false;
    this->bIsLooping = false;
    this->LoopAnim = NULL;
    this->AimOffset = NULL;
}

