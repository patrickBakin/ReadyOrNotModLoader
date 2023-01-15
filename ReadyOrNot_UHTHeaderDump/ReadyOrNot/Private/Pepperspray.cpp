#include "Pepperspray.h"
#include "Net/UnrealNetwork.h"
#include "AmmoComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent

void APepperspray::StopSpraySoundEffect_Implementation() {
}

void APepperspray::StopSprayParticleEffect_Implementation() {
}

void APepperspray::StopSpraying() {
}

void APepperspray::StartSpraying() {
}

void APepperspray::Server_StopSpraying_Implementation() {
}
bool APepperspray::Server_StopSpraying_Validate() {
    return true;
}

void APepperspray::Server_StartSpraying_Implementation() {
}
bool APepperspray::Server_StartSpraying_Validate() {
    return true;
}

void APepperspray::PlaySpraySoundEffect_Implementation(bool bRunningOutEffect) {
}

void APepperspray::PlaySprayParticleEffect_Implementation(bool bRunningOutEffect) {
}

void APepperspray::OnRep_Spraying() {
}

void APepperspray::OnLowPeppersprayAmmo(float CurrentResource) {
}

void APepperspray::OnDepletedPeppersprayAmmo() {
}

void APepperspray::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APepperspray, bSpraying);
}

APepperspray::APepperspray() {
    this->SprayParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Spray Particle Component"));
    this->AmmoComponent = CreateDefaultSubobject<UAmmoComponent>(TEXT("Ammo Component"));
    this->ParticleStart = NULL;
    this->ParticleEnd = NULL;
    this->ParticleImpact = NULL;
    this->ParticleRunningOut = NULL;
    this->ParticleSprayLoop = NULL;
    this->ParticleSprayLoopComponent = NULL;
    this->FMODSprayEvent = NULL;
    this->FMODSprayEmptyEvent = NULL;
    this->FMODImpactEvent = NULL;
    this->FMODSprayLowAmmoEvent = NULL;
    this->SprayDistance = 600.00f;
    this->bSpraying = false;
    this->DurationFrontTorso = 12.00f;
    this->DurationBackFace = 8.00f;
    this->DurationFrontFace = 16.00f;
    this->PepperSprayAbuseDebounce = 2.00f;
}

