#include "TakeCoverActivity.h"

class AActor;
class ABaseMagazineWeapon;
class AReadyOrNotCharacter;

void UTakeCoverActivity::TickMoveToCoverState(float DeltaTime, float Uptime) {
}

void UTakeCoverActivity::TickCoverState(float DeltaTime, float Uptime) {
}

void UTakeCoverActivity::TickCoverFireState(float DeltaTime, float Uptime) {
}

void UTakeCoverActivity::OnTakeDamage(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* DamagedCharacter, AActor* DamageCauser, float Damage, float HealthRemaining) {
}

void UTakeCoverActivity::OnStunned(AReadyOrNotCharacter* StunnedCharacter, float Duration, EStunType StunType, AActor* DamageCauser) {
}

void UTakeCoverActivity::OnEnemyWeaponFire(AReadyOrNotCharacter* Character, ABaseMagazineWeapon* Weapon, FVector fireDirection) {
}

void UTakeCoverActivity::ExitCoverState() {
}

void UTakeCoverActivity::ExitCoverFireState() {
}

void UTakeCoverActivity::EnterMoveToCoverState() {
}

void UTakeCoverActivity::EnterCoverState() {
}

void UTakeCoverActivity::EnterCoverFireState() {
}

void UTakeCoverActivity::EnterCompleteState() {
}

bool UTakeCoverActivity::CanStopCoverFire() const {
    return false;
}

bool UTakeCoverActivity::CanFireFromCover() const {
    return false;
}

bool UTakeCoverActivity::CanCover() const {
    return false;
}

bool UTakeCoverActivity::CanCompleteCover() const {
    return false;
}

UTakeCoverActivity::UTakeCoverActivity() {
    this->MaxCoverFireCount = 5;
    this->CoverFireTimeCooldown = 2.00f;
    this->CoverFireCooldown = 3.00f;
    this->Door = NULL;
    this->LastExitMontagePlayed = NULL;
}

