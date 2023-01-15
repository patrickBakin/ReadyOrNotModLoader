#include "LimbHealthData.h"

FLimbHealthData::FLimbHealthData() {
    this->Health = 0.00f;
    this->MaxHealth = 0.00f;
    this->MaxHealthLimit = 0.00f;
    this->LowHealthThreshold = 0.00f;
    this->LimbDamageMultiplier = 0.00f;
    this->MaxTickets = 0;
    this->Tickets = 0;
    this->MaxLimbHealthHalving = 0;
    this->OriginalMaxHealth = 0.00f;
    this->LowHealth = 0.00f;
    this->PreviousHealth = 0.00f;
}

