#include "ReadyOrNotGameplayEffect.h"

class AActor;

void UReadyOrNotGameplayEffect::Server_ResetEffect_Implementation(bool bMulticast) {
}
bool UReadyOrNotGameplayEffect::Server_ResetEffect_Validate(bool bMulticast) {
    return true;
}

void UReadyOrNotGameplayEffect::Server_Initialize_Implementation(AActor* InActor, bool bMulticast) {
}
bool UReadyOrNotGameplayEffect::Server_Initialize_Validate(AActor* InActor, bool bMulticast) {
    return true;
}

void UReadyOrNotGameplayEffect::Server_ApplyEffectFor_Implementation(float Seconds, bool bMulticast) {
}
bool UReadyOrNotGameplayEffect::Server_ApplyEffectFor_Validate(float Seconds, bool bMulticast) {
    return true;
}

void UReadyOrNotGameplayEffect::Server_ApplyEffect_Implementation(bool bMulticast) {
}
bool UReadyOrNotGameplayEffect::Server_ApplyEffect_Validate(bool bMulticast) {
    return true;
}

void UReadyOrNotGameplayEffect::ResetEffect_Implementation() {
}

void UReadyOrNotGameplayEffect::OnEffectExpired_Implementation() {
}

void UReadyOrNotGameplayEffect::Multicast_ResetEffect_Implementation() {
}

void UReadyOrNotGameplayEffect::Multicast_Initialize_Implementation(AActor* InActor) {
}

void UReadyOrNotGameplayEffect::Multicast_ApplyEffectFor_Implementation(float Seconds) {
}

void UReadyOrNotGameplayEffect::Multicast_ApplyEffect_Implementation() {
}

void UReadyOrNotGameplayEffect::Initialize_Implementation(AActor* InActor) {
}

void UReadyOrNotGameplayEffect::ApplyEffectFor(float Seconds) {
}

void UReadyOrNotGameplayEffect::ApplyEffect_Implementation() {
}

UReadyOrNotGameplayEffect::UReadyOrNotGameplayEffect() {
    this->Actor = NULL;
    this->World = NULL;
}

