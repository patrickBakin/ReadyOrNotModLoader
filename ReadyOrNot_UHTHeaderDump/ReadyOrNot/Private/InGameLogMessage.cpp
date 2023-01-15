#include "InGameLogMessage.h"

FInGameLogMessage::FInGameLogMessage() {
    this->LogSeverity = DL_Info;
    this->bAutoDetermineIcon = false;
    this->Icon = NULL;
    this->DelayBetweenWords = 0.00f;
    this->DelayBetweenLetters = 0.00f;
    this->TimeOnScreen = 0.00f;
}

