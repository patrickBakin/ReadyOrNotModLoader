#include "TargetData.h"

FTargetData::FTargetData() {
    this->Target = NULL;
    this->TimeSinceLastSeenTarget = 0.00f;
    this->bForceCanEngageAsSwat = false;
}

