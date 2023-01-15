#include "SlowDownVolume.h"

class AActor;
class UPrimitiveComponent;

void ASlowDownVolume::OnOverlapEndComponent(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASlowDownVolume::OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor) {
}

void ASlowDownVolume::OnOverlapBeginComponent(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASlowDownVolume::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor) {
}

ASlowDownVolume::ASlowDownVolume() {
    this->SlowDownMultiplier = 1.00f;
}

