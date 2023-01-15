#include "FirePointActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

class ACyberneticController;
class ACoverFireVolume;

void AFirePointActor::PlayPreviewAnimation() {
}

bool AFirePointActor::IsInUse(ACyberneticController* MyController) const {
    return false;
}

FString AFirePointActor::GetRandomFireMontage() const {
    return TEXT("");
}

ACoverFireVolume* AFirePointActor::GetParentVolume() const {
    return NULL;
}

AFirePointActor::AFirePointActor() {
    this->CoverType = ECoverFireType_FirePoint::CT_Front;
    this->bIsCrouchCover = false;
    this->InUseByController = NULL;
    this->DefaultScene = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultScene"));
}

