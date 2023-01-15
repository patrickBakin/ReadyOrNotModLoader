#include "BaseCombatActivity.h"

class AActor;
class UBaseActivity;
class ABaseMagazineWeapon;
class UBaseCombatMoveActivity;
class ACyberneticController;
class AReadyOrNotCharacter;

void UBaseCombatActivity::TrackEnemyKilled(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* KilledCharacter) {
}

void UBaseCombatActivity::TrackEnemyFire(AReadyOrNotCharacter* FromCharacter, ABaseMagazineWeapon* Weapon, FVector fireDirection) {
}

void UBaseCombatActivity::StopScriptedFire() {
}

void UBaseCombatActivity::StopMoveIntoLineOfSight() {
}

void UBaseCombatActivity::StartRunningCombatMove(UBaseCombatMoveActivity* CombatMove) {
}

void UBaseCombatActivity::ScriptedFireAtLocation(FVector InLocation, float InTime, bool bOverrideTarget, float AccuracyPenaltyMultiplier) {
}

void UBaseCombatActivity::ScriptedFireAtActor(AActor* InActor, float InTime, bool bOverrideTarget, float AccuracyPenaltyMultiplier) {
}

void UBaseCombatActivity::PlayDeadStarted(UBaseActivity* Activity, ACyberneticController* Controller) {
}

void UBaseCombatActivity::PlayDeadFinished(UBaseActivity* Activity, ACyberneticController* Controller) {
}

void UBaseCombatActivity::PerformStrafeLogic(float DeltaTime, float Uptime) {
}

void UBaseCombatActivity::PerformNoStrafeLogic(float DeltaTime, float Uptime) {
}

void UBaseCombatActivity::OnTakeDamage(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* DamagedCharacter, AActor* DamageCauser, float Damage, float HealthRemaining) {
}

void UBaseCombatActivity::OnSuicideFakeOutSuccess() {
}

void UBaseCombatActivity::OnStunned(AReadyOrNotCharacter* StunnedCharacter, float Duration, EStunType StunType, AActor* DamageCauser) {
}

void UBaseCombatActivity::OnRequestCoverLandmark() {
}

void UBaseCombatActivity::OnRequestCover() {
}

void UBaseCombatActivity::OnNoCoverFound() {
}

void UBaseCombatActivity::OnCoverLandmarkExit() {
}

void UBaseCombatActivity::OnCoverFound() {
}

void UBaseCombatActivity::OnCoverExit() {
}

void UBaseCombatActivity::MoveIntoLineOfSight(const FVector& ToLocation) {
}

bool UBaseCombatActivity::IsRunningCombatMoveActivity(UClass* Class) const {
    return false;
}

bool UBaseCombatActivity::IsFocusingOnActor(const AActor* InActor) const {
    return false;
}

UBaseCombatMoveActivity* UBaseCombatActivity::GetCombatMoveActivity() const {
    return NULL;
}

void UBaseCombatActivity::FinishCombatMove(bool bSuccess) {
}

void UBaseCombatActivity::EnterStrafeState() {
}

void UBaseCombatActivity::EnterNoStrafeState() {
}

UBaseCombatActivity::UBaseCombatActivity() {
    this->FleeDesire = 0.00f;
    this->TimeSincePerformingAnyCombatMove = 340282346638528859811704183484516925440.00f;
    this->FleeingCombatMove = NULL;
    this->CombatMoveActivity = NULL;
    this->HardCoverCombatMove = NULL;
    this->DuelingCombatMove = NULL;
    this->FlankingCombatMove = NULL;
    this->SuppressionCombatMove = NULL;
    this->PushCombatMove = NULL;
    this->ChargeCombatMove = NULL;
    this->MoveIntoLOSActivity = NULL;
    this->CoverEvaluationCooldown = 3.00f;
    this->CoverLandmarkEvaluationCooldown = 3.00f;
    this->LastTrackedEnemy = NULL;
    this->PickupItemActivity = NULL;
    this->ReloadSafelyActivity = NULL;
    this->PlayDeadActivity = NULL;
    this->CommitSuicideActivity = NULL;
}

