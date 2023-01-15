#include "DoorInteractionActivity.h"

bool UDoorInteractionActivity::ShouldGetInPosition() const {
    return false;
}

void UDoorInteractionActivity::PerformInteractStage(float DeltaTime, float Uptime) {
}

void UDoorInteractionActivity::PerformGetInPositionStage(float DeltaTime, float Uptime) {
}

void UDoorInteractionActivity::OnInteractionEnd() {
}

void UDoorInteractionActivity::OnInteractionBegin() {
}

void UDoorInteractionActivity::OnDoorOpened() {
}

void UDoorInteractionActivity::OnDoorClosed() {
}

void UDoorInteractionActivity::OnDoorBroken() {
}

void UDoorInteractionActivity::ExitInteractStage() {
}

void UDoorInteractionActivity::ExitGetInPositionStage() {
}

void UDoorInteractionActivity::EnterInteractStage() {
}

void UDoorInteractionActivity::EnterGetInPositionStage() {
}

bool UDoorInteractionActivity::CanInteract() const {
    return false;
}

UDoorInteractionActivity::UDoorInteractionActivity() {
    this->Door = NULL;
}

