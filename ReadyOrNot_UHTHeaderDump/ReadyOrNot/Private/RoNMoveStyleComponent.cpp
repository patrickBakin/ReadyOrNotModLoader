#include "RoNMoveStyleComponent.h"
#include "Net/UnrealNetwork.h"

void URoNMoveStyleComponent::SetOverrideMoveStyleByName(FName Name) {
}

void URoNMoveStyleComponent::SetMovementStyleByName(FName Name) {
}

bool URoNMoveStyleComponent::SetMovementGaitByName(FName Name, bool bForce) {
    return false;
}

void URoNMoveStyleComponent::SetCharacterSpeedMultiplier(float Multiplier) {
}

void URoNMoveStyleComponent::SetCharacterSpeed(float Speed) {
}

void URoNMoveStyleComponent::SetCharacterAccelerationMultiplier(float Multiplier) {
}

void URoNMoveStyleComponent::SetCharacterAcceleration(float Acceleration) {
}

void URoNMoveStyleComponent::OnRep_MoveStyle() {
}

void URoNMoveStyleComponent::OnRep_IsStrafing() {
}

void URoNMoveStyleComponent::ClearOverrideMoveStyle() {
}

void URoNMoveStyleComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URoNMoveStyleComponent, Rep_MoveStyleName);
    DOREPLIFETIME(URoNMoveStyleComponent, ActiveGaitIndex);
    DOREPLIFETIME(URoNMoveStyleComponent, ActiveGaitName);
    DOREPLIFETIME(URoNMoveStyleComponent, bIsStrafing);
}

URoNMoveStyleComponent::URoNMoveStyleComponent() {
    this->MoveStyleDatabase = NULL;
    this->DefaultMoveStyleName = TEXT("male01_shared_unarmed");
    this->DefaulGaitName = TEXT("Walk");
    this->bIsOverriding = 0;
    this->ActiveGaitIndex = 0;
    this->GaitTimeOut = 0.00f;
    this->bIsStrafing = false;
}

