#include "FootstepFoleyComponent.h"

class AActor;
class UPrimitiveComponent;

void UFootstepFoleyComponent::StoppedOverlapping(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UFootstepFoleyComponent::StartedOverlapping(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

UFootstepFoleyComponent::UFootstepFoleyComponent() {
    this->SetEventTo = NULL;
    this->SetEventToRemote = NULL;
    this->bPlayOnPlayer = true;
    this->bPlayEveryStep = true;
}

