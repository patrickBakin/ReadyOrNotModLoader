#include "DisarmStandaloneTrapActivity.h"

class AReadyOrNotCharacter;
class ATrapActor;

void UDisarmStandaloneTrapActivity::OnTrapTriggered(ATrapActor* Trap, AReadyOrNotCharacter* TriggeredBy) {
}

void UDisarmStandaloneTrapActivity::OnTrapDisarmed() {
}

void UDisarmStandaloneTrapActivity::EnterGetInPositionStage() {
}

void UDisarmStandaloneTrapActivity::EnterDisarmStage() {
}

bool UDisarmStandaloneTrapActivity::CanPerformDisarm() const {
    return false;
}

UDisarmStandaloneTrapActivity::UDisarmStandaloneTrapActivity() {
    this->TrapToDisarm = NULL;
}

