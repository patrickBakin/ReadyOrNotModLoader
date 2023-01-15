#include "VDSimulatedParticle.h"

class AActor;
class UPrimitiveComponent;

void UVDSimulatedParticle::SetVelocity(const FVector& NewVelocity) {
}

void UVDSimulatedParticle::SetRestitutionCoefficient(float NewRestitutionCoefficient) {
}

void UVDSimulatedParticle::SetRadius(float NewRadius) {
}

void UVDSimulatedParticle::SetMass(float NewMass) {
}

void UVDSimulatedParticle::SetLocation(const FVector& NewLocation) {
}

void UVDSimulatedParticle::SetIsWindOccluded(bool IsOccluded) {
}

void UVDSimulatedParticle::SetIsRigidBodyCollisionEnabled(bool IsEnabled) {
}

void UVDSimulatedParticle::SetIsParticleCollisionEnabled(bool IsEnabled) {
}

void UVDSimulatedParticle::SetIsFree(bool IsFree) {
}

void UVDSimulatedParticle::SetFrictionCoefficient(float NewFrictionCoefficient) {
}

void UVDSimulatedParticle::SetDragCoefficient(float NewDragCoefficient) {
}

FVector UVDSimulatedParticle::GetVelocity() const {
    return FVector{};
}

float UVDSimulatedParticle::GetRestitutionCoefficient() const {
    return 0.0f;
}

float UVDSimulatedParticle::GetRadius() const {
    return 0.0f;
}

float UVDSimulatedParticle::GetMass() const {
    return 0.0f;
}

FVector UVDSimulatedParticle::GetLocation() const {
    return FVector{};
}

bool UVDSimulatedParticle::GetIsWindOccluded() const {
    return false;
}

bool UVDSimulatedParticle::GetIsRigidBodyCollisionEnabled() const {
    return false;
}

bool UVDSimulatedParticle::GetIsParticleCollisionEnabled() const {
    return false;
}

bool UVDSimulatedParticle::GetIsFree() const {
    return false;
}

float UVDSimulatedParticle::GetFrictionCoefficient() const {
    return 0.0f;
}

float UVDSimulatedParticle::GetDragCoefficient() const {
    return 0.0f;
}

bool UVDSimulatedParticle::GetAttachment(FVDParticleAttachment& OutAttachment) {
    return false;
}

void UVDSimulatedParticle::Detach() {
}

void UVDSimulatedParticle::CopyAttachment(const FVDParticleAttachment& NewAttachment, bool UseCurrentMass) {
}

bool UVDSimulatedParticle::AttachToLocation(FVector Location, bool IsRelative) {
    return false;
}

bool UVDSimulatedParticle::AttachToComponent(UPrimitiveComponent* Component, FVector Location, bool SimulateTension, FName Socket) {
    return false;
}

bool UVDSimulatedParticle::AttachToActor(AActor* Actor, FVector Location, bool SimulateTension, FName Socket) {
    return false;
}

void UVDSimulatedParticle::AddForce(const FVector& Force) {
}

UVDSimulatedParticle::UVDSimulatedParticle() {
    this->IsAttached = false;
}

