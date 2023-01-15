#include "IconWidget.h"

class UTexture2D;

FString UIconWidget::GetAttachedObjectName() const {
    return TEXT("");
}

UTexture2D* UIconWidget::GetAttachedObjectIcon() const {
    return NULL;
}

UIconWidget::UIconWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MainImage = NULL;
    this->ParentComponent = NULL;
}

