#include "MedicalHealWidget.h"

class UProgressBar;
class UWidgetSwitcher;

void UMedicalHealWidget::StartHealCompleteAnim() {
}

void UMedicalHealWidget::StartFadeOutAnim() {
}

void UMedicalHealWidget::StartFadeInAnim() {
}

void UMedicalHealWidget::ShowNoBrokenLimbsWidget() {
}

void UMedicalHealWidget::ShowMortallyWoundedWidget() {
}

void UMedicalHealWidget::ShowHealerWidget() {
}

void UMedicalHealWidget::ShowHealeeWidget() {
}

void UMedicalHealWidget::SetCurrentHealth(float NewHealth) {
}

void UMedicalHealWidget::InitializeWidget(const FName& InHealerName, const FName& InHealeeName, float InCurrentHealth, float InMinHealth, float InMaxHealth) {
}

UWidgetSwitcher* UMedicalHealWidget::GetWidgetSwitcher() const {
    return NULL;
}

UProgressBar* UMedicalHealWidget::GetHealerHealingProgressBar() const {
    return NULL;
}

UProgressBar* UMedicalHealWidget::GetHealeeHealingProgressBar() const {
    return NULL;
}

UMedicalHealWidget::UMedicalHealWidget() {
    this->CurrentHealth = 0.00f;
    this->PrefixHealerString = TEXT("Healing ");
    this->PostfixHealeeString = TEXT(" is healing you.");
    this->PostfixHealeeMortallyWoundedString = TEXT(" mortally wounded.");
    this->PostfixNoBrokenLimbsString = TEXT(" have any broken limbs.");
    this->MinHealth = 0.00f;
    this->MaxHealth = 100.00f;
    this->HealingWidgetSwitcher = NULL;
    this->HealingProgressBar_Healer = NULL;
    this->HealingProgressBar_Healee = NULL;
    this->HealerText = NULL;
    this->HealeeText = NULL;
    this->HealeeMortallyWoundedText = NULL;
    this->HealeeNoBrokenLimbsText = NULL;
    this->HealerHealthValueText = NULL;
    this->HealeeHealthValueText = NULL;
    this->HealeeMortallyWoundedHealthValueText = NULL;
    this->FadeIn = NULL;
    this->FadeOut = NULL;
    this->HealComplete = NULL;
}

