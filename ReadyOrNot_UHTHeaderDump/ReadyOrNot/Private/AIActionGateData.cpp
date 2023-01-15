#include "AIActionGateData.h"

FAIActionGateData::FAIActionGateData() {
    this->Type = NULL;
    this->bNot = false;
    this->bUseCooldown = false;
    this->Cooldown = 0.00f;
    this->bLockGateOnCooldown = false;
    this->bContributeToFailCount = false;
}

