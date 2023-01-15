#include "ArmourMaterial.h"

UArmourMaterial::UArmourMaterial() {
    this->DamageReduction = 1.00f;
    this->MinDamageReduction = 1.00f;
    this->bDurabilityEnabled = false;
    this->Durability = 0.00f;
    this->ArmourLevel = 0;
    this->SpallingChance = 0.00f;
    this->MovementSpeedModifier = 0.00f;
    this->MovementAccelerationModifier = -0.05f;
    this->HitParticle = NULL;
}

