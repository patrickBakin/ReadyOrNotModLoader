#include "HealingData.h"

FHealingData::FHealingData() {
    this->CurrentHealth = 0.00f;
    this->MinHealth = 0.00f;
    this->MaxHealth = 0.00f;
    this->HealScreen = EMedicalHealScreen::MHS_Healer;
}

