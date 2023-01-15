#include "VDWindDirectionalSourceComponent.h"

void UVDWindDirectionalSourceComponent::SetRadius(float InRadius) {
}

float UVDWindDirectionalSourceComponent::GetCurrentGust() const {
    return 0.0f;
}

UVDWindDirectionalSourceComponent::UVDWindDirectionalSourceComponent() {
    this->Radius = 0.00f;
    this->Strength = 0.10f;
    this->Speed = 0.10f;
    this->MinGustAmount = 0.10f;
    this->MaxGustAmount = 0.20f;
    this->MinGustDuration = 1.00f;
    this->MaxGustDuration = 5.00f;
    this->MinGustTransitionSpeed = 0.00f;
    this->MaxGustTransitionSpeed = 0.00f;
    this->MinSecondsBetweenGusts = 2.00f;
    this->MaxSecondsBetweenGusts = 10.00f;
}

