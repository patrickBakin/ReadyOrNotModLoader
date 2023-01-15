#include "BloodPool.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DecalComponent -FallbackName=DecalComponent

ABloodPool::ABloodPool() {
    this->Decal = CreateDefaultSubobject<UDecalComponent>(TEXT("Decal"));
}

