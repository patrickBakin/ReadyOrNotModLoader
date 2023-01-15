#include "MoraleComponent.h"

class AReadyOrNotCharacter;
class ACyberneticCharacter;

bool UMoraleComponent::WillGiveUp(AReadyOrNotCharacter* Yeller) const {
    return false;
}

void UMoraleComponent::ResetMoraleOnCharacter(ACyberneticCharacter* Character) {
}

void UMoraleComponent::LowerMoraleOnCharacter(ACyberneticCharacter* Character, float MoraleValue) {
}

void UMoraleComponent::IncreaseMoraleOnCharacter(ACyberneticCharacter* Character, float MoraleValue) {
}

bool UMoraleComponent::HasBeenYelledAt() const {
    return false;
}

float UMoraleComponent::GetTimeSinceLastYelledAt() const {
    return 0.0f;
}

float UMoraleComponent::GetMorale() const {
    return 0.0f;
}

void UMoraleComponent::ChangeMoraleOnCharacter(ACyberneticCharacter* Character, float MoraleValue) {
}

void UMoraleComponent::ChangeMoraleInArea(FVector Location, float MoraleValue, float Range, bool bLOSOnly, TArray<ETeamType> Teams) {
}

UMoraleComponent::UMoraleComponent() {
    this->Morale = 1.00f;
    this->StartingMorale = 1.00f;
    this->TimeSinceLastYelledAt = 0.00f;
    this->bTriggeredYellAt = false;
    this->bHasBeenYelledAt = false;
    this->OwnerCharacter = NULL;
}

