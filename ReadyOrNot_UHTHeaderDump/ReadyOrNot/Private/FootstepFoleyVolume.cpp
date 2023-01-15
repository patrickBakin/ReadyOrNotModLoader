#include "FootstepFoleyVolume.h"

class AActor;

void AFootstepFoleyVolume::OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor) {
}

void AFootstepFoleyVolume::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor) {
}

AFootstepFoleyVolume::AFootstepFoleyVolume() {
    this->FootstepFoleyEvent = NULL;
    this->FootstepFoleyEventFirstPerson = NULL;
    this->bNPCsTriggerFootstepFoley = true;
}

