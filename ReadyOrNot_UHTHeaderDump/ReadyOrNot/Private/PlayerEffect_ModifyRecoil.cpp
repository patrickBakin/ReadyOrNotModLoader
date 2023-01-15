#include "PlayerEffect_ModifyRecoil.h"

UPlayerEffect_ModifyRecoil::UPlayerEffect_ModifyRecoil() {
    this->ModificationOption = ERecoilModifierOption::RMO_ModifyRecoil;
    this->WeaponFilter.AddDefaulted(5);
    this->RecoilFireStrength = 0.50f;
    this->RecoilFireStrengthFirst = 3.00f;
    this->RecoilDampStrength = 7.50f;
    this->RecoilAngleStrength = 0.40f;
    this->RecoilRandomness = 0.10f;
    this->RecoilFireADSModifier = 1.00f;
    this->RecoilBuildupADSModifier = 1.00f;
    this->RecoilAngleADSModifier = 1.00f;
    this->RecoilBuildupDampStrength = 15.00f;
    this->bApplySpecific = false;
}

