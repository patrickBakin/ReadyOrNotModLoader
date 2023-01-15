#include "MaterialPenetration.h"

FMaterialPenetration::FMaterialPenetration() {
    this->bIsPenetrable = false;
    this->PenetrationDensity = 0.00f;
    this->PenetrationMultiplier = 0.00f;
    this->ArmourLevel = 0;
    this->bCanRicochet = false;
    this->RicochetChanceMultiplier = 0.00f;
    this->SpallingChance = 0.00f;
}

