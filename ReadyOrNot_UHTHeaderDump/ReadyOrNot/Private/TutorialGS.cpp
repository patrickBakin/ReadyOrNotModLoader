#include "TutorialGS.h"

class UWorld;
class USwatCommandWidget;

void ATutorialGS::SetCurrentTutorialData(FTutorialMissionData TutorialData) {
}

void ATutorialGS::OnPostUpdateSwatCommands(USwatCommandWidget* Widget, TArray<FSwatCommand>& SwatCommands) {
}

TSoftObjectPtr<UWorld> ATutorialGS::GetCurrentTutorialStreamedLevel() {
    return NULL;
}

ATutorialGS::ATutorialGS() {
    this->TutorialMenuStreamedLevel = NULL;
    this->CurrentTutorialStreamedLevel = NULL;
    this->bFinishedUsingTutorialMenu = false;
}

