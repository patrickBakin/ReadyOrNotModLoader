#include "PaperTerrainComponent.h"

void UPaperTerrainComponent::SetTerrainColor(FLinearColor NewColor) {
}

UPaperTerrainComponent::UPaperTerrainComponent() {
    this->bClosedSpline = false;
    this->bFilledSpline = true;
    this->AssociatedSpline = NULL;
    this->RandomSeed = 0;
    this->SegmentOverlapAmount = 100.00f;
    this->ReparamStepsPerSegment = 8;
    this->SpriteCollisionDomain = ESpriteCollisionMode::Use3DPhysics;
    this->CollisionThickness = 200.00f;
    this->CachedBodySetup = NULL;
}

