#include "SavedWeaponAttachmentData.h"

FSavedWeaponAttachmentData::FSavedWeaponAttachmentData() {
    this->bHasSavedData = false;
    this->ScopeAttachment = NULL;
    this->MuzzleAttachment = NULL;
    this->UnderbarrelAttachment = NULL;
    this->OverbarrelAttachment = NULL;
    this->StockAttachment = NULL;
    this->GripAttachment = NULL;
    this->IlluminatorAttachment = NULL;
    this->AmmunitionAttachment = NULL;
    this->Skin = NULL;
    this->AmmoCount = 0;
}

