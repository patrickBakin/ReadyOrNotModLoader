#include "ExplosiveVest.h"

void AExplosiveVest::Multicast_PlayPreExplosionEffects_Implementation() {
}

void AExplosiveVest::Multicast_PlayExplosionEffects_Implementation() {
}

void AExplosiveVest::ExplodeVest() {
}

AExplosiveVest::AExplosiveVest() {
    this->bShouldExplodeOnHit = false;
    this->bShouldExplodeOnDeath = false;
    this->ExplosionDamageType = NULL;
    this->MaxDamageOnDetonation = 200.00f;
    this->MinDamageOnDetonation = 50.00f;
    this->DamageInnerRadius = 0.00f;
    this->DamageOuterRadius = 1000.00f;
    this->ExplosionEffectDelay = 2.00f;
    this->ExplosionEffectRandomDelay = 0.10f;
    this->ExplosionDamageDelay = 0.00f;
    this->DetonationMontage = TEXT("tp_spct_detonatevest");
    this->ExplosiveVestSocket = TEXT("Bomb_Vest_Socket");
    this->ExplosionParticle = NULL;
    this->ExplosionEvent = NULL;
    this->DetonationEvent = NULL;
    this->ExplosionScreenShake = NULL;
    this->ExplosionScreenShakeRadius = 1000.00f;
}

