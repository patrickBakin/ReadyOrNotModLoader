#include "PatrolPoint.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

APatrolPoint::APatrolPoint() {
    this->SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}

