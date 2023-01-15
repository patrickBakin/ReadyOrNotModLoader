#include "BulletTracer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

ABulletTracer::ABulletTracer() {
    this->RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->ParticleComponent = NULL;
}

