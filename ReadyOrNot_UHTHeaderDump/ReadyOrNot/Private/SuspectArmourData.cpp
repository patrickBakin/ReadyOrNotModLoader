#include "SuspectArmourData.h"

FSuspectArmourData::FSuspectArmourData() {
    this->Mesh = NULL;
    this->bIsHelmet = false;
    this->ArmourLevel = 0;
    this->Durability = 0.00f;
    this->DamageMultiplier = 0.00f;
    this->SpallingChance = 0.00f;
    this->MovementSpeedMultiplier = 0.00f;
    this->MovementAccelerationMultiplier = 0.00f;
    this->HitParticleEffect = NULL;
    this->BlockedSoundEvent = NULL;
    this->PenetratedSoundEvent = NULL;
    this->Footsteps = NULL;
}

