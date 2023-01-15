#include "ImpactEffect.h"

AImpactEffect::AImpactEffect() {
    this->bPlayDefaultIfNull = false;
    this->DecalScale = 1.00f;
    this->DecalMinSize = 2.00f;
    this->DecalMaxSize = 2.20f;
    this->ParticleScale = 1.00f;
    this->FMODSoundFx = NULL;
    this->FMODHitmarker = NULL;
    this->DecalMeshScaleMultiplier = 0.10f;
    this->bBulletGoneThroughPlayer = false;
    this->bArmorImpact = false;
    this->bSpawnParticle = true;
}

