#include "Chemlight.h"
#include "AmmoComponent.h"

void AChemlight::SetFPMeshHidden(bool bFPMeshHidden) {
}

void AChemlight::Server_SpawnThrownChemlight_Implementation() {
}
bool AChemlight::Server_SpawnThrownChemlight_Validate() {
    return true;
}

void AChemlight::QuickThrow() {
}

void AChemlight::OnChemlightThrown() {
}

void AChemlight::NormalThrow() {
}

void AChemlight::Multicast_SpawnThrownChemlight_Implementation() {
}

bool AChemlight::IsPlayingChemlightThrowAnimations() const {
    return false;
}

int32 AChemlight::GetRemainingAmmo() const {
    return 0;
}

bool AChemlight::CanThrow() const {
    return false;
}

void AChemlight::CancelThrow() {
}

bool AChemlight::AICanThrowChemlightAtLocation(FVector Location) {
    return false;
}

AChemlight::AChemlight() {
    this->Ammo = CreateDefaultSubobject<UAmmoComponent>(TEXT("Chemlight Ammo"));
}

