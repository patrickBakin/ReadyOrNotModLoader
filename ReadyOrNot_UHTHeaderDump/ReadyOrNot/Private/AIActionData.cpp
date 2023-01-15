#include "AIActionData.h"

FAIActionData::FAIActionData() {
    this->ActionType = EAIAction::None;
    this->CustomActionClass = NULL;
    this->Weight = 0.00f;
    this->bDisallowWhenLastAlive = false;
    this->bDoOnce = false;
    this->bDisableActionWhenFailedToConsider = false;
    this->DisableActionConsiderCount = 0;
    this->bCommitUntilEnd = false;
    this->CommitTime = 0.00f;
    this->bCommitTimeFromConfig = false;
    this->bUseCooldown = false;
    this->Cooldown = 0.00f;
    this->bCooldownFromConfig = false;
    this->Preset = NULL;
}

