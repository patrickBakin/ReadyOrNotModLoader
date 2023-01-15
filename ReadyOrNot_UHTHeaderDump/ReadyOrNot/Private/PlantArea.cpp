#include "PlantArea.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

APlantArea::APlantArea() {
    this->OverlapArea = CreateDefaultSubobject<UBoxComponent>(TEXT("PlantArea"));
}

