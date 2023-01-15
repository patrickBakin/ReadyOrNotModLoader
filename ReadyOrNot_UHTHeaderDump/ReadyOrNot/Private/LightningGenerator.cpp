#include "LightningGenerator.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DirectionalLightComponent -FallbackName=DirectionalLightComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent

void ALightningGenerator::PlayThunder_Implementation() {
}

void ALightningGenerator::PlayLightning_Implementation() {
}

ALightningGenerator::ALightningGenerator() {
    this->SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->Thunder = CreateDefaultSubobject<UAudioComponent>(TEXT("Thunder"));
    this->ParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle"));
    this->ParticleSpawnChance = 0.00f;
    this->Lightning = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("Lightning"));
    this->ThunderDelayMin = 0.00f;
    this->ThunderDelayMax = 0.00f;
    this->LightningDelayMin = 0.00f;
    this->LightningDelayMax = 0.00f;
    this->LightningIntensityMin = 0.00f;
    this->LightningIntensityMax = 0.00f;
    this->LightningIntensityDecay = 0.00f;
    this->LightningIntensityJitterMin = 0.00f;
    this->LightningIntensityJitterMax = 0.00f;
    this->LightningIntensityJitterTimeMin = 0.00f;
    this->LightningIntensityJitterTimeMax = 0.00f;
    this->LightningJitterTimeRemaining = 0.00f;
}

