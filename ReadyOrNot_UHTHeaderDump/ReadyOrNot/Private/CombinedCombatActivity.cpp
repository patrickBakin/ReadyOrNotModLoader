#include "CombinedCombatActivity.h"

void UCombinedCombatActivity::OnExitedSurrender(ESurrenderExitType ExitType) {
}

void UCombinedCombatActivity::GoToState(const ECombatState& NewCombatState) {
}

UCombinedCombatActivity::UCombinedCombatActivity() {
    this->CombatState = ECombatState::CS_Unaware;
    this->LastTrackedEnemyInDangerousState = NULL;
    this->TargetedCivilian = NULL;
    this->HesitateMontage = NULL;
}

