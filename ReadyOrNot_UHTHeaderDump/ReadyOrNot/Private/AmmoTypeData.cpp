#include "AmmoTypeData.h"

FAmmoTypeData::FAmmoTypeData() {
    this->Damage = 0.00f;
    this->ProjectileCount = 0;
    this->bIgnoresArmour = false;
    this->DurabilityDamage = 0.00f;
    this->PenetrationLevel = 0;
    this->PenetrationDistance = 0.00f;
    this->RicochetChance = 0.00f;
    this->SpallingDamage = 0.00f;
    this->SpallingRadius = 0.00f;
    this->DismembermentDamage = 0.00f;
    this->ArteryHitChance = 0.00f;
    this->HitsChance = 0.00f;
    this->ArmouredHitsChance = 0.00f;
    this->WoundSize = 0.00f;
    this->bIsUsableByPlayer = false;
    this->LoadoutIcon = NULL;
    this->SmallIcon = NULL;
    this->HeadDamageMultiplier = 0.00f;
    this->UpperBodyDamageMultiplier = 0.00f;
    this->LowerBodyDamageMultiplier = 0.00f;
    this->ArmDamageMultiplier = 0.00f;
    this->HandDamageMultiplier = 0.00f;
    this->LegDamageMultiplier = 0.00f;
    this->FootDamageMultiplier = 0.00f;
    this->DefaultRagdollImpulseStrength = 0.00f;
    this->HeadRagdollImpulseStrength = 0.00f;
    this->ArmRagdollImpulseStrength = 0.00f;
    this->LegRagdollImpulseStrength = 0.00f;
    this->TorsoRagdollImpulseStrength = 0.00f;
}

