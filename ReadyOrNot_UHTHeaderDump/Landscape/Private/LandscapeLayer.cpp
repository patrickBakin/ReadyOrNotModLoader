#include "LandscapeLayer.h"

FLandscapeLayer::FLandscapeLayer() {
    this->bVisible = false;
    this->Blocked = false;
    this->HeightmapAlpha = 0.00f;
    this->WeightmapAlpha = 0.00f;
    this->BlendMode = LSBM_AdditiveBlend;
}

