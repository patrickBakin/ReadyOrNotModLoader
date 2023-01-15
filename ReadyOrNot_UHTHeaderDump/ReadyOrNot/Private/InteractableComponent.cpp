#include "InteractableComponent.h"

class AActor;
class APlayerController;
class APlayerCharacter;

void UInteractableComponent::UpdateTickRate() {
}

void UInteractableComponent::UpdateLOSForDistanceFade() {
}

void UInteractableComponent::SetInteractionIconState(bool bValid) {
}

void UInteractableComponent::SetInteractionIconSize(float InInteractCircleSize, float InInteractIconSize) {
}

void UInteractableComponent::SetAnimatedIconName(const FName& NewIconName) {
}

void UInteractableComponent::ResetToOriginalLocation() {
}

void UInteractableComponent::OnInteract_Implementation(APlayerCharacter* InteractInstigator) {
}

bool UInteractableComponent::IsInteractionEnabledForController(APlayerController* InController) const {
    return false;
}

bool UInteractableComponent::IsInteractionEnabledFor(APlayerCharacter* InCharacter) {
    return false;
}

bool UInteractableComponent::IsIconVisible() const {
    return false;
}

bool UInteractableComponent::IsFocused() const {
    return false;
}

bool UInteractableComponent::IsBeingLookedAt(APlayerController* InPlayerController, float MaxRange, float LookatThreshold, bool bUseActorLocation) {
    return false;
}

bool UInteractableComponent::InputActionNameMatchesAnyValidSlot(FName InInputActionName) {
    return false;
}

bool UInteractableComponent::InputActionNameMatchesAnySlot(FName InInputActionName) {
    return false;
}

AActor* UInteractableComponent::GetUseActor() const {
    return NULL;
}

TArray<APlayerCharacter*> UInteractableComponent::GetPlayersFocusing() const {
    return TArray<APlayerCharacter*>();
}

FVector UInteractableComponent::GetOriginalLocation_Relative() const {
    return FVector{};
}

FVector UInteractableComponent::GetOriginalLocation() const {
    return FVector{};
}

FName UInteractableComponent::GetOriginalIconName() const {
    return NAME_None;
}

float UInteractableComponent::GetDistanceFromPlayer() const {
    return 0.0f;
}

void UInteractableComponent::EnableInteractionFor(APlayerCharacter* InCharacter) {
}

void UInteractableComponent::EnableInteractable() {
}

void UInteractableComponent::DisableInteractionFor(APlayerCharacter* InCharacter) {
}

void UInteractableComponent::DisableInteractable() {
}

bool UInteractableComponent::CanInteract(bool bLog) const {
    return false;
}

bool UInteractableComponent::AnyActionSlotValid() const {
    return false;
}

UInteractableComponent::UInteractableComponent() {
    this->bEnabled = true;
    this->bShowIconWhenActionsLocked = false;
    this->MinShowPromptAtDistance = 0.00f;
    this->ShowPromptAtDistance = 160.00f;
    this->RequiredLookAtPercentage = 0.90f;
    this->InteractCircleSize = 40.00f;
    this->InteractIconSize = 38.00f;
    this->bMustBeLookingAt = true;
    this->bDistanceFadeIcon = true;
    this->bHideUponInteraction = false;
    this->bHideUponPlayerMovement = false;
    this->bImprintIconOnHUDUponInteraction = false;
    this->CurrentProgress = 0.00f;
    this->UseActor = NULL;
    this->bClientInteract = false;
    this->CachedWidgetClass = NULL;
    this->IconWidget = NULL;
    this->ImprintIconWidgetClass = NULL;
    this->IconWidget_Imprint = NULL;
}

