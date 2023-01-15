#include "WeaponData.h"

FWeaponData::FWeaponData() {
    this->ItemClass = EItemClass::IC_NoClass;
    this->Blueprint = NULL;
    this->PointsAvailable = 0.00f;
    this->CurrentSkin = NULL;
}

