#include "MessageDisplayBox.h"

UMessageDisplayBox::UMessageDisplayBox() : UUserWidget(FObjectInitializer::Get()) {
    this->MessageTxt = TEXT("This is an example message...");
    this->ButtonTxt = TEXT("OK");
    this->bShouldQuitOnButtonPress = false;
}

