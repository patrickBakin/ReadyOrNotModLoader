#include "SpawnTweakables.h"

FSpawnTweakables::FSpawnTweakables() {
    this->DefaultCombatMoveActivity = NULL;
    this->bForceNoWeapon = false;
    this->ForceWeaponOverride = NULL;
    this->ForceTeamTypeOverride = ETeamType::TT_NONE;
    this->ArchetypeOverride = NULL;
    this->bForceAlwaysJustified = false;
    this->bDeactivated = false;
}

