#include "PlacedBag.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent

class USceneComponent;
class APlayerCharacter;

bool APlacedBag::StartUse_Implementation(APlayerCharacter* User) {
    return false;
}


TArray<USceneComponent*> APlacedBag::GetUseViewComponents_Implementation() {
    return TArray<USceneComponent*>();
}

void APlacedBag::EndUse_Implementation(APlayerCharacter* User) {
}

APlacedBag::APlacedBag() {
    this->IconBolt = CreateDefaultSubobject<USphereComponent>(TEXT("IconBolt"));
    this->bOverrideUseText = false;
}

