#include "ScopedWeaponAttachment.h"

class ABaseWeapon;

FScopeModifications UScopedWeaponAttachment::GetScopeMods(ABaseWeapon* Weapon) {
    return FScopeModifications{};
}

float UScopedWeaponAttachment::GetMeshspaceOffsetVertical(ABaseWeapon* Weapon) {
    return 0.0f;
}

float UScopedWeaponAttachment::GetMeshspaceOffsetHorizontal(ABaseWeapon* Weapon) {
    return 0.0f;
}

float UScopedWeaponAttachment::GetMeshspaceOffsetDistance(ABaseWeapon* Weapon) {
    return 0.0f;
}

UScopedWeaponAttachment::UScopedWeaponAttachment() {
    this->ZoomFOVAddition = 0.00f;
    this->ZoomInSpeed = 20.00f;
    this->ZoomOutSpeed = 20.00f;
    this->bSupportsCowitness = false;
    this->bUseScopeEffect = false;
    this->bUsePipRendering = false;
    this->CaptureSource = SCS_FinalColorLDR;
    this->bOverridePostProcessSettings = false;
    this->bNeedInventoryUpdate = true;
    this->PipMaterialIdx = 0;
    this->PipFOV = 50.00f;
    this->PlayerCameraFOVMultiplier = 1.00f;
    this->PipRenderDynamicMaterial = NULL;
    this->PipSceneCapture = NULL;
    this->PipRenderTarget = NULL;
}

