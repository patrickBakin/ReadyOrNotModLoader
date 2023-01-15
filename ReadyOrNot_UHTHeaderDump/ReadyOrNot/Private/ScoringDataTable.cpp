#include "ScoringDataTable.h"

FScoringDataTable::FScoringDataTable() {
    this->ObjectiveLevel = EObjectiveLevel::PrimaryObjective;
    this->bRequiredToClearMission = false;
    this->bRequiredToSoftClearMission = false;
    this->OrderPriority = 0;
}

