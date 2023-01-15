#include "VDParticleSpringConstraint.h"

class UVDSimulatedParticle;

void UVDParticleSpringConstraint::SetStiffness(const float& NewStiffness) {
}

void UVDParticleSpringConstraint::SetRestDistance(const float& NewRestDistance) {
}

bool UVDParticleSpringConstraint::IsConstraining(const UVDSimulatedParticle* Particle1, const UVDSimulatedParticle* Particle2) const {
    return false;
}

float UVDParticleSpringConstraint::GetStifffness() const {
    return 0.0f;
}

float UVDParticleSpringConstraint::GetRestDistance() const {
    return 0.0f;
}

UVDSimulatedParticle* UVDParticleSpringConstraint::GetParticle2() const {
    return NULL;
}

UVDSimulatedParticle* UVDParticleSpringConstraint::GetParticle1() const {
    return NULL;
}

UVDParticleSpringConstraint::UVDParticleSpringConstraint() {
}

