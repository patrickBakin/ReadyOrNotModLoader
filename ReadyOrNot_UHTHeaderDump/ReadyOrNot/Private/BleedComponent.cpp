#include "BleedComponent.h"
#include "Net/UnrealNetwork.h"

void UBleedComponent::StopBleeding() {
}

void UBleedComponent::StartBleeding() {
}

bool UBleedComponent::IsBleeding() const {
    return false;
}

float UBleedComponent::GetHealCount() const {
    return 0.0f;
}

float UBleedComponent::GetBleedTime() const {
    return 0.0f;
}

void UBleedComponent::DoHeal() {
}

bool UBleedComponent::CanHeal() const {
    return false;
}

void UBleedComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBleedComponent, bIsBleeding);
    DOREPLIFETIME(UBleedComponent, bTempStopBleeding);
    DOREPLIFETIME(UBleedComponent, HealCount);
}

UBleedComponent::UBleedComponent() {
    this->bIsBleeding = false;
    this->bTempStopBleeding = false;
    this->HealCount = 3;
}

