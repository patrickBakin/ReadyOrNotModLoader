#include "BaseVDComponent.h"

void UBaseVDComponent::SetUseExplicitRigidBodyCollision(bool UseExplicitCollision) {
}

void UBaseVDComponent::SetAffectedByGlobalWind(bool IsAffected) {
}


int32 UBaseVDComponent::GetTensionConstraintCount() const {
    return 0;
}

TArray<FVDParticleInfo> UBaseVDComponent::GetParticleBuildInfo() const {
    return TArray<FVDParticleInfo>();
}

FVector UBaseVDComponent::GetLastAppliedForceFromTensionConstraint(int32 TensionConstraintIndex) const {
    return FVector{};
}

void UBaseVDComponent::AttachToOverlappingRigidBodies() {
}

UBaseVDComponent::UBaseVDComponent() {
    this->SimulationInstance = NULL;
    this->VDSimObject = NULL;
    this->FrictionCoefficient = 1.00f;
    this->RestitutionCoefficient = 0.25f;
    this->ParticleRadius = 5.00f;
    this->AttachToRigids = true;
    this->AttachToParticles = false;
    this->AttachToParticlesConstraintStiffness = 1.00f;
    this->EndOffset = 100.00f;
    this->DetectionRadiusInflationFactor = 2.00f;
    this->CreateTensionConstraintsForSimulatingRigids = false;
    this->bSnapToSimulatingAttachment = false;
    this->ManuallyAttachParticles = false;
    this->TensionForce = 100.00f;
    this->TensionDampening = 1.00f;
    this->AdjustOtherParticleLocationsBasedOnAttachments = true;
    this->AffectedByGlobalWind = false;
    this->UseExplicitRigidBodyCollision = false;
    this->WindResistance = 30.00f;
    this->CheckForWindOccluders = false;
    this->MaxWindOccluderDistance = 1000.00f;
    this->ShowParticles = false;
    this->GravityScale = 1.00f;
    this->MinConstraintDistance = 0.01f;
    this->SimulateOnlyWhenRendered = false;
    this->SimulationToggleThreshold = 0.10f;
    this->EnableParticleToParticleCollisions = false;
    this->ConsiderInnerCollisions = false;
    this->SkipRelativeVelocityCheckDuringRigidBodyCollisions = false;
    this->bNotifyOnVDCollision = false;
    this->bUseLocationCache = false;
    this->bApplyCachedStartLocationBeforeAttachToRigids = false;
}

