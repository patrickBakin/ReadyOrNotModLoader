#include "FlankingAvoidanceVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavModifierComponent -FallbackName=NavModifierComponent

AFlankingAvoidanceVolume::AFlankingAvoidanceVolume() {
    this->Bounds = CreateDefaultSubobject<UBoxComponent>(TEXT("Bounds"));
    this->NavModifierComponent = CreateDefaultSubobject<UNavModifierComponent>(TEXT("Nav Modifier"));
}

