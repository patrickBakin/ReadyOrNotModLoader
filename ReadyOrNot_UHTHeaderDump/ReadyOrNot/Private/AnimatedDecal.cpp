#include "AnimatedDecal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DecalComponent -FallbackName=DecalComponent


float AAnimatedDecal::GetRuntimeFloatCurveValue(const FRuntimeFloatCurve& Curve, float Time) {
    return 0.0f;
}

AAnimatedDecal::AAnimatedDecal() {
    this->Decal = CreateDefaultSubobject<UDecalComponent>(TEXT("Decal"));
    this->AnimationTimescale = 0.25f;
}

