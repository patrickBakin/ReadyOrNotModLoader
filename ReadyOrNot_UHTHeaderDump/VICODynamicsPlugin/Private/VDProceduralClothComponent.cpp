#include "VDProceduralClothComponent.h"

UVDProceduralClothComponent::UVDProceduralClothComponent() {
    this->StretchStiffness = 0.75f;
    this->BendStiffness = 0.50f;
    this->Mass = 10.00f;
    this->DragCoefficient = 0.47f;
    this->Width = 100.00f;
    this->Height = 100.00f;
    this->NumParticlesWide = 10;
    this->NumParticlesHigh = 10;
    this->TileMaterialAlongWidth = 1.00f;
    this->TileMaterialAlongHeight = 1.00f;
}

