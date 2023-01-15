#include "RoNAnimInstance_HumanBase.h"

class URoNMoveStyleComponent;

void URoNAnimInstance_HumanBase::UpdateMoveStyleDataFromComp(URoNMoveStyleComponent* MoveStyleComp) {
}

void URoNAnimInstance_HumanBase::UpdateGaitDataFromComp(URoNMoveStyleComponent* MoveStyleComp) {
}

void URoNAnimInstance_HumanBase::SetMoveStyleDataFromComp(URoNMoveStyleComponent* MoveStyleComp) {
}

FRotator URoNAnimInstance_HumanBase::GetLookAtRotation() const {
    return FRotator{};
}

URoNAnimInstance_HumanBase::URoNAnimInstance_HumanBase() {
    this->MoveStyleComponent = NULL;
    this->bIsStrafing = false;
    this->StrafeBS_Default = NULL;
    this->NonStrafeBS_Default = NULL;
    this->SlotBlendTime = 0.30f;
    this->DefaultSlotBlendTime = 0.30f;
    this->AimOffsetAlpha = 0.00f;
    this->StrafeBlendTime = 0.20f;
    this->SlopeWarpingAlpha = 1.00f;
    this->bIsMoveStyleSlotBActive = false;
    this->SlotIdx = 0;
    this->Lean = 0.00f;
    this->LeanClamped = 0.00f;
    this->LeanFactor = 0.30f;
    this->LeanInterpSpeed = 10.00f;
    this->AdjustedPlayrate = 1.00f;
    this->SpeedScaling = 1.00f;
    this->PlayrateClampMax = 0.15f;
    this->CurrentIdleIndex = 0;
    this->CurrentStrafeDirection = EStrafeDirection::F;
    this->StrafeDirectionAngle = 0.00f;
    this->bInRagdoll = false;
    this->bRecoveringFromRagdoll = false;
    this->bIsDead = false;
    this->bIsPlayingDeathAnim = false;
    this->CurWeaponType = EAnimWeaponType::CWT_Any;
    this->IncapacitationLoopAnim = NULL;
    this->bIsArrested = false;
    this->bIsArrestedAsRagdoll = false;
    this->bIsBeingArrested = false;
    this->bIsBeingArrestedAsRagdoll = false;
    this->bSurrendered = false;
    this->bIsCarried = false;
    this->bIsGetUpPlaying = false;
    this->bIncapacitated = false;
    this->bEnableIKProcess = false;
    this->bIsFemale = false;
    this->bIsUnarmed = false;
    this->bIsSWAT = false;
    this->bIsCrouching = false;
    this->bIsArrestedAndDead = false;
    this->LeftArmIKAlpha = 1.00f;
    this->RightArmIKAlpha = 1.00f;
    this->ArmsOnlySlotAlpha = 1.00f;
    this->LeftArmOnlySlotAlpha = 1.00f;
    this->HandAdditiveLockOverride = 1.00f;
    this->bWeaponDown = false;
    this->bIsPistolAndWeaponDown = false;
    this->bIsPistol = false;
    this->Add_Lowered_Override = NULL;
    this->Add_Shouldered_Override = NULL;
    this->bIsReloading = false;
    this->FinalAimOffsetAlpha = 1.00f;
    this->bAnyMontageIsActive = false;
    this->bFullBodyMontagePlaying = false;
    this->bUpperBodyMontagePlaying = false;
    this->bInteractionMontagePlaying = false;
    this->bFullOrInteractionMontagePlaying = false;
    this->CurOverrideRule = EItemOverrideRule::NONE;
    this->bIsLoweredSet = false;
    this->bAllowTurnInPlace = false;
    this->TurnInPlaceSpeedMultiplier = 1.60f;
    this->YawOffsetLimit = 140.00f;
    this->bExitTurnRecoveryIfMoving = false;
    this->bIsTurnInPlaceStateRelevant = false;
    this->VelocityInterpTime = 7.00f;
    this->bDisableAdditiveOverrides = false;
    this->move_x = 0.00f;
    this->move_y = 0.00f;
    this->bIsHostageTaker = false;
    this->bIsHostage = false;
    this->bIsHostageOrHostageTaker = false;
    this->MoveStyleBlendCoolDown = 1.00f;
    this->bMoveStyleChanging = false;
}

