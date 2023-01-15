#include "ActivityStateTransition.h"

FActivityStateTransition::FActivityStateTransition() {
    this->TransitionToStateID = 0;
    this->Priority = 0;
    this->ToState = NULL;
}

