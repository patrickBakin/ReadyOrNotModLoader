#include "ImpactFx.h"

FImpactFx::FImpactFx() {
    this->ParticleFx = NULL;
    this->SoundFx = NULL;
    this->Decal = NULL;
    this->bUseRandomFrame = false;
    this->FrameMax = 0;
    this->DecalMesh = NULL;
    this->PaintMaterialTexture = NULL;
}

