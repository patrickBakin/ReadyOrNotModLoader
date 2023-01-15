#include "VDParticleAttachment.h"

FVDParticleAttachment::FVDParticleAttachment() {
    this->ParticleIndex = 0;
    this->AttachingToAnotherParticle = false;
    this->SimulateTensionForces = false;
    this->IsRelative = false;
}

