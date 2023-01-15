#include "TutorialActionPromptSlot.h"

FTutorialActionPromptSlot::FTutorialActionPromptSlot() {
    this->InputEvent = IE_Pressed;
    this->bIsAxisEvent = false;
    this->KeyIndex = 0;
    this->bUseCustomActionText = false;
}

