#include "ElevatorButtonComponent.h"

UElevatorButtonComponent::UElevatorButtonComponent() {
    this->bOverrideButtonPromptText = false;
    this->OwningElevator = NULL;
    this->bDoorButton = false;
    this->bDoorClose = false;
    this->Floor = 0;
}

