#include "HighgroundVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

class AActor;
class UPrimitiveComponent;

void AHighgroundVolume::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AHighgroundVolume::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AHighgroundVolume::OnAudioFinished() {
}

AHighgroundVolume::AHighgroundVolume() {
    this->AudioDebounce = 10.00f;
    this->Bounds = CreateDefaultSubobject<UBoxComponent>(TEXT("Bounds"));
    this->AudioComp = CreateDefaultSubobject<UAudioComponent>(TEXT("Speaker"));
    this->bWatching = false;
    this->SierraDesignation = 0;
}

