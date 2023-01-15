#include "ShotDetectionVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent



AShotDetectionVolume::AShotDetectionVolume() {
    this->Bounds = CreateDefaultSubobject<UBoxComponent>(TEXT("Bounds"));
}

