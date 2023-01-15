#include "VDSimulatedObject.h"

class UVDSimulatedParticle;
class UVDParticleSpringConstraint;
class UVDMeshVolumeConstraint;

void UVDSimulatedObject::SetSkipRelativeVelocityCheckDuringCollision(bool Skip) {
}

void UVDSimulatedObject::SetObjectType(TEnumAsByte<ECollisionChannel> ObjectType) {
}

void UVDSimulatedObject::SetMinimumConstraintSatisfactionDistance(float MinDistance) {
}

void UVDSimulatedObject::SetGravityScale(float Scale) {
}

void UVDSimulatedObject::SetCollisionResponseToObjectType(TEnumAsByte<ECollisionChannel> ObjectType, TEnumAsByte<ECollisionResponse> Response) {
}

void UVDSimulatedObject::SetCollisionEnabled(bool Enabled) {
}

void UVDSimulatedObject::SetCollisionChannel(TEnumAsByte<ECollisionChannel> Channel) {
}

void UVDSimulatedObject::SetAffectiveWindVector(FVector NewWindVector) {
}

TArray<UVDParticleSpringConstraint*> UVDSimulatedObject::GetSpringConstraints() {
    return TArray<UVDParticleSpringConstraint*>();
}

bool UVDSimulatedObject::GetSkipRelativeVelocityCheckDuringCollision() const {
    return false;
}

TArray<UVDSimulatedParticle*> UVDSimulatedObject::GetParticles() {
    return TArray<UVDSimulatedParticle*>();
}

float UVDSimulatedObject::GetMinimumConstraintSatisfactionDistance() const {
    return 0.0f;
}

float UVDSimulatedObject::GetGravityScale() const {
    return 0.0f;
}

FVDCollisionSettings UVDSimulatedObject::GetCollisionSettings() const {
    return FVDCollisionSettings{};
}

bool UVDSimulatedObject::GetCollisionEnabled() const {
    return false;
}

FVector UVDSimulatedObject::GetAffectiveWindVector() const {
    return FVector{};
}

void UVDSimulatedObject::DestroyVolumeConstraint(UVDMeshVolumeConstraint* Constraint) {
}

void UVDSimulatedObject::DestroyParticle(UVDSimulatedParticle* Particle) {
}

void UVDSimulatedObject::DestroyConstraint(UVDParticleSpringConstraint* Constraint) {
}

UVDMeshVolumeConstraint* UVDSimulatedObject::CreateVolumeConstraint(const TArray<int32> IndexList, float Alpha, float RestVolume) {
    return NULL;
}

UVDParticleSpringConstraint* UVDSimulatedObject::CreateSpringConstraint(UVDSimulatedParticle* Particle1, UVDSimulatedParticle* Particle2, float RestDistance, float Stiffness) {
    return NULL;
}

UVDSimulatedParticle* UVDSimulatedObject::CreateParticle(const FVDParticleInfo& ParticleInfo) {
    return NULL;
}

UVDSimulatedObject::UVDSimulatedObject() {
}

