#include "DistanceMatchAnimation.h"

FDistanceMatchAnimation::FDistanceMatchAnimation() {
    this->Animation = NULL;
    this->bEnableDistanceLimit = false;
    this->DistanceLimit = 0.00f;
    this->BlendoutTime = 0.00f;
}

