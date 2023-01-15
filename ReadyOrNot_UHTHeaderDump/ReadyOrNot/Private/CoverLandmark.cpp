#include "CoverLandmark.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

class AController;

void ACoverLandmark::ToggleLandmarkEnabled(bool bEnable) {
}

void ACoverLandmark::PreviewIdleAnim() {
}

void ACoverLandmark::PreviewExitAnim() {
}

void ACoverLandmark::PreviewEntryAnim() {
}

bool ACoverLandmark::IsCooldownActiveFor(const AController* InController) const {
    return false;
}

void ACoverLandmark::EnableLandmark() {
}

void ACoverLandmark::DisableLandmark() {
}

void ACoverLandmark::AddCooldownFor(AController* InController, float InCooldownTime) {
}

ACoverLandmark::ACoverLandmark() {
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Component"));
    this->bEnabled = true;
    this->LandmarkName = TEXT("None");
    this->bDisableCollision = true;
    this->AllowedTeamsForCover.AddDefaulted(2);
    this->CooldownAfterUse = 60.00f;
    this->bCharacterHiddenInWaitingState = false;
    this->bAllowAbruptExit = false;
    this->IdlePoint = NULL;
    this->OccupiedByController = NULL;
}

