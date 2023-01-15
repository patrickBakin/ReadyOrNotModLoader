#include "TutorialMessageVolume.h"

class AActor;

void ATutorialMessageVolume::TutorialBoxEndOverlap(AActor* ThisActor, AActor* OtherActor) {
}

void ATutorialMessageVolume::TutorialBoxBeginOverlap(AActor* ThisActor, AActor* OtherActor) {
}

void ATutorialMessageVolume::GenerateMessageContent() {
}

ATutorialMessageVolume::ATutorialMessageVolume() {
    this->MessageMapID = TEXT("Default__TutorialMessageVolume");
    this->bIsBigPopUp = false;
    this->bHasDisplayedMessage = false;
}

