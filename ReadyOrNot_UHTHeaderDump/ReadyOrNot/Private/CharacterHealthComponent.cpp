#include "CharacterHealthComponent.h"
#include "Net/UnrealNetwork.h"

void UCharacterHealthComponent::UseAllLimbTickets(const ELimbType& Limb) {
}

void UCharacterHealthComponent::UpdatePreviousLimbHealth(const ELimbType& Limb) {
}

void UCharacterHealthComponent::SetReviveHealth(const float NewReviveHealth) {
}

void UCharacterHealthComponent::SetRemainingRevives(const int32 NewRemainingRevives) {
}

void UCharacterHealthComponent::SetMaxLimbHealth(const ELimbType& Limb, const float NewMaxHealth) {
}

void UCharacterHealthComponent::SetLimbHealth(const ELimbType& Limb, const float NewHealthAmount) {
}

void UCharacterHealthComponent::SetHealthStatus(EPlayerHealthStatus NewHealthStatus) {
}

void UCharacterHealthComponent::SetCurrentLimbHealthToMax(const ELimbType& Limb) {
}

void UCharacterHealthComponent::Server_UseAllRemainingLimbTickets_Implementation(const ELimbType& Limb) {
}
bool UCharacterHealthComponent::Server_UseAllRemainingLimbTickets_Validate(const ELimbType& Limb) {
    return true;
}

void UCharacterHealthComponent::Server_UpdatePreviousLimbHealth_Implementation(const ELimbType& Limb) {
}
bool UCharacterHealthComponent::Server_UpdatePreviousLimbHealth_Validate(const ELimbType& Limb) {
    return true;
}

void UCharacterHealthComponent::Server_SetReviveHealth_Implementation(float NewReviveHealth) {
}
bool UCharacterHealthComponent::Server_SetReviveHealth_Validate(float NewReviveHealth) {
    return true;
}

void UCharacterHealthComponent::Server_SetRemainingRevives_Implementation(int32 NewRemainingRevives) {
}
bool UCharacterHealthComponent::Server_SetRemainingRevives_Validate(int32 NewRemainingRevives) {
    return true;
}

void UCharacterHealthComponent::Server_SetMaxLimbHealth_Implementation(const ELimbType& Limb, float NewMaxHealth) {
}
bool UCharacterHealthComponent::Server_SetMaxLimbHealth_Validate(const ELimbType& Limb, float NewMaxHealth) {
    return true;
}

void UCharacterHealthComponent::Server_SetLimbHealth_Implementation(const ELimbType& Limb, float NewHealthAmount) {
}
bool UCharacterHealthComponent::Server_SetLimbHealth_Validate(const ELimbType& Limb, float NewHealthAmount) {
    return true;
}

void UCharacterHealthComponent::Server_SetHealthStatus_Implementation(EPlayerHealthStatus NewHealthStatus) {
}
bool UCharacterHealthComponent::Server_SetHealthStatus_Validate(EPlayerHealthStatus NewHealthStatus) {
    return true;
}

void UCharacterHealthComponent::Server_SetCurrentLimbHealthToMax_Implementation(const ELimbType& Limb) {
}
bool UCharacterHealthComponent::Server_SetCurrentLimbHealthToMax_Validate(const ELimbType& Limb) {
    return true;
}

void UCharacterHealthComponent::Server_ResetRevives_Implementation() {
}
bool UCharacterHealthComponent::Server_ResetRevives_Validate() {
    return true;
}

void UCharacterHealthComponent::Server_ResetReviveHealth_Implementation() {
}
bool UCharacterHealthComponent::Server_ResetReviveHealth_Validate() {
    return true;
}

void UCharacterHealthComponent::Server_ResetLimbTickets_Implementation(const ELimbType& Limb) {
}
bool UCharacterHealthComponent::Server_ResetLimbTickets_Validate(const ELimbType& Limb) {
    return true;
}

void UCharacterHealthComponent::Server_ResetLimbHealth_Implementation(const ELimbType& Limb) {
}
bool UCharacterHealthComponent::Server_ResetLimbHealth_Validate(const ELimbType& Limb) {
    return true;
}

void UCharacterHealthComponent::Server_ResetAllLimbTickets_Implementation() {
}
bool UCharacterHealthComponent::Server_ResetAllLimbTickets_Validate() {
    return true;
}

void UCharacterHealthComponent::Server_ResetAllLimbHealth_Implementation() {
}
bool UCharacterHealthComponent::Server_ResetAllLimbHealth_Validate() {
    return true;
}

