#include "SwatCommand.h"

FSwatCommand::FSwatCommand() {
    this->CommandIcon = NULL;
    this->CommandType = ESwatCommand::SC_None;
    this->bGrabContextualDataOnExecute = false;
    this->bEnabled = false;
    this->CommandTarget = NULL;
}

