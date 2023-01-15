#include "SWATArmour.h"
#include "Net/UnrealNetwork.h"

void ASWATArmour::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASWATArmour, ArmourCoverage);
    DOREPLIFETIME(ASWATArmour, ArmourMaterial);
    DOREPLIFETIME(ASWATArmour, Durabilities);
}

ASWATArmour::ASWATArmour() {
    this->MaxArmourCoverage = EArmourCoverage::AC_None;
    this->CarrierMaterial = NULL;
    this->TotalSlots = 10;
    this->DefaultPrimaryAmmoSlots = 5;
    this->DefaultSecondaryAmmoSlots = 2;
    this->DefaultGrenadeSlots = 2;
    this->DefaultTacticalDeviceSlots = 1;
    this->ArmourCoverage = EArmourCoverage::AC_None;
    this->ArmourMaterial = NULL;
    this->Durabilities.AddDefaulted(3);
}

