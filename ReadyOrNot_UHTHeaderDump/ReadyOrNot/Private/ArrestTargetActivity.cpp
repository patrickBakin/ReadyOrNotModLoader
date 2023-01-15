#include "ArrestTargetActivity.h"

class AReadyOrNotCharacter;

void UArrestTargetActivity::TickMoveToStage(float DeltaTime, float Uptime) {
}

void UArrestTargetActivity::TickArrestStage(float DeltaTime, float Uptime) {
}

void UArrestTargetActivity::OnArresterKilled(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* KilledCharacter) {
}

void UArrestTargetActivity::EnterMoveToStage() {
}

void UArrestTargetActivity::EnterArrestStage() {
}

bool UArrestTargetActivity::CanArrest() const {
    return false;
}

UArrestTargetActivity::UArrestTargetActivity() {
    this->ArrestTarget = NULL;
    this->ArrestInteraction = NULL;
}

