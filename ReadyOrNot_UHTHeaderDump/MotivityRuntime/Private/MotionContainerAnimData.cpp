#include "MotionContainerAnimData.h"

FMotionContainerAnimData::FMotionContainerAnimData() {
    this->AnimIndex = 0;
    this->bIsIdle = false;
    this->Position = 0.00f;
    this->AllowedMotionTransitionTime = 0.00f;
    this->Limit = 0.00f;
    this->LimitOfOperation = false;
    this->bNoBlend = false;
}

