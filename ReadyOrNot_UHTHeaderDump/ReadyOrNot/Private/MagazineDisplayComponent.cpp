#include "MagazineDisplayComponent.h"

UMagazineDisplayComponent::UMagazineDisplayComponent() {
    this->FoundWeapon = NULL;
    this->ItemCategory = EItemCategory::IC_Primary;
    this->MinimumMagazineCountToDisplay = 1;
}

