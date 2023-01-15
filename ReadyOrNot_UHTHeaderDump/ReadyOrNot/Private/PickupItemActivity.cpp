#include "PickupItemActivity.h"

class ABaseItem;

void UPickupItemActivity::SetPickupItem(ABaseItem* NewPickupItem) {
}

void UPickupItemActivity::OnPickupItemComplete() {
}

UPickupItemActivity::UPickupItemActivity() {
    this->SearchRadius = 1000.00f;
    this->WeaponCacheActor = NULL;
    this->PickupItem = NULL;
}

