#include "CoverLandmarkProxy.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent



ACoverLandmarkProxy::ACoverLandmarkProxy() {
    this->LandmarkOwner = NULL;
    this->EntryDirection = ECoverLandmarkAnimDirection::Forward;
    this->ExitDirection = ECoverLandmarkAnimDirection::Forward;
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Component"));
}

