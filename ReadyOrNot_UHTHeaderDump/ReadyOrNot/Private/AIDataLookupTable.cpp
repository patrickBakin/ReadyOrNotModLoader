#include "AIDataLookupTable.h"

FAIDataLookupTable::FAIDataLookupTable() {
    this->Archetype = NULL;
    this->bIsLeaderOfFaction = false;
    this->bUseRandomLoadout = false;
    this->ChanceToFireGunOnDeath = 0.00f;
    this->AIBodyArmourOverride = NULL;
    this->SpawningTeamType = ETeamType::TT_NONE;
    this->CharacterClass = NULL;
    this->bOverrideControllerClass = false;
    this->ControllerClass = NULL;
    this->bIsFemale = false;
    this->bIsChild = false;
    this->bChanceToSurrenderWithItem = false;
    this->bOverrideSurrenderWithItemChance = false;
    this->SurrenderWithItemChance = 0.00f;
    this->bUnconsciousSpawnBleedout = false;
    this->bCanEverSuicide = false;
    this->bOverrideSuicideChance = false;
    this->SuicideChance = 0.00f;
}

