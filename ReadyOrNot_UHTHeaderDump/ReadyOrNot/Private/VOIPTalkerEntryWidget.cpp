#include "VOIPTalkerEntryWidget.h"

FText UVOIPTalkerEntryWidget::GetVoiceTypeText() const {
    return FText::GetEmpty();
}

FSlateColor UVOIPTalkerEntryWidget::GetVoiceTypeColor() const {
    return FSlateColor{};
}

UVOIPTalkerEntryWidget::UVOIPTalkerEntryWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->PlayerName = NULL;
    this->PlayerChannel = NULL;
    this->VoiceImage = NULL;
    this->PlayerState = NULL;
}

