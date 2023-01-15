#include "AnimCharacterMovementPredictionSnapshot.h"

FAnimCharacterMovementPredictionSnapshot::FAnimCharacterMovementPredictionSnapshot() {
    this->GroundFriction = 0.00f;
    this->BrakingFriction = 0.00f;
    this->BrakingFrictionFactor = 0.00f;
    this->BrakingDecelerationWalking = 0.00f;
    this->bUseSeparateBrakingFriction = false;
    this->GravityZ = 0.00f;
    this->CapsuleRadius = 0.00f;
    this->CapsuleHalfHeight = 0.00f;
}

