#include "RenderMSDF.h"

URenderMSDF::URenderMSDF() {
    this->EffectiveTexture = NULL;
    this->SamplerType = SAMPLERTYPE_Color;
    this->ConstCoordinateIndex = 0;
    this->Texture = NULL;
}

