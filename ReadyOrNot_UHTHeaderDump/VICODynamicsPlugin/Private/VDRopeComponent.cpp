#include "VDRopeComponent.h"

void UVDRopeComponent::SetNewRestLengthStartingAtParticle(int32 ParticleIndexStart, float NewLength) {
}

void UVDRopeComponent::SetNewRestLength(float NewLength, int32 PieceIndex) {
}

void UVDRopeComponent::ResetRope() {
}

float UVDRopeComponent::GetTrueLength(int32 PieceIndex) const {
    return 0.0f;
}

TArray<FRopePiece> UVDRopeComponent::GetPieces() const {
    return TArray<FRopePiece>();
}

void UVDRopeComponent::CreateRopeGeometry_BP() {
}

void UVDRopeComponent::BreakAtSegment(int32 SegmentIndex) {
}

UVDRopeComponent::UVDRopeComponent() {
    this->StretchStiffness = 0.75f;
    this->BendStiffness = 0.50f;
    this->Mass = 11.00f;
    this->DragCoefficient = 0.47f;
    this->Length = 100.00f;
    this->Width = 10.00f;
    this->NumSegments = 10;
    this->bEnforceStrictLength = false;
    this->NumSides = 8;
    this->TileMaterial = 1.00f;
}

