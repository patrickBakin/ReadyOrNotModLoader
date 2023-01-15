#include "MapActorComponent.h"

void UMapActorComponent::SetIconTextColor(const FLinearColor& InIconTextColor) {
}

void UMapActorComponent::SetIconText(const FText& InIconText) {
}

void UMapActorComponent::SetIconColor(const FLinearColor& InIconColor) {
}

bool UMapActorComponent::IsUsingActorRotation() const {
    return false;
}

FText UMapActorComponent::GetIconText() const {
    return FText::GetEmpty();
}

void UMapActorComponent::EnableMapActor() {
}

void UMapActorComponent::DisableMapActor() {
}

UMapActorComponent::UMapActorComponent() {
    this->bCondition = true;
    this->bEnabled = true;
    this->MapActorWidgetClass = NULL;
    this->bUseActorRotation = true;
    this->RotationOffset = 0.00f;
    this->bAddedToMap = false;
    this->MapIconWidget = NULL;
}

