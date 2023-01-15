#include "ThrownChemlight.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PointLightComponent -FallbackName=PointLightComponent

void AThrownChemlight::UpdateLightSourcePos() {
}

AThrownChemlight::AThrownChemlight() {
    this->LightSource = CreateDefaultSubobject<UPointLightComponent>(TEXT("LightSource"));
    this->FmodSteppedOnComponent = NULL;
    this->EmmisiveBrightness = 0.00f;
    this->ChemlightMaterial = NULL;
    this->Chemlight_ActivatedInst = NULL;
    this->InitialGlowSpeed = 2.00f;
    this->GlowStartDieTime = 1800.00f;
    this->GlowLightDieSpeed = 30.00f;
    this->GlowLightTotalLife = 2000.00f;
    this->CurrentLifeTime = 0.00f;
    this->DecalMat = NULL;
}

