#include "ThrowItemThroughDoorActivity.h"

void UThrowItemThroughDoorActivity::OnDoorBreached() {
}

bool UThrowItemThroughDoorActivity::IsItemThrown() const {
    return false;
}

UThrowItemThroughDoorActivity::UThrowItemThroughDoorActivity() {
    this->ThrowItemClass = NULL;
    this->ThrownItem = NULL;
}

