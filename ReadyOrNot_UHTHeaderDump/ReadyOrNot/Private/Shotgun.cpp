#include "Shotgun.h"
#include "Net/UnrealNetwork.h"

void AShotgun::RefreshEntireShellRack() {
}

void AShotgun::PlayReloadLoop() {
}

void AShotgun::OnRep_ShellsReplicated() {
}

void AShotgun::LoadNextShellInRack() {
}

void AShotgun::FinishedLoadingShellFromRack() {
}

void AShotgun::CheckReloadSettings() {
}

void AShotgun::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AShotgun, Shells);
}

AShotgun::AShotgun() {
    this->bIsSawnOff = false;
    this->MaxShells = 24;
    this->MaxShellsInWeapon = 8;
    this->ShellsPerSlot = 8;
    this->ShellWeight = 0.00f;
    this->CurrentShellMesh = NULL;
    this->bTapReload = false;
    this->bBlockingFireAnimation = false;
    this->ShellsInRack = 7;
}

