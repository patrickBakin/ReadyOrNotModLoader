#include "FootstepComponent.h"

UFootstepComponent::UFootstepComponent() {
    this->FootNames.AddDefaulted(2);
    this->bDebugFootstepTrace = false;
    this->VelocityToMinVolume = 120.00f;
    this->VelocityMaxVolume = 600.00f;
    this->bShouldRattle = true;
    this->FootstepVolumeMultiplier = 1.00f;
    this->DefaultFootstepSound = NULL;
    this->FootstepAttenuation = NULL;
    this->FootstepConcurency = NULL;
    this->bAutoFootRotation = true;
    this->bUseFootstepParticles = false;
    this->bUseFootstepSounds = true;
    this->FootstepTraceLength = 2.00f;
    this->FootstepThresholdTraceLength = 4.00f;
    this->bFootTraceComplex = false;
    this->FootstepMinCycleInterval = 0.25f;
    this->FootstepTraceLengthThreshold = 175.00f;
    this->FootstepParticleScale = 0.50f;
    this->FootstepSoundComponent = NULL;
}

