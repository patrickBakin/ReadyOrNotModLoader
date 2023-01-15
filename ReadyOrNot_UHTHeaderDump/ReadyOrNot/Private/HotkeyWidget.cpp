#include "HotkeyWidget.h"

void UHotkeyWidget::SetHotkeyRemainingUses(int32 InRemainingUses) {
}

void UHotkeyWidget::SetHotkeyImage(const FSlateBrush& Brush) {
}

void UHotkeyWidget::RefreshHotkey() {
}

void UHotkeyWidget::PlayReleasedAnimation() {
}

void UHotkeyWidget::PlayPressedAnimation() {
}

UHotkeyWidget::UHotkeyWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Hotkey_Text = NULL;
    this->Hotkey_Image = NULL;
    this->HotkeyDivider_Image = NULL;
    this->RemainingUses_Text = NULL;
    this->Anim_Pressed = NULL;
    this->Anim_Released = NULL;
    this->bCustomAnimation = false;
    this->bShowRemainingUses = false;
}