void UCharacterHealthComponent::Server_IncreaseReviveHealth_Implementation(float Amount) {
}
bool UCharacterHealthComponent::Server_IncreaseReviveHealth_Validate(float Amount) {
    return true;
}

void UCharacterHealthComponent::Server_IncreaseRevive_Implementation() {
}
bool UCharacterHealthComponent::Server_IncreaseRevive_Validate() {
    return true;
}

void UCharacterHealthComponent::Server_IncreaseLimbTickets_Implementation(const ELimbType& Limb, int32 Amount) {
}
bool UCharacterHealthComponent::Server_IncreaseLimbTickets_Validate(const ELimbType& Limb, int32 Amount) {
    return true;
}

void UCharacterHealthComponent::Server_IncreaseLimbHealth_Implementation(const ELimbType& Limb, float Amount) {
}
bool UCharacterHealthComponent::Server_IncreaseLimbHealth_Validate(const ELimbType& Limb, float Amount) {
    return true;
}

void UCharacterHealthComponent::Server_HalfMaxLimbHealth_Implementation(const ELimbType& Limb) {
}
bool UCharacterHealthComponent::Server_HalfMaxLimbHealth_Validate(const ELimbType& Limb) {
    return true;
}

void UCharacterHealthComponent::Server_DecreaseReviveHealth_Implementation(float Amount) {
}
bool UCharacterHealthComponent::Server_DecreaseReviveHealth_Validate(float Amount) {
    return true;
}

void UCharacterHealthComponent::Server_DecreaseRevive_Implementation() {
}
bool UCharacterHealthComponent::Server_DecreaseRevive_Validate() {
    return true;
}

void UCharacterHealthComponent::Server_DecreaseLimbTickets_Implementation(const ELimbType& Limb, int32 Amount) {
}
bool UCharacterHealthComponent::Server_DecreaseLimbTickets_Validate(const ELimbType& Limb, int32 Amount) {
    return true;
}

void UCharacterHealthComponent::Server_DecreaseLimbHealth_Implementation(const ELimbType& Limb, float Amount) {
}
bool UCharacterHealthComponent::Server_DecreaseLimbHealth_Validate(const ELimbType& Limb, float Amount) {
    return true;
}

void UCharacterHealthComponent::ResetRevives() {
}

void UCharacterHealthComponent::ResetReviveHealth() {
}

void UCharacterHealthComponent::ResetLimbTickets(const ELimbType& Limb) {
}

void UCharacterHealthComponent::ResetLimbHealth(const ELimbType& Limb) {
}

void UCharacterHealthComponent::ResetAllLimbTickets() {
}

void UCharacterHealthComponent::ResetAllLimbHealth() {
}

bool UCharacterHealthComponent::IsUsingUnlimitedRevives() const {
    return false;
}

bool UCharacterHealthComponent::IsReviveHealthDepleted() const {
    return false;
}

bool UCharacterHealthComponent::IsLimbNoHealth(const ELimbType& Limb) const {
    return false;
}

bool UCharacterHealthComponent::IsLimbLowHealth(const ELimbType& Limb) const {
    return false;
}

bool UCharacterHealthComponent::IsLimbHealthBelow(const ELimbType& Limb, float HealthValue) const {
    return false;
}

bool UCharacterHealthComponent::IsLimbHealthAtOrBelow(const ELimbType& Limb, float HealthValue) const {
    return false;
}

bool UCharacterHealthComponent::IsLimbHealthAtOrAbove(const ELimbType& Limb, float HealthValue) const {
    return false;
}

bool UCharacterHealthComponent::IsLimbHealthAt(const ELimbType& Limb, float HealthValue) const {
    return false;
}

bool UCharacterHealthComponent::IsLimbHealthAbove(const ELimbType& Limb, float HealthValue) const {
    return false;
}

bool UCharacterHealthComponent::IsLimbFullHealth(const ELimbType& Limb) const {
    return false;
}

bool UCharacterHealthComponent::IsLimbEqualTo(const FLimbHealthData& InLimbHealthData, const FLimbHealthData& OtherLimbHealthData) {
    return false;
}

bool UCharacterHealthComponent::IsLimbBroken(const ELimbType& Limb) const {
    return false;
}

bool UCharacterHealthComponent::IsIncapacitationEnabled() const {
    return false;
}

bool UCharacterHealthComponent::IsIncapacitated() const {
    return false;
}

bool UCharacterHealthComponent::IsAnyLimbBroken(ELimbType& OutLimbType) const {
    return false;
}

bool UCharacterHealthComponent::IsAnyLimbBelowFullHealth(ELimbType& OutLimbType) const {
    return false;
}

bool UCharacterHealthComponent::IsAnyLimbAtNoHealth(ELimbType& OutLimbType) const {
    return false;
}

