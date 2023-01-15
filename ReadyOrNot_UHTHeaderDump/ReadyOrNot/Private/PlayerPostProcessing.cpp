#include "PlayerPostProcessing.h"
#include "Templates/SubclassOf.h"

class AActor;
class ABaseItem;
class AReadyOrNotCharacter;
class UPostProcessRequirement;
class UPostProcessEffectData;

void UPlayerPostProcessing::StopTaserEffect() {
}

void UPlayerPostProcessing::StopSuppressionEffects() {
}

void UPlayerPostProcessing::StopStingerEffect() {
}

void UPlayerPostProcessing::StopPostProcessEffect_Name(FName EffectName) {
}

void UPlayerPostProcessing::StopPostProcessEffect_FromDataAsset(UPostProcessEffectData* InPostProcessEffectData) {
}

void UPlayerPostProcessing::StopPostProcessEffect(FPostProcessEffect& InPostProcessEffect) {
}

void UPlayerPostProcessing::StopPeppersprayEffect() {
}

void UPlayerPostProcessing::StopInjuryEffects() {
}

void UPlayerPostProcessing::StopHeartbeatEffect() {
}

void UPlayerPostProcessing::StopHealingEffect() {
}

void UPlayerPostProcessing::StopGasEffect() {
}

void UPlayerPostProcessing::StopFlashbangEffect() {
}

void UPlayerPostProcessing::StopDeathEffect() {
}

void UPlayerPostProcessing::StopBleedingEffect() {
}

void UPlayerPostProcessing::StartTaserEffect(AActor* DamageCauser) {
}

void UPlayerPostProcessing::StartSuppressionEffects(AActor* DamageCauser) {
}

void UPlayerPostProcessing::StartStingerEffect(AActor* DamageCauser) {
}

void UPlayerPostProcessing::StartPostProcessEffect_Specific(FPostProcessEffectPlayer& InPostProcessSetting, AActor* DamageCauser) {
}

void UPlayerPostProcessing::StartPostProcessEffect_FromDataAsset(UPostProcessEffectData* InPostProcessEffectData, AActor* DamageCauser) {
}

void UPlayerPostProcessing::StartPostProcessEffect(FPostProcessEffect& InPostProcessEffect, AActor* DamageCauser) {
}

void UPlayerPostProcessing::StartPeppersprayEffect(AActor* DamageCauser) {
}

void UPlayerPostProcessing::StartInjuryEffects(AActor* DamageCauser) {
}

void UPlayerPostProcessing::StartHeartbeatEffect() {
}

void UPlayerPostProcessing::StartHealingEffect() {
}

void UPlayerPostProcessing::StartGasEffect(AActor* DamageCauser) {
}

void UPlayerPostProcessing::StartFlashbangEffect(AActor* DamageCauser) {
}

void UPlayerPostProcessing::StartDeathEffect(AActor* DamageCauser) {
}

void UPlayerPostProcessing::StartBleedingEffect() {
}

void UPlayerPostProcessing::ResetInjuryRadialBlur(float DeltaTime) {
}

void UPlayerPostProcessing::ProcessPostProcessEffect(FPostProcessEffect& InPostProcessEffect, float DeltaTime) {
}

void UPlayerPostProcessing::PlayPostProcessEffect_Name(FName EffectName, AActor* DamageCauser) {
}

void UPlayerPostProcessing::OnSupression(float Strength) {
}

void UPlayerPostProcessing::OnPlayerStunned(AReadyOrNotCharacter* Character, float Duration, EStunType StunType, AActor* DamageCauser) {
}

void UPlayerPostProcessing::OnPlayerKilled(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* KilledCharacter) {
}

void UPlayerPostProcessing::OnItemHolstered(ABaseItem* Item) {
}

void UPlayerPostProcessing::OnItemEquipped(ABaseItem* Item) {
}

void UPlayerPostProcessing::OnFootstep() {
}

void UPlayerPostProcessing::OnFire() {
}

void UPlayerPostProcessing::OnDamageTakenDetails(bool bWasHeadshot, float DamageTaken, float HealthRemaining, bool bBlockedByArmour, bool bBlockedByHelmet) {
}

void UPlayerPostProcessing::OnDamageTaken(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* DamagedCharacter, AActor* DamageCauser, float Damage, float HealthRemaining) {
}

void UPlayerPostProcessing::OnBulletImpact(float DirectionForward, float DirectionRight) {
}

bool UPlayerPostProcessing::IsPostProcessEffectPlaying(UPostProcessEffectData* InPostProcessEffectData) const {
    return false;
}

int32 UPlayerPostProcessing::InitializePostProcessFloatParam(const FPostProcessEffect& InPostProcessEffect, const FName& InParameterName, float Value, int32 Instance, int32 CurveKey) {
    return 0;
}

int32 UPlayerPostProcessing::GetPostProcessFromFloatParam(const FPostProcessEffect& InPostProcessEffect, const FName& InParameterName, int32 Instance) {
    return 0;
}

bool UPlayerPostProcessing::FulfillsAllRequirements(const TArray<TSubclassOf<UPostProcessRequirement>>& InRequirementClasses, AActor* InDamageCauser, bool bForceFulfillment) {
    return false;
}

void UPlayerPostProcessing::FlashOnDeath() {
}

void UPlayerPostProcessing::FadeToGrey() {
}

UPlayerPostProcessing::UPlayerPostProcessing() {
    this->OwningCharacter = NULL;
    this->RecentDamageCauser = NULL;
}

