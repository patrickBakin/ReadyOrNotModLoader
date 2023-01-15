#include "AIAction.h"

class AAIController;
class ACyberneticCharacter;

bool UAIAction::WantsAbort() const {
    return false;
}


bool UAIAction::ShouldPerformAction_Implementation() const {
    return false;
}

void UAIAction::RequestMove(FVector Location) {
}



void UAIAction::OnPathFound(int32 PathId, ERonNavigationQueryResult Result) {
}


void UAIAction::OnMoveComplete(AAIController* Controller, int32 RequestID) {
}




ACyberneticCharacter* UAIAction::GetCharacter() const {
    return NULL;
}

int32 UAIAction::GetActionRunCount() const {
    return 0;
}

FAIActionData UAIAction::GetActionData() const {
    return FAIActionData{};
}



void UAIAction::AbortAction() {
}

UAIAction::UAIAction() {
    this->OwningController = NULL;
    this->LastMoveRequestPathID = 0;
    this->LastMoveRequestMoveID = 0;
}

