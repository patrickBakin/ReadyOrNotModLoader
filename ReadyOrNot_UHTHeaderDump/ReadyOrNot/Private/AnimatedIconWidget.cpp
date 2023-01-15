#include "AnimatedIconWidget.h"

void UAnimatedIconWidget::UnPauseIconAnim() {
}

void UAnimatedIconWidget::StopInteractAnim() {
}

void UAnimatedIconWidget::StopFocusAnim() {
}


void UAnimatedIconWidget::SetInteractIconSize(float InInteractCircleSize, float InInteractIconSize) {
}

void UAnimatedIconWidget::SetCurrentProgress(float Percent) {
}

void UAnimatedIconWidget::SetActiveIcon(int32 Index) {
}

void UAnimatedIconWidget::PlayInteractAnim() {
}

void UAnimatedIconWidget::PlayFocusAnim(bool bReverse) {
}

void UAnimatedIconWidget::PauseIconAnim() {
}

UAnimatedIconWidget::UAnimatedIconWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->CurrentIndex = 0;
    this->ElapsedTime = 0.00f;
    this->bPaused = false;
    this->InteractCircle_Overlay = NULL;
    this->InteractIcon_SizeBox = NULL;
    this->IconSwitcher = NULL;
    this->ProgressCircle_Image = NULL;
    this->Anim_Interact = NULL;
    this->Anim_Focus = NULL;
    this->ProgressCircleMaterial = NULL;
    this->ParentComponent = NULL;
    this->MID_ProgressCircle = NULL;
}

