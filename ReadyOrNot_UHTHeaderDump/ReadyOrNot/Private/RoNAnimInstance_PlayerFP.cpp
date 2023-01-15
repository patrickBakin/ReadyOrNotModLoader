#include "RoNAnimInstance_PlayerFP.h"

class UAnimSequenceBase;
class UBlendSpaceBase;

void URoNAnimInstance_PlayerFP::OnReloadComplete() {
}

void URoNAnimInstance_PlayerFP::OnHolsterComplete() {
}

void URoNAnimInstance_PlayerFP::OnC2Detonation() {
}

UBlendSpaceBase* URoNAnimInstance_PlayerFP::GetPlayerBlendspace_FP(TEnumAsByte<EBaseBlendspaces_FP::Type> BlendspaceName) const {
    return NULL;
}

UAnimSequenceBase* URoNAnimInstance_PlayerFP::GetPlayerAnimation_FP(TEnumAsByte<EBaseAnimType_FP::Type> AnimName) const {
    return NULL;
}

URoNAnimInstance_PlayerFP::URoNAnimInstance_PlayerFP() {
    this->LastWeaponAnimData = NULL;
    this->EditorWeaponAnimData = NULL;
    this->LeanAngleY = 0.00f;
    this->LeanAngleZ = 0.00f;
    this->TPMeshReference = NULL;
    this->LazySpringStrength = 0.00f;
    this->ADS_Movement_Weight = 0.00f;
    this->InteractionSlotAlpha = 0.00f;
    this->DefaultSlotAlpha = 0.00f;
    this->RollMoveInput = 0.00f;
}

