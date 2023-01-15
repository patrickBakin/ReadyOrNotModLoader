#include "HardCoverCombatMove.h"

class UBaseActivity;
class ACyberneticController;
class AReadyOrNotCharacter;

void UHardCoverCombatMove::TrackNewEnemy(AReadyOrNotCharacter* NewTrackedEnemy) {
}

void UHardCoverCombatMove::OnTakeCoverAtLandmarkActivityFinished(UBaseActivity* Activity, ACyberneticController* Controller) {
}

void UHardCoverCombatMove::OnTakeCoverActivityFinished(UBaseActivity* Activity, ACyberneticController* Controller) {
}

UHardCoverCombatMove::UHardCoverCombatMove() {
    this->TakeCoverActivity = NULL;
    this->TakeCoverAtLandmarkActivity = NULL;
    this->LastTrackedEnemy = NULL;
}

