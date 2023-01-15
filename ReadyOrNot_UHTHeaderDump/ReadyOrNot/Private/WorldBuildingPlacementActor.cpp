#include "WorldBuildingPlacementActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

class UBaseActivity;
class ACyberneticController;

void AWorldBuildingPlacementActor::OnWorldBuildingActivityFinished(UBaseActivity* InActivity, ACyberneticController* CyberneticController) {
}

bool AWorldBuildingPlacementActor::IsInUseByController() const {
    return false;
}

AWorldBuildingPlacementActor::AWorldBuildingPlacementActor() {
    this->Activity = NULL;
    this->bDropGunBeforeActivity = false;
    this->LinkedToSpawner = NULL;
    this->InUseByController = NULL;
    this->DefaultScene = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultScene"));
}

