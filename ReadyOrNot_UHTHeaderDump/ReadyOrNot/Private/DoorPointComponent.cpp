#include "DoorPointComponent.h"

UDoorPointComponent::UDoorPointComponent() {
    this->bFront = false;
    this->bPIEMidLocation = false;
    this->bPIEEndLocation = false;
    this->bStackUp = false;
    this->bClear = false;
    this->bMidpoint = false;
    this->Position = 0;
    this->bAlternate = false;
    this->bGrenadeLauncher = false;
    this->bGrenadeThrow = false;
    this->bDoorInteractionPoint = false;
}

