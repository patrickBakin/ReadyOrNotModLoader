#include "MotionCandidate.h"

FMotionCandidate::FMotionCandidate() {
    this->PoseId = 0;
    this->NextPoseId = 0;
    this->LastPoseId = 0;
    this->SrcAnimIndex = 0;
    this->StartTime = 0.00f;
    this->AnimStartOffset = 0;
}

