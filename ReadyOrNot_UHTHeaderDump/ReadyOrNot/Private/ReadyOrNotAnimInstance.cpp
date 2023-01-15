#include "ReadyOrNotAnimInstance.h"

float UReadyOrNotAnimInstance::GetWeightFromSlotInversed(FName SlotName) {
    return 0.0f;
}

float UReadyOrNotAnimInstance::GetWeightFromSlot(FName SlotName) {
    return 0.0f;
}

TEnumAsByte<EMoveDirectionExt::Type> UReadyOrNotAnimInstance::GetOppositeDirectionExt(TEnumAsByte<EMoveDirectionExt::Type> CurrentDir) {
    return EMoveDirectionExt::F;
}

FRotator UReadyOrNotAnimInstance::GetLookAtRotation() {
    return FRotator{};
}

TEnumAsByte<EMoveDirectionExt::Type> UReadyOrNotAnimInstance::GetCurrentDirectionExtFromYawAngle(float YawAngle) {
    return EMoveDirectionExt::F;
}

UReadyOrNotAnimInstance::UReadyOrNotAnimInstance() {
    this->Speed = 0.00f;
    this->SpeedHorizontal = 0.00f;
    this->SpeedVertical = 0.00f;
    this->MaxSpeed = 0.00f;
    this->Direction = 0.00f;
    this->ViewPitch = 0.00f;
    this->ViewYaw = 0.00f;
    this->bIsMoving = false;
    this->bIsInAir = false;
    this->CurrentDirection = EMoveDirection::F;
    this->DirDegreesPerSecond = 0.00f;
    this->ForwardDirAngle = 0.00f;
    this->BackwardDirAngle = 0.00f;
    this->LeftDirAngle = 0.00f;
    this->RightDirAngle = 0.00f;
    this->ForwardDirDeg = 0.00f;
    this->BackwardDirDeg = 0.00f;
    this->LeftDirDeg = 0.00f;
    this->RightDirDeg = 0.00f;
    this->StrafeForwardDir = 0.00f;
    this->StrafeBackwardDir = 0.00f;
    this->StrafeLeftDir = 0.00f;
    this->StrafeRightDir = 0.00f;
    this->MovementAlpha = 0.00f;
    this->MovementJogAlpha = 0.00f;
    this->MovementJogThreshold = 180.00f;
    this->bCrouching = false;
    this->bIsStopping = false;
    this->bIsCarried = false;
    this->bIsCarrying = false;
    this->CurMotionBlock = EMotionBlockType::MB_None;
    this->bIsFalling = false;
    this->bHasPrelanded = false;
    this->bJumpRecoveryActive = false;
    this->JumpRecoveryAnimTime = 0.00f;
    this->JumpRecoveryStrength = 0.00f;
    this->JumpRecoveryTime = 0.30f;
    this->DirAngle = 0.00f;
    this->DirAngleDegrees = 0.00f;
    this->CurrentDirectionExt = EMoveDirectionExt::F;
    this->bIsTeamMLO = false;
    this->LeftHandIKAlpha = 0.00f;
    this->SprintAlpha = 0.00f;
    this->bIsDeployableEquipped = false;
    this->bIsPistol = false;
    this->bIsRifle = false;
    this->bIsItem = false;
    this->bItemOneHanded = false;
    this->bIsC2Charge = false;
    this->bLevel1MovementTrigger = false;
    this->bLevel2MovementTrigger = false;
    this->bLevel3MovementTrigger = false;
    this->bCrouchLevel1MovementTrigger = false;
    this->bRotationRateReached = false;
    this->DeltaRotation = 0.00f;
    this->SprintFPAlpha = 0.00f;
    this->PelvisMovementBobAlpha = 0.00f;
}

