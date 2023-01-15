#include "CTFTriggerBox.h"

class AActor;

void ACTFTriggerBox::OnBeginOverlap_Implementation(AActor* OverlappedActor, AActor* OtherActor) {
}

bool ACTFTriggerBox::FulfillsRequirements_Implementation() {
    return false;
}

ACTFTriggerBox::ACTFTriggerBox() {
    this->TextRender = NULL;
}

