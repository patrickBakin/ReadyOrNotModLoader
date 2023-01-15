#include "BaseCombatMoveActivity.h"

class UBaseActivity;


bool UBaseCombatMoveActivity::HasLOSToEnemy() const {
    return false;
}

bool UBaseCombatMoveActivity::HasAnyOtherCombatMoveGotLocation(const FVector& TestLocation) const {
    return false;
}

UBaseActivity* UBaseCombatMoveActivity::GetInterruptActivity() const {
    return NULL;
}

void UBaseCombatMoveActivity::GenerateNavigablePoints(const FVector& GenAroundLoc, const FNavGenerationParameters& NavGenerationParameters, TArray<FVector>& OutLocations) {
}

void UBaseCombatMoveActivity::FinishCombatMove(bool bSuccess) {
}

UBaseCombatMoveActivity::UBaseCombatMoveActivity() {
    this->OwningCombatActivity = NULL;
    this->InterruptActivity = NULL;
}

