#include "LaserAttachment.h"
#include "Net/UnrealNetwork.h"

void ULaserAttachment::ToggleLaser(bool bOn) {
}

void ULaserAttachment::Server_SetBeamLocationAndNormal_Implementation(FVector Location, FVector Normal, float Distance) {
}
bool ULaserAttachment::Server_SetBeamLocationAndNormal_Validate(FVector Location, FVector Normal, float Distance) {
    return true;
}

void ULaserAttachment::OnRep_On() {
}

bool ULaserAttachment::IsLaserOn() {
    return false;
}

void ULaserAttachment::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ULaserAttachment, bRepOn);
}

ULaserAttachment::ULaserAttachment() {
    this->LaserParticleComponent = NULL;
    this->LaserBeamEndComponent = NULL;
    this->LaserParticle = NULL;
    this->LaserBeamEnd = NULL;
    this->BeamDistance = 0.00f;
    this->bRepOn = false;
    this->LensFlareClass = NULL;
    this->SpawnedLensFlare = NULL;
    this->bRequireNVG = true;
    this->bLaserOffDueToNotBeingEquipped = false;
}

