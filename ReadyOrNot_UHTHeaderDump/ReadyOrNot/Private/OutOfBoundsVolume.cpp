#include "OutOfBoundsVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

AOutOfBoundsVolume::AOutOfBoundsVolume() {
    this->Bounds = CreateDefaultSubobject<UBoxComponent>(TEXT("Bounds"));
}

