#include "AnimNode_DistanceMatching.h"

FAnimNode_DistanceMatching::FAnimNode_DistanceMatching() {
    this->PrevSequence = NULL;
    this->Sequence = NULL;
    this->Distance = 0.00f;
    this->bEnableDistanceLimit = false;
    this->DistanceLimit = 0.00f;
    this->PlayRate = 0.00f;
    this->bDistanceMatchFromPoint = false;
    this->StartTime = 0.00f;
}

