#include "PlayerActionPromptSlot.h"

FPlayerActionPromptSlot::FPlayerActionPromptSlot() {
    this->InputEvent = IE_Pressed;
    this->bUseCustomActionText = false;
    this->bCheckForDisallowedItems = false;
    this->bUseCustomDisallowedActionText = false;
    this->bAnimate = false;
    this->bLoopAnimation = false;
    this->bCondition = false;
}

