#include "SlomoBarWidget.h"

void USlomoBarWidget::SetDuration(float NewDuration) {
}

void USlomoBarWidget::ProgressBarFinished() {
}

float USlomoBarWidget::GetDuration() const {
    return 0.0f;
}

USlomoBarWidget::USlomoBarWidget() {
    this->AnimIn = NULL;
    this->AnimOut = NULL;
    this->ProgressBar = NULL;
    this->Duration = 1.00f;
}

