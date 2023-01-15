#include "BaseWidget.h"

class UFMODEvent;
class UWidgetAnimation;

bool UBaseWidget::UpdateDebugInfo_Implementation() {
    return false;
}

void UBaseWidget::ToggleWidgetVisibility(bool bNotHitTestable) {
}

void UBaseWidget::StopWidgetAnimation_Internal(UWidgetAnimation* InWidgetAnimation) {
}

void UBaseWidget::ShowWidget(bool bNotHitTestable) {
}

void UBaseWidget::PlayWidgetAnimation_Internal(UWidgetAnimation* InWidgetAnimation, bool bRestartIfAlreadyPlaying) {
}

void UBaseWidget::PlaySoundEffect(UFMODEvent* SoundEffectToPlay) {
}

void UBaseWidget::PauseWidgetAnimation_Internal(UWidgetAnimation* InWidgetAnimation) {
}

bool UBaseWidget::IsMouseAxisBeyondThreshold(const FVector2D& InMouseDelta) {
    return false;
}

bool UBaseWidget::IsGamepadAxisBeyondThreshold(const FVector2D& InGamepadAxis) {
    return false;
}

bool UBaseWidget::IsBlockingAnimationPlaying_Implementation() {
    return false;
}

void UBaseWidget::HideWidget() {
}

bool UBaseWidget::HasMouseMoved() const {
    return false;
}

FVector2D UBaseWidget::GetMousePosition() const {
    return FVector2D{};
}

FVector2D UBaseWidget::GetMouseDelta() const {
    return FVector2D{};
}

FVector2D UBaseWidget::GetCenterScreenPosition() {
    return FVector2D{};
}

UBaseWidget::UBaseWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->RONGS = NULL;
}

