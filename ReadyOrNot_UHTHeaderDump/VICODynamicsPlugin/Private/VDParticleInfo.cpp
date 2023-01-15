#include "VDParticleInfo.h"

FVDParticleInfo::FVDParticleInfo() {
    this->IsFree = false;
    this->IsRigidBodyCollisionEnabled = false;
    this->IsParticleCollisionEnabled = false;
    this->Radius = 0.00f;
    this->Mass = 0.00f;
    this->DragCoefficient = 0.00f;
}

