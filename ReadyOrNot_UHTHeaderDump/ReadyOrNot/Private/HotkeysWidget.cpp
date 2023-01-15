#include "HotkeysWidget.h"

class UWidget;

void UHotkeysWidget::SetHotkeyVisibility(UWidget* Widget, bool bCondition) {
}

void UHotkeysWidget::RefreshHotkeyInput_Implementation() {
}

UHotkeysWidget::UHotkeysWidget() {
    this->Hotkeys_Overlay = NULL;
    this->Hotkeys_Container = NULL;
    this->Hotkey_Grenade = NULL;
    this->Hotkey_Chemlight = NULL;
    this->Hotkey_NVG = NULL;
    this->Hotkey_Scope = NULL;
    this->IlluminatorAttachment_Switcher = NULL;
    this->Hotkey_Laser = NULL;
    this->Hotkey_Flashlight = NULL;
    this->PlayerCharacter = NULL;
}

