#include "PairedInteractionDriver.h"

class ABaseItem;

void APairedInteractionDriver::OnSlaveInteractionFinished() {
}

void APairedInteractionDriver::OnInteractionFinished() {
}

void APairedInteractionDriver::OnEquippedItemHolstered(ABaseItem* Item) {
}

void APairedInteractionDriver::OnDriverInteractionFinished() {
}

APairedInteractionDriver::APairedInteractionDriver() {
    this->InteractionData = NULL;
    this->Driver = NULL;
    this->Slave = NULL;
    this->OptionalItem = NULL;
}

