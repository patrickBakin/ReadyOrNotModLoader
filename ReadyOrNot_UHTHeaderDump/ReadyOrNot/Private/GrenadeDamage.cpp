#include "GrenadeDamage.h"

FGrenadeDamage::FGrenadeDamage() {
    this->DamageType = NULL;
    this->MaxDamageOnDetonation = 0.00f;
    this->MinDamageOnDetonation = 0.00f;
    this->DamageInnerRadius = 0.00f;
    this->DamageOuterRadius = 0.00f;
    this->bUseSecondTrace = false;
    this->SecondTraceStartDistance = 0.00f;
    this->SecondTraceRadiusFactor = 0.00f;
}

