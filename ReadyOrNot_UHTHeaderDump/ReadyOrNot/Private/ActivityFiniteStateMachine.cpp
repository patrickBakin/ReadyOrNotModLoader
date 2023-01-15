#include "ActivityFiniteStateMachine.h"

class UActivityState;

bool UActivityFiniteStateMachine::IsMachineInitialized() const {
    return false;
}

UActivityState* UActivityFiniteStateMachine::GetStateByName(const FString& InStateName) const {
    return NULL;
}

UActivityState* UActivityFiniteStateMachine::GetStateByID(int32 InStateID) const {
    return NULL;
}

UActivityState* UActivityFiniteStateMachine::GetActiveState() {
    return NULL;
}

UActivityState* UActivityFiniteStateMachine::AddState(const FString& NewStateName, TArray<FActivityStateTransition> Transitions) {
    return NULL;
}

UActivityFiniteStateMachine::UActivityFiniteStateMachine() {
    this->ActiveState = NULL;
}

