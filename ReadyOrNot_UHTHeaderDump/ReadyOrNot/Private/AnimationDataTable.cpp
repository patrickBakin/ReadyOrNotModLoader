#include "AnimationDataTable.h"

FAnimationDataTable::FAnimationDataTable() {
    this->bRestartIfAlreadyPlaying = false;
    this->MaxRandomDelay = 0.00f;
    this->Cooldown = 0.00f;
    this->bNoCanPlayWhileStrafing = false;
    this->bNoCanPlayWhileNotStrafing = false;
    this->bCanQueue = false;
    this->bCanAnimationBeInterupted = false;
}

