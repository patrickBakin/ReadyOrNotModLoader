#include "ModCardWidget.h"

class UModManagerWidget;
class UModData;

void UModCardWidget::SetupMod(UModData* InModData, UModManagerWidget* Parent) {
}

bool UModCardWidget::RequestSubscription(bool bSubscribe) {
    return false;
}

void UModCardWidget::RequestRatingReset() {
}

void UModCardWidget::RequestPositiveRating() {
}

void UModCardWidget::RequestNegativeRating() {
}

void UModCardWidget::RequestImage() {
}

void UModCardWidget::RequestGallery() {
}

void UModCardWidget::RequestFullSizeGalleryImage(int32 Index) {
}









UModData* UModCardWidget::GetModData() const {
    return NULL;
}

UModCardWidget::UModCardWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ModData = NULL;
    this->ManagerWidget = NULL;
}

