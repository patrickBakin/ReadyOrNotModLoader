#include "PickupWeaponActor.h"

APickupWeaponActor::APickupWeaponActor() {
    this->Weapon = NULL;
    this->bKillOnPickup = false;
    this->bSecondaryWeapon = false;
    this->bModifyLoadout = false;
    this->ScopeAttachment = NULL;
    this->MuzzleAttachment = NULL;
    this->UnderbarrelAttachment = NULL;
    this->OverbarrelAttachment = NULL;
}

