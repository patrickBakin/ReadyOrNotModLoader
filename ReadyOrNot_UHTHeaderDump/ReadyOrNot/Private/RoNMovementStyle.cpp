#include "RoNMovementStyle.h"

FRoNMovementStyle::FRoNMovementStyle() {
    this->bIsStrafeMovement = false;
    this->bIsLoweredSet = false;
    this->ItemOverrideRule = EItemOverrideRule::NONE;
    this->StrafeBS = NULL;
    this->NonStrafeBS = NULL;
}

