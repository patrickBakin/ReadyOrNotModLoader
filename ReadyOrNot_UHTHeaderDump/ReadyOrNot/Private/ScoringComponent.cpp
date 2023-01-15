#include "ScoringComponent.h"

int32 UScoringComponent::GetTotalScore(bool bOnlyEnabled, const bool bOnlyGiven) const {
    return 0;
}

int32 UScoringComponent::GetScore(const FString& ScoreName) const {
    return 0;
}

UScoringComponent::UScoringComponent() {
    this->bEnabled = true;
    this->ScoreGroupName = TEXT("None");
    this->ObjectiveLevel = EObjectiveLevel::SecondaryObjective;
    this->bAutoAddToScorePool = true;
}

