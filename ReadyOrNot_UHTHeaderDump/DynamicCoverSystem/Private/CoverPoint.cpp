#include "CoverPoint.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

void ACoverPoint::StopPreviewCoverAnim() {
}

void ACoverPoint::SetStandCoverType(const EStandCoverType& NewCoverType) {
}

void ACoverPoint::SetCrouchCoverType(const ECrouchCoverType& NewCoverType) {
}

void ACoverPoint::ResetCoverTypes() {
}

void ACoverPoint::PreviewCoverAnim() {
}

ACoverPoint::ACoverPoint() {
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Component"));
    this->Index = 0;
    this->bIsCrouchOnlyCover = false;
    this->bOverrideCoverType = false;
    this->StandCoverType = EStandCoverType::Wall;
    this->CrouchCoverType = ECrouchCoverType::Wall;
}

