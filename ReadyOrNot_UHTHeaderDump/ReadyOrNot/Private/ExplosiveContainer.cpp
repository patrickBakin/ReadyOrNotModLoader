#include "ExplosiveContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=FMODStudio -ObjectName=FMODAudioComponent -FallbackName=FMODAudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent

void AExplosiveContainer::Multicast_TriggerExplosive_Implementation() {
}

void AExplosiveContainer::Multicast_PlayExplosionEffects_Implementation() {
}

AExplosiveContainer::AExplosiveContainer() {
    this->BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
    this->FireEffectParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FireEffectParticle"));
    this->ExplosionEffectParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ExplosionEffectParticle"));
    this->FMODFireAudioComponent = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("FMODParticle"));
    this->bHideMeshAfterDetonation = true;
    this->FMODExplosionAudio = NULL;
    this->StunDamageType = NULL;
    this->ExplosionScreenShake = NULL;
    this->ExplosionInstigator = NULL;
    this->TimerUntilExplosionOnceTriggered = 3.00f;
    this->MinDamageToTrigger = 1.00f;
}

