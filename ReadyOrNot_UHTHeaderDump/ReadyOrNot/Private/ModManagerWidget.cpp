#include "ModManagerWidget.h"



void UModManagerWidget::RequestSubscribedMods(const FString& Search) {
}

void UModManagerWidget::RequestSearch(const FString& Query) {
}

void UModManagerWidget::RequestRefresh() {
}

void UModManagerWidget::RequestProfilePicture() {
}

void UModManagerWidget::RequestAllMods(const FString& Search) {
}





FString UModManagerWidget::GetUsername() const {
    return TEXT("");
}



UModManagerWidget::UModManagerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ModioManager = NULL;
}

