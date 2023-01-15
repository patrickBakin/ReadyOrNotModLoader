#include "ObjectiveMarkerComponent.h"

void UObjectiveMarkerComponent::ToggleObjectiveMarkerVisibility() {
}

void UObjectiveMarkerComponent::ShowObjectiveMarker() {
}

void UObjectiveMarkerComponent::ShowMarkerText() {
}

void UObjectiveMarkerComponent::ShowIcon() {
}

void UObjectiveMarkerComponent::SetNewFadeDistance(float NewDistance) {
}

void UObjectiveMarkerComponent::SetMarkerTextFontSize(int32 NewFontSize) {
}

void UObjectiveMarkerComponent::SetMarkerTextColor(FLinearColor InIconColorAndOpacity) {
}

void UObjectiveMarkerComponent::SetMarkerText(FText NewMarkerText) {
}

void UObjectiveMarkerComponent::SetIconSize(FVector2D NewIconSize) {
}

void UObjectiveMarkerComponent::SetIconColor(FLinearColor InIconColorAndOpacity) {
}

void UObjectiveMarkerComponent::SetIconBrush(FSlateBrush NewIconBrush) {
}

bool UObjectiveMarkerComponent::IsObjectiveMarkerOffscreen() const {
    return false;
}

void UObjectiveMarkerComponent::HideObjectiveMarker(bool bFadeOut) {
}

void UObjectiveMarkerComponent::HideMarkerText() {
}

void UObjectiveMarkerComponent::HideIcon() {
}

void UObjectiveMarkerComponent::EnableObjectiveMarker() {
}

void UObjectiveMarkerComponent::DisableObjectiveMarker() {
}

bool UObjectiveMarkerComponent::CanShowObjectiveMarker() const {
    return false;
}

UObjectiveMarkerComponent::UObjectiveMarkerComponent() {
    this->bEnabled = true;
    this->bStartHidden = false;
    this->bCustomLocation = false;
    this->bFadeOffscreen = true;
    this->bDistanceScaleIcon = true;
    this->bHideIconOffscreen = true;
    this->bCompletelyFadeWhenOverlappingOtherWidgets = true;
    this->bCompletelyFadeWhenClose = true;
    this->FadeAtDistance_Close = 100.00f;
    this->bCompletelyFadeWhenFar = false;
    this->FadeAtDistance_Far = 1500.00f;
    this->bHideDistanceInfo = false;
    this->HideDistanceInfoAtDistance = 1000.00f;
    this->bHideDirectionalArrow = false;
    this->bDisplayMarkerText = false;
    this->MarkerWidgetClass = NULL;
    this->bDebug = false;
    this->ObjectiveMarkerWidget_Offscreen = NULL;
    this->ObjectiveMarkerWidget_Onscreen = NULL;
    this->bIsOffscreen = false;
    this->bRequestingFadeOut = false;
}

