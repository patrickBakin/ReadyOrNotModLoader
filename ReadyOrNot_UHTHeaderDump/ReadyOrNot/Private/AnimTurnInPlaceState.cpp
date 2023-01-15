#include "AnimTurnInPlaceState.h"

FAnimTurnInPlaceState::FAnimTurnInPlaceState() {
    this->ActiveTurnAnim = NULL;
    this->TurnRecoveryAnim = NULL;
    this->RootYawOffset = 0.00f;
    this->RootYawOffsetInverse = 0.00f;
    this->ActiveTurnAnimTime = 0.00f;
    this->TurnRecoveryAnimStartTime = 0.00f;
    this->bTurnTransitionRequested = false;
    this->bTurnRecoveryRequested = false;
    this->PendingTurnAnim = NULL;
}

