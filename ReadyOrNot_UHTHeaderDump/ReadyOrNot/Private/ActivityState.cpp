#include "ActivityState.h"

class UActivityState;

UActivityState* UActivityState::CreateTransition(const FActivityStateTransition& InStateTransition) {
    return NULL;
}

UActivityState* UActivityState::BindEventTick(const UActivityState::FActivityStateUpdate& Delegate) {
    return NULL;
}

UActivityState* UActivityState::BindEventExit(const UActivityState::FActivityStateEvent& Delegate) {
    return NULL;
}

UActivityState* UActivityState::BindEventEnter(const UActivityState::FActivityStateEvent& Delegate) {
    return NULL;
}

UActivityState::UActivityState() {
    this->Name = TEXT("Invalid");
    this->ID = -1;
    this->Uptime = 0.00f;
    this->StateMachineOwner = NULL;
}

