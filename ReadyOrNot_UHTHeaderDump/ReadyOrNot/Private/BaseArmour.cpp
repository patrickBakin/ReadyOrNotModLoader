#include "BaseArmour.h"

bool ABaseArmour::HasRemainingProtection() const {
    return false;
}

float ABaseArmour::GetDurabilityPercentage() const {
    return 0.0f;
}

ABaseArmour::ABaseArmour() {
    this->bIsHeavy = false;
    this->ScaleLensFlare = 1.00f;
    this->ArmourHitParticle = NULL;
    this->ArmourHitSound = NULL;
    this->ArmourHitSoundFirstPerson = NULL;
    this->PaperdollTexture = NULL;
    this->PaperdollTexture_Crouch = NULL;
    this->PaperdollTexture_Carry = NULL;
    this->PaperdollTexture_Carry_Crouch = NULL;
    this->InterceptShakeFront = NULL;
    this->InterceptShakeBack = NULL;
    this->InterceptShakeLeft = NULL;
    this->InterceptShakeRight = NULL;
}

