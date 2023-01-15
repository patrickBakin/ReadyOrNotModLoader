#include "EnvironmentVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

class AActor;
class UPrimitiveComponent;

void AEnvironmentVolume::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AEnvironmentVolume::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AEnvironmentVolume::AEnvironmentVolume() {
    this->Bounds = CreateDefaultSubobject<UBoxComponent>(TEXT("Bounds"));
    this->WetnessRate = 30.00f;
}

