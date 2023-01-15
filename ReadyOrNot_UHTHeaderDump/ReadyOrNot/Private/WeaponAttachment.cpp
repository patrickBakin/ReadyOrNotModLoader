#include "WeaponAttachment.h"

void UWeaponAttachment::PlayToggleSound() {
}

void UWeaponAttachment::ApplyWetness(float Wetness, float RainAmount) {
}

UWeaponAttachment::UWeaponAttachment() {
    this->WeaponAttachmentType = EWeaponAttachmentType::Null;
    this->UnderbarrelAnimationType = EWeaponUnderbarrelAnimationType::WU_None;
    this->bNeedNotAttach = false;
    this->bNullAttachmentOnly = false;
    this->PointCost = 1;
    this->AttachmentWeight = 0.00f;
    this->VerticalRecoilMultiplier = 1.00f;
    this->HorizontalRecoilMultiplier = 1.00f;
    this->SpreadMultiplier = 1.00f;
    this->DeadzoneMultiplier = 1.00f;
    this->MuzzleVelocityMultiplier = 1.00f;
    this->LowReadyLengthMultiplier = 1.00f;
    this->bShouldSupressWeapon = false;
    this->bHidesMuzzleFlash = false;
    this->bOverrideMuzzleFlash = false;
    this->MuzzleFlashParticle = NULL;
    this->MuzzleSmokeParticle = NULL;
    this->MagazineAmmoIncrease = 0;
    this->CameraBobAdditionFactor = 0.00f;
    this->ADS_Speed_Multiplier = 1.00f;
}

