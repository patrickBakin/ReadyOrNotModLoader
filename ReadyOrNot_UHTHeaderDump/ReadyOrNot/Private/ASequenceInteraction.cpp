#include "ASequenceInteraction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

class AActor;
class UPrimitiveComponent;

void AASequenceInteraction::OnSequencerFinished() {
}

void AASequenceInteraction::OnBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AASequenceInteraction::OnBoxEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

AASequenceInteraction::AASequenceInteraction() {
    this->bAutoActivateInRange = false;
    this->ReferencedCharacterViewTarget = NULL;
    this->RadiusComp = CreateDefaultSubobject<UBoxComponent>(TEXT("RadiusBox"));
    this->LastPlayedSequencerCharacter = NULL;
}

