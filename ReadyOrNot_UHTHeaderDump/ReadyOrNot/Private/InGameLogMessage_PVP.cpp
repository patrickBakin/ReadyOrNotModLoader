#include "InGameLogMessage_PVP.h"

FInGameLogMessage_PVP::FInGameLogMessage_PVP() {
    this->Causer = NULL;
    this->Victim = NULL;
    this->PVPEvent = EPVPEvent::None;
    this->CauseOfDeath = ECharacterDeathReason::None;
    this->TimeOnScreen = 0.00f;
}

