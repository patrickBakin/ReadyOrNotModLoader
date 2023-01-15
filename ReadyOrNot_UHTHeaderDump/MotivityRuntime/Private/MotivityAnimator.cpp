#include "MotivityAnimator.h"

FMotivityAnimator::FMotivityAnimator() {
    this->MotionData = NULL;
    this->BlendTime = 0.00f;
    this->UpdateInterval = 0.00f;
    this->applyTrajectoryBlending = false;
    this->EnableTrajectoryToleranceTest = false;
    this->TrajectoryToleranceDist = 0.00f;
    this->TrajectoryToleranceAngle = 0.00f;
    this->TransitionType = EMotivityTransitionType::StandardBlend;
    this->bEnableRealtimePoseComputation = false;
    this->PastRecordType = EMotivityPastRecordType::ActualHistory;
    this->bEnablePoseMatchingIntoIdle = false;
    this->LODThreshold = 0;
    this->PlayRate = 0.00f;
    this->ReferenceMMTimer = 0.00f;
    this->transformGoal = false;
    this->favourCurrentPose = false;
    this->bHasMovementInput = false;
    this->turnInPlaceThreshold = 0.00f;
}

