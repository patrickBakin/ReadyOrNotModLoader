#include "SpecificWeaponRecoilMod.h"

FSpecificWeaponRecoilMod::FSpecificWeaponRecoilMod() {
    this->WeaponClass = EItemClass::IC_NoClass;
    this->RecoilFireStrength = 0.00f;
    this->RecoilFireStrengthFirst = 0.00f;
    this->RecoilDampStrength = 0.00f;
    this->RecoilAngleStrength = 0.00f;
    this->RecoilRandomness = 0.00f;
    this->RecoilFireADSModifier = 0.00f;
    this->RecoilBuildupADSModifier = 0.00f;
    this->RecoilAngleADSModifier = 0.00f;
    this->RecoilBuildupDampStrength = 0.00f;
}

