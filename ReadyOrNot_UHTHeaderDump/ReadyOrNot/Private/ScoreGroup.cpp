#include "ScoreGroup.h"

FScoreGroup::FScoreGroup() {
    this->ObjectiveLevel = EObjectiveLevel::PrimaryObjective;
    this->bRequiredToClearMission = false;
    this->bRequiredToSoftClearMission = false;
    this->OrderPriority = 0;
}

