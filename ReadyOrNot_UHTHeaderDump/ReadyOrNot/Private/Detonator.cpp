#include "Detonator.h"

void ADetonator::Tick(float DeltaSeconds) {
}

void ADetonator::Server_DetonateC2_Implementation() {
}
bool ADetonator::Server_DetonateC2_Validate() {
    return true;
}

ADetonator::ADetonator() {
    this->PlacedChargesCount = 0;
    this->MaxDetonationDistance = 2000.00f;
    this->DetonatorLightDynamicMaterial = NULL;
}

