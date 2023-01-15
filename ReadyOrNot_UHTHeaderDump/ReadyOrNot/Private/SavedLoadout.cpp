#include "SavedLoadout.h"

FSavedLoadout::FSavedLoadout() {
    this->Primary = NULL;
    this->PrimaryScope = NULL;
    this->PrimaryMuzzle = NULL;
    this->PrimaryUnderbarrel = NULL;
    this->PrimaryOverbarrel = NULL;
    this->PrimaryStock = NULL;
    this->PrimaryGrip = NULL;
    this->PrimaryIlluminator = NULL;
    this->PrimaryAmmunition = NULL;
    this->PrimaryAmmoSlotsCount = 0;
    this->PrimarySkin = NULL;
    this->Secondary = NULL;
    this->SecondaryScope = NULL;
    this->SecondaryMuzzle = NULL;
    this->SecondaryUnderbarrel = NULL;
    this->SecondaryOverbarrel = NULL;
    this->SecondaryStock = NULL;
    this->SecondaryGrip = NULL;
    this->SecondaryIlluminator = NULL;
    this->SecondaryAmmunition = NULL;
    this->SecondaryAmmoSlotsCount = 0;
    this->SecondarySkin = NULL;
    this->LongTactical = NULL;
    this->GrenadeSlotsCount = 0;
    this->TacticalSlotsCount = 0;
    this->Armor = NULL;
    this->Helmet = NULL;
    this->RandomGear = NULL;
    this->PlayerSkin = NULL;
    this->ArmourCoverage = EArmourCoverage::AC_None;
    this->ArmourMaterial = NULL;
}

