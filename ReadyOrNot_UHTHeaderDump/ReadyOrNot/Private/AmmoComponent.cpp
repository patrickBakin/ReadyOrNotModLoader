#include "AmmoComponent.h"

float UAmmoComponent::GetAmmoUsagePerSecond() const {
    return 0.0f;
}

UAmmoComponent::UAmmoComponent() {
    this->AmmoUsagePerSecond = 10.00f;
}

