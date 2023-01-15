#include "TaserReactionVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent


ATaserReactionVolume::ATaserReactionVolume() {
    this->Bounds = CreateDefaultSubobject<UBoxComponent>(TEXT("Bounds"));
}

