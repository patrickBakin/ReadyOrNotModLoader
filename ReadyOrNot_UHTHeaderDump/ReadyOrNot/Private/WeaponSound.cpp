#include "WeaponSound.h"

UWeaponSound::UWeaponSound() {
    this->bPlayFMODFiringAudio = false;
    this->FMODGunShot1P = NULL;
    this->FMODGunShot3P = NULL;
    this->MagCheck_FullSeq = NULL;
    this->QuickReload_FullSeq = NULL;
    this->QuickReloadEmpty_FullSeq = NULL;
    this->Reload_FullSeq = NULL;
    this->ReloadEmpty_FullSeq = NULL;
    this->MagIn = NULL;
    this->MagOut = NULL;
    this->MagInQuick = NULL;
    this->MagOutQuick = NULL;
    this->MagDrop = NULL;
    this->MagDropQuick = NULL;
    this->WeaponDrop = NULL;
    this->BoltClose = NULL;
    this->BoltCloseQuick = NULL;
    this->BoltOpen = NULL;
    this->BoltOpenQuick = NULL;
    this->OnADSSound = NULL;
    this->OnEndADSSound = NULL;
    this->NightvisionOn = NULL;
    this->NightvisionOff = NULL;
    this->Holster = NULL;
    this->Draw = NULL;
    this->DrawFirst = NULL;
    this->SelectSemi = NULL;
    this->SelectBurst = NULL;
    this->SelectAuto = NULL;
    this->SelectSafe = NULL;
    this->DryFire = NULL;
    this->FireLast = NULL;
    this->bPlayBulletWhizz = false;
    this->BulletWhizzFar = NULL;
    this->HitMarker = NULL;
    this->HeadshotMarker = NULL;
    this->KillMarker = NULL;
    this->PhysicsImpact = NULL;
    this->PlayerImpact = NULL;
    this->PhysicsImpactMinimumVelocity = 50.00f;
    this->MovementLayer = NULL;
}

