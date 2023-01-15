#include "ScriptedFireAt.h"

FScriptedFireAt::FScriptedFireAt() {
    this->FireAtActor = NULL;
    this->TimeRemaining = 0.00f;
    this->bOverrideTargetedEnemy = false;
    this->AccuracyPenaltyMultiplier = 0.00f;
}

