#include "AnimCharacterMovementSnapshot.h"

FAnimCharacterMovementSnapshot::FAnimCharacterMovementSnapshot() {
    this->CurrentCardinalDirection = EAnimCardinalDirection::North;
    this->VelocityYawAngle = 0.00f;
    this->AccelerationYawAngle = 0.00f;
    this->VelocityYawDeltaNorth = 0.00f;
    this->VelocityYawDeltaEast = 0.00f;
    this->VelocityYawDeltaSouth = 0.00f;
    this->VelocityYawDeltaWest = 0.00f;
    this->Distance2DTraveledSinceLastUpdate = 0.00f;
    this->Speed2D = 0.00f;
    this->AccelerationSize2D = 0.00f;
    this->bIsOnGround = false;
    this->bIsMoving = false;
    this->bIsAccelerating = false;
    this->bIsMovingAndAccelerating = false;
    this->bIsNotMoving = false;
    this->bIsNotAccelerating = false;
    this->bIsNotMovingAndAccelerating = false;
    this->bIsMovingAndNotAccelerating = false;
    this->bAccelerationOpposesVelocity = false;
    this->bAccelerationEqualsVelocity = false;
}

