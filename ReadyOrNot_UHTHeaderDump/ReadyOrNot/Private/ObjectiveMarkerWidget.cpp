#include "ObjectiveMarkerWidget.h"

void UObjectiveMarkerWidget::ShowMarkerText() {
}

void UObjectiveMarkerWidget::ShowIcon() {
}

void UObjectiveMarkerWidget::ShowAll() {
}

void UObjectiveMarkerWidget::SetTargetLocation(FVector NewLocation) {
}

void UObjectiveMarkerWidget::SetMarkerNameTextFontSize(int32 NewFontSize) {
}

void UObjectiveMarkerWidget::SetMarkerNameTextColorAndOpacity(const FLinearColor& InColor) {
}

void UObjectiveMarkerWidget::SetMarkerNameText(FText NewMarkerNameText) {
}

void UObjectiveMarkerWidget::SetIconSize(FVector2D NewIconSize) {
}

void UObjectiveMarkerWidget::SetIconImage(const FSlateBrush& InBrush) {
}

void UObjectiveMarkerWidget::SetIconColorAndOpacity(const FLinearColor& InColor) {
}

void UObjectiveMarkerWidget::SetDirectionAngle(float Angle) {
}

void UObjectiveMarkerWidget::OnMarkerVisibilityEnabled_Implementation() {
}

void UObjectiveMarkerWidget::OnMarkerVisibilityDisabled_Implementation() {
}

void UObjectiveMarkerWidget::HideMarkerText() {
}

void UObjectiveMarkerWidget::HideIcon() {
}

void UObjectiveMarkerWidget::HideAll() {
}

UObjectiveMarkerWidget::UObjectiveMarkerWidget() {
    this->ParentComponent = NULL;
    this->RootCanvasPanel = NULL;
    this->Icon_SizeBox = NULL;
    this->Icon_Image = NULL;
    this->DirectionalArrow_Image = NULL;
    this->DistanceInMeters_Text = NULL;
    this->MarkerName_Text = NULL;
    this->DistanceToLocalPlayer = 0.00f;
    this->DirectionAngle = 0.00f;
    this->bHideDistance = false;
}

