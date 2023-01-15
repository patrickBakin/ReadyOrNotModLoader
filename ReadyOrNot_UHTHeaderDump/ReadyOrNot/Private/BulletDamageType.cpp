#include "BulletDamageType.h"

UBulletDamageType::UBulletDamageType() {
    this->HitVisuals = NULL;
    this->HitShake = NULL;
    this->bArmorPiercing = false;
    this->bNonLethal = false;
    this->AggressionChangeInAI = 0.00f;
    this->HeadDamageMultiplier = 3.00f;
    this->UpperBodyDamageMultiplier = 1.00f;
    this->LowerBodyDamageMultiplier = 1.00f;
    this->ArmDamageMultiplier = 0.30f;
    this->LegDamageMultiplier = 0.30f;
    this->FootDamageMultiplier = 0.10f;
}

