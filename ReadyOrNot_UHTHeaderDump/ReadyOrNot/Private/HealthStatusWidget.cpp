#include "HealthStatusWidget.h"

void UHealthStatusWidget::UpdateIconColor(float CurrentValue, float MinValue, float MaxValue) {
}

void UHealthStatusWidget::UpdateHealthPercentage(float CurrentValue, float MaxValue) {
}

void UHealthStatusWidget::AutoDetermineIconImage() {
}

UHealthStatusWidget::UHealthStatusWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Icon_Image = NULL;
    this->Percentage_Text = NULL;
}

