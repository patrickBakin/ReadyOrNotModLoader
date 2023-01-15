#include "MissionPlanWidget.h"

void UMissionPlanWidget::RemoveMarker(int32 ID) {
}

void UMissionPlanWidget::RemoveLine(int32 ID) {
}





void UMissionPlanWidget::AddMarker(const FPlanningMarker& Marker) {
}

void UMissionPlanWidget::AddLine(const FPlanningLine& Line) {
}

UMissionPlanWidget::UMissionPlanWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->LineThickness = 3.00f;
    this->FadeTime = 10.00f;
}

