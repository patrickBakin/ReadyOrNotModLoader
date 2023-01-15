#include "DoorSound.h"

UDoorSound::UDoorSound() {
    this->DoorClosed = NULL;
    this->DoorOpened = NULL;
    this->DoorStartManipulation = NULL;
    this->DoorStopManipulation = NULL;
    this->BrokenByC2 = NULL;
    this->BrokenByRam = NULL;
    this->BrokenByShotgun = NULL;
    this->KickedDown = NULL;
    this->KickedDownFailed = NULL;
    this->KickedDownBreak = NULL;
}

