#include "CoverAnimStateMachineData.h"

FCoverAnimStateMachineData::FCoverAnimStateMachineData() {
    this->bIsInCover = false;
    this->bIsFiring = false;
    this->bIsReturningToIdle = false;
    this->ActiveCoverDirection = ECoverDirection::Left;
    this->ActiveCoverFirePose = NULL;
    this->ActiveCoverIdlePose = NULL;
}

