#include "DeployableBag.h"

void ADeployableBag::Server_StartBagPlacement_Implementation(FHitResult TraceHit) {
}
bool ADeployableBag::Server_StartBagPlacement_Validate(FHitResult TraceHit) {
    return true;
}


ADeployableBag::ADeployableBag() {
    this->PlacedBagClass = NULL;
    this->MaxPlacementDistance = 200.00f;
}

