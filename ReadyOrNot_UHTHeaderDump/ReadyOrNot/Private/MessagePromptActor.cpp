#include "MessagePromptActor.h"

void AMessagePromptActor::ShowMessageThroughPopUp() {
}

void AMessagePromptActor::HideMessagePopUp() {
}

void AMessagePromptActor::GenerateMessageContent() {
}

AMessagePromptActor::AMessagePromptActor() {
    this->MessageMapID = TEXT("Default__MessagePromptActor");
    this->bIsBigPopUp = false;
    this->bHasDisplayedMessage = false;
}

