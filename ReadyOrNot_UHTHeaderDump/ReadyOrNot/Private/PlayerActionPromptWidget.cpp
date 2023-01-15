#include "PlayerActionPromptWidget.h"

void UPlayerActionPromptWidget::UpdateText(const FText& InText, bool bAnimate, bool bLoopAnimation) {
}

bool UPlayerActionPromptWidget::IsInUse() const {
    return false;
}

void UPlayerActionPromptWidget::ClearText() {
}

UPlayerActionPromptWidget::UPlayerActionPromptWidget() {
    this->Action_RichText = NULL;
    this->Anim_OnShow = NULL;
    this->bInUse = false;
}

