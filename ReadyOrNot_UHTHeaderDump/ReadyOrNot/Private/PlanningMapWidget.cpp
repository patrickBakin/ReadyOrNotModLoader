#include "PlanningMapWidget.h"

class UWorld;




UWorld* UPlanningMapWidget::GetWorldContext() {
    return NULL;
}

void UPlanningMapWidget::ClearPointData(bool bClearAll, int32 FloorNum, bool bClearAllFloors) {
}

void UPlanningMapWidget::AddPointData(FVector2D PointData, int32 FloorNum, EFreeDrawColor Color, bool bNewPoint, float Thickness) {
}

UPlanningMapWidget::UPlanningMapWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bDrawable = false;
}

