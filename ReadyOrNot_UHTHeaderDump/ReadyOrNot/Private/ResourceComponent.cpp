#include "ResourceComponent.h"
#include "Net/UnrealNetwork.h"

void UResourceComponent::UpdatePreviousResource() {
}

void UResourceComponent::ToggleUnlimitedResource() {
}

void UResourceComponent::SetUnlimitedResource(const bool bEnabled) {
}

void UResourceComponent::SetResource(const float NewResourceAmount) {
}

void UResourceComponent::SetMaxResource(const float NewMaxResource) {
}

void UResourceComponent::SetCurrentResourceToMax() {
}

void UResourceComponent::Server_UpdatePreviousResource_Implementation() {
}
bool UResourceComponent::Server_UpdatePreviousResource_Validate() {
    return true;
}

void UResourceComponent::Server_ToggleUnlimitedResource_Implementation() {
}
bool UResourceComponent::Server_ToggleUnlimitedResource_Validate() {
    return true;
}

void UResourceComponent::Server_SetUnlimitedResource_Implementation(bool bEnabled) {
}
bool UResourceComponent::Server_SetUnlimitedResource_Validate(bool bEnabled) {
    return true;
}

void UResourceComponent::Server_SetResource_Implementation(float NewResourceAmount) {
}
bool UResourceComponent::Server_SetResource_Validate(float NewResourceAmount) {
    return true;
}

void UResourceComponent::Server_SetMaxResource_Implementation(float NewMaxResource) {
}
bool UResourceComponent::Server_SetMaxResource_Validate(float NewMaxResource) {
    return true;
}

void UResourceComponent::Server_SetCurrentResourceToMax_Implementation() {
}
bool UResourceComponent::Server_SetCurrentResourceToMax_Validate() {
    return true;
}

void UResourceComponent::Server_ResetResource_Implementation() {
}
bool UResourceComponent::Server_ResetResource_Validate() {
    return true;
}

void UResourceComponent::Server_InitResource_Implementation() {
}
bool UResourceComponent::Server_InitResource_Validate() {
    return true;
}

void UResourceComponent::Server_IncreaseResource_Implementation(float Amount) {
}
bool UResourceComponent::Server_IncreaseResource_Validate(float Amount) {
    return true;
}

void UResourceComponent::Server_EnableUnlimitedResource_Implementation() {
}
bool UResourceComponent::Server_EnableUnlimitedResource_Validate() {
    return true;
}

void UResourceComponent::Server_DisableUnlimitedResource_Implementation() {
}
bool UResourceComponent::Server_DisableUnlimitedResource_Validate() {
    return true;
}

void UResourceComponent::Server_DepleteResource_Implementation() {
}
bool UResourceComponent::Server_DepleteResource_Validate() {
    return true;
}

void UResourceComponent::Server_DecreaseResource_Implementation(float Amount) {
}
bool UResourceComponent::Server_DecreaseResource_Validate(float Amount) {
    return true;
}

void UResourceComponent::ResetResource() {
}

bool UResourceComponent::IsUnlimitedResourceEnabled() const {
    return false;
}

bool UResourceComponent::IsResourceBelow(const float ResourceValue) const {
    return false;
}

bool UResourceComponent::IsResourceAtOrBelow(const float ResourceValue) const {
    return false;
}

bool UResourceComponent::IsResourceAtOrAbove(const float ResourceValue) const {
    return false;
}

bool UResourceComponent::IsResourceAt(const float ResourceValue) const {
    return false;
}

bool UResourceComponent::IsResourceAbove(const float ResourceValue) const {
    return false;
}

bool UResourceComponent::IsLowResource() const {
    return false;
}

bool UResourceComponent::IsHalfResource() const {
    return false;
}

bool UResourceComponent::IsFullResource() const {
    return false;
}

bool UResourceComponent::IsDepleted() const {
    return false;
}

void UResourceComponent::IncreaseResourceByRate(const float Rate) {
}

float UResourceComponent::IncreaseResource_Expression_Implementation(float Amount) const {
    return 0.0f;
}

void UResourceComponent::IncreaseResource(const float Amount) {
}

bool UResourceComponent::HasResource() const {
    return false;
}

FName UResourceComponent::GetResourceName() const {
    return NAME_None;
}

float UResourceComponent::GetPreviousResource() const {
    return 0.0f;
}

float UResourceComponent::GetOriginalMaxResource() const {
    return 0.0f;
}

float UResourceComponent::GetNormalizedResource() const {
    return 0.0f;
}

float UResourceComponent::GetMaxResource() const {
    return 0.0f;
}

float UResourceComponent::GetLowResourceThreshold() const {
    return 0.0f;
}

float UResourceComponent::GetLowResource() const {
    return 0.0f;
}

float UResourceComponent::GetHalfResource() const {
    return 0.0f;
}

float UResourceComponent::GetCurrentResource() const {
    return 0.0f;
}

void UResourceComponent::EnableUnlimitedResource() {
}

void UResourceComponent::DisableUnlimitedResource() {
}

void UResourceComponent::DepleteResource() {
}

void UResourceComponent::DecreaseResourceByRate(const float Rate) {
}

float UResourceComponent::DecreaseResource_Expression_Implementation(float Amount) const {
    return 0.0f;
}

void UResourceComponent::DecreaseResource(const float Amount) {
}

void UResourceComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UResourceComponent, ResourceName);
    DOREPLIFETIME(UResourceComponent, Resource);
    DOREPLIFETIME(UResourceComponent, MaxResource);
    DOREPLIFETIME(UResourceComponent, LowResourceThreshold);
    DOREPLIFETIME(UResourceComponent, OriginalMaxResource);
    DOREPLIFETIME(UResourceComponent, LowResource);
    DOREPLIFETIME(UResourceComponent, PreviousResource);
    DOREPLIFETIME(UResourceComponent, bUnlimited);
}

UResourceComponent::UResourceComponent() {
    this->ResourceName = TEXT("Resource-Generic");
    this->Resource = 100.00f;
    this->MaxResource = 100.00f;
    this->MaxResourceLimit = 1000.00f;
    this->LowResourceThreshold = 0.25f;
    this->OriginalMaxResource = 100.00f;
    this->LowResource = 25.00f;
    this->PreviousResource = 100.00f;
    this->bUnlimited = false;
}

