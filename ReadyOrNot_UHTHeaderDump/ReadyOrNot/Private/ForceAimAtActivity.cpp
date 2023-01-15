#include "ForceAimAtActivity.h"

UForceAimAtActivity::UForceAimAtActivity() {
    this->bForceNoShoot = false;
    this->bForceAimAt = false;
    this->bForceNoMove = false;
    this->ForcedTarget = NULL;
    this->bCanFinishActivity = false;
}

