#include "RosterScenarioSpawner.h"

ARosterScenarioSpawner::ARosterScenarioSpawner() {
    this->MaxPatrolRadiusDistance = 2500.00f;
    this->TimeBetweenTargetingCivilians = 20.00f;
    this->TimeUntilBombExplodes = 600.00f;
    this->SuspectExplosiveVestRowName = TEXT("ExplosiveVest");
    this->CivilianExplosiveVestRowName = TEXT("CivExplosiveVest");
    this->bSpawnMaxSuspects = false;
}

