#include "AnimInput_CapsuleLocomotion.h"

FAnimInput_CapsuleLocomotion::FAnimInput_CapsuleLocomotion() {
    this->VelocityYawAngle = 0.00f;
    this->AccelerationYawAngle = 0.00f;
    this->Speed2D = 0.00f;
    this->MovingThreshold = 0.00f;
    this->bIsMoving2D = false;
    this->bHasAcceleration2D = false;
    this->bAccelerationOpposesVelocity = false;
    this->bIsOnGround = false;
}

