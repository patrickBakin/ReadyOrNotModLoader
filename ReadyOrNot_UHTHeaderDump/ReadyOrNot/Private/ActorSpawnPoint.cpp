#include "ActorSpawnPoint.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AActorSpawnPoint::AActorSpawnPoint() {
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Component"));
    this->BillboardComponent = NULL;
    this->bHasVisited = false;
}

