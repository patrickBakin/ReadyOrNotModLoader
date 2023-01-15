#include "OneWayBlockingVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent

UArrowComponent* AOneWayBlockingVolume::GetDirectionArrowComponent() const {
    return NULL;
}

UBoxComponent* AOneWayBlockingVolume::GetBoxComponent() const {
    return NULL;
}

AOneWayBlockingVolume::AOneWayBlockingVolume() {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Component"));
    this->DirectionArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("Direction"));
}

