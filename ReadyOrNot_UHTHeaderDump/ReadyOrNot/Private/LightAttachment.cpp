#include "LightAttachment.h"
#include "Net/UnrealNetwork.h"

void ULightAttachment::ToggleLight(bool bOn) {
}

void ULightAttachment::OnRep_On() {
}

bool ULightAttachment::IsLightOn() {
    return false;
}

void ULightAttachment::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ULightAttachment, bRepOn);
}

ULightAttachment::ULightAttachment() {
    this->SpotLightComponent = NULL;
    this->PointLightComponent = NULL;
    this->bRepOn = false;
    this->Intensity = 400000.00f;
    this->BouncedIntensity = 1000.00f;
    this->Attenuation = 3500.00f;
    this->InnerConeAngle = 10.00f;
    this->OuterConeAngle = 30.00f;
    this->LightFunctionMaterial = NULL;
    this->LensFlareClass = NULL;
    this->SpawnedLensFlare = NULL;
    this->NumOfFlashLightTrackingPoints = 4;
    this->PrimaryTrackingPoint = NULL;
    this->bLightOffDueToNotBeingEquipped = false;
}