void UCharacterHealthComponent::IncreaseReviveHealth(const float Amount) {
}

void UCharacterHealthComponent::IncreaseRevive() {
}

void UCharacterHealthComponent::IncreaseLimbTickets(const ELimbType& Limb, const int32 Amount) {
}

void UCharacterHealthComponent::IncreaseLimbHealth(const ELimbType& Limb, const float Amount) {
}

bool UCharacterHealthComponent::HalfMaxLimbHealth(const ELimbType& Limb) {
    return false;
}

FLimbHealthData UCharacterHealthComponent::GetRightLegHealth_Copy() const {
    return FLimbHealthData{};
}

FLimbHealthData UCharacterHealthComponent::GetRightArmHealth_Copy() const {
    return FLimbHealthData{};
}

float UCharacterHealthComponent::GetReviveOperatingTime() const {
    return 0.0f;
}

float UCharacterHealthComponent::GetRemainingReviveTime() const {
    return 0.0f;
}

int32 UCharacterHealthComponent::GetRemainingRevives() const {
    return 0;
}

float UCharacterHealthComponent::GetRemainingReviveHealth() const {
    return 0.0f;
}

int32 UCharacterHealthComponent::GetMaxRevives() const {
    return 0;
}

float UCharacterHealthComponent::GetMaxReviveHealth() const {
    return 0.0f;
}

FLimbHealthData UCharacterHealthComponent::GetLimb_Copy(const ELimbType& Limb) const {
    return FLimbHealthData{};
}

FLimbHealthData UCharacterHealthComponent::GetLeftLegHealth_Copy() const {
    return FLimbHealthData{};
}

FLimbHealthData UCharacterHealthComponent::GetLeftArmHealth_Copy() const {
    return FLimbHealthData{};
}

EPlayerHealthStatus UCharacterHealthComponent::GetHealthStatus() const {
    return EPlayerHealthStatus::HS_Healthy;
}

FLimbHealthData UCharacterHealthComponent::GetHeadHealth_Copy() const {
    return FLimbHealthData{};
}

TArray<ELimbType> UCharacterHealthComponent::GetBrokenLimbs() const {
    return TArray<ELimbType>();
}

void UCharacterHealthComponent::DecreaseReviveHealth(const float Amount) {
}

void UCharacterHealthComponent::DecreaseRevive() {
}

void UCharacterHealthComponent::DecreaseLimbTickets(const ELimbType& Limb, const int32 Amount) {
}

void UCharacterHealthComponent::DecreaseLimbHealth(const ELimbType& Limb, const float Amount) {
}

bool UCharacterHealthComponent::CanUseReviveSystem() const {
    return false;
}

void UCharacterHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCharacterHealthComponent, HealthStatus);
    DOREPLIFETIME(UCharacterHealthComponent, RightLeg);
    DOREPLIFETIME(UCharacterHealthComponent, LeftLeg);
    DOREPLIFETIME(UCharacterHealthComponent, RightArm);
    DOREPLIFETIME(UCharacterHealthComponent, LeftArm);
    DOREPLIFETIME(UCharacterHealthComponent, Head);
    DOREPLIFETIME(UCharacterHealthComponent, bUnlimitedRevives);
    DOREPLIFETIME(UCharacterHealthComponent, MaxRevives);
    DOREPLIFETIME(UCharacterHealthComponent, ReviveTime);
    DOREPLIFETIME(UCharacterHealthComponent, ReviveTimeDecrement);
    DOREPLIFETIME(UCharacterHealthComponent, ReviveOperatingTime);
    DOREPLIFETIME(UCharacterHealthComponent, MaxReviveHealth);
    DOREPLIFETIME(UCharacterHealthComponent, RemainingRevives);
    DOREPLIFETIME(UCharacterHealthComponent, RemainingReviveTime);
    DOREPLIFETIME(UCharacterHealthComponent, RemainingReviveHealth);
}

UCharacterHealthComponent::UCharacterHealthComponent() {
    this->HealthStatus = EPlayerHealthStatus::HS_Healthy;
    this->bEnableIncapacitation = false;
    this->IncapacitationHealthMultiplier = 2.00f;
    this->bUnlimitedRevives = false;
    this->MaxRevives = 4;
    this->ReviveTime = 20.00f;
    this->ReviveTimeDecrement = 5.00f;
    this->ReviveOperatingTime = 5.00f;
    this->MaxReviveHealth = 150.00f;
    this->RemainingRevives = 4;
    this->RemainingReviveTime = 20.00f;
    this->RemainingReviveHealth = 50.00f;
}

