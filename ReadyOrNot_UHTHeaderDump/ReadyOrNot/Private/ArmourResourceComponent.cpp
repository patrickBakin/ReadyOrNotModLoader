#include "ArmourResourceComponent.h"
#include "Net/UnrealNetwork.h"

void UArmourResourceComponent::SetResistance(float NewResistancePercentage) {
}

void UArmourResourceComponent::SetMaxTickets(int32 NewMax) {
}

float UArmourResourceComponent::GetResistancePercentage() const {
    return 0.0f;
}

int32 UArmourResourceComponent::GetRemainingTickets() const {
    return 0;
}

int32 UArmourResourceComponent::GetMaxTickets() const {
    return 0;
}

void UArmourResourceComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UArmourResourceComponent, MaxTickets);
    DOREPLIFETIME(UArmourResourceComponent, Resistance);
    DOREPLIFETIME(UArmourResourceComponent, RemainingTickets);
}

UArmourResourceComponent::UArmourResourceComponent() {
    this->MaxTickets = 1;
    this->Resistance = 30.00f;
    this->RemainingTickets = 1;
}

