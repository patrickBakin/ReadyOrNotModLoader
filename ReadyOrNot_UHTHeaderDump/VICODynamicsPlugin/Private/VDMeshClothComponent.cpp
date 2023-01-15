#include "VDMeshClothComponent.h"

class UVDParticleSpringConstraint;
class UVDMeshVolumeConstraint;

UVDMeshVolumeConstraint* UVDMeshClothComponent::GetVolumeConstraint() const {
    return NULL;
}

TArray<UVDParticleSpringConstraint*> UVDMeshClothComponent::GetStretchConstraintsArray() const {
    return TArray<UVDParticleSpringConstraint*>();
}

TArray<UVDParticleSpringConstraint*> UVDMeshClothComponent::GetBendConstraintsArray() const {
    return TArray<UVDParticleSpringConstraint*>();
}

UVDMeshClothComponent::UVDMeshClothComponent() {
    this->HullMesh = NULL;
    this->StretchStiffness = 0.75f;
    this->BendStiffness = 0.50f;
    this->Mass = 10.00f;
    this->DragCoefficient = 0.47f;
    this->PreserveVolume = false;
    this->CurrentVolume = 0.00f;
    this->OverrideRestVolume = 0.00f;
    this->UseVertexColorDataForSetup = false;
    this->MaxBendConstraintDistance = 100.00f;
    this->VolumeConstraint = NULL;
}

