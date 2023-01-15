#include "TakeCoverAtLandmarkActivity.h"

class AActor;
class ABaseMagazineWeapon;
class AReadyOrNotCharacter;

void UTakeCoverAtLandmarkActivity::TickMoveToLandmarkState(float DeltaTime, float Uptime) {
}

void UTakeCoverAtLandmarkActivity::Tick_Wait_State(float DeltaTime, float Uptime) {
}

void UTakeCoverAtLandmarkActivity::Tick_ExitLandmark_State(float DeltaTime, float Uptime) {
}

void UTakeCoverAtLandmarkActivity::Tick_EnterLandmark_State(float DeltaTime, float Uptime) {
}

void UTakeCoverAtLandmarkActivity::Tick_AbruptExit_State(float DeltaTime, float Uptime) {
}

bool UTakeCoverAtLandmarkActivity::ShouldWait() const {
    return false;
}

void UTakeCoverAtLandmarkActivity::OnTakeDamage(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* DamagedCharacter, AActor* DamageCauser, float Damage, float HealthRemaining) {
}

void UTakeCoverAtLandmarkActivity::OnStunned(AReadyOrNotCharacter* StunnedCharacter, float Duration, EStunType StunType, AActor* DamageCauser) {
}

void UTakeCoverAtLandmarkActivity::OnHeardYell(AReadyOrNotCharacter* Shouter, bool bLOS) {
}

void UTakeCoverAtLandmarkActivity::OnEnemyWeaponFire(AReadyOrNotCharacter* Character, ABaseMagazineWeapon* Weapon, FVector fireDirection) {
}

void UTakeCoverAtLandmarkActivity::EnterMoveToLandmarkState() {
}

void UTakeCoverAtLandmarkActivity::Enter_Wait_State() {
}

void UTakeCoverAtLandmarkActivity::Enter_ExitLandmark_State() {
}

void UTakeCoverAtLandmarkActivity::Enter_EnterLandmark_State() {
}

void UTakeCoverAtLandmarkActivity::Enter_AbruptExit_State() {
}

bool UTakeCoverAtLandmarkActivity::CanExitLandmark() const {
    return false;
}

bool UTakeCoverAtLandmarkActivity::CanEnterLandmark() const {
    return false;
}

bool UTakeCoverAtLandmarkActivity::CanAbruptlyExit() const {
    return false;
}

UTakeCoverAtLandmarkActivity::UTakeCoverAtLandmarkActivity() {
    this->CoverLandmark = NULL;
    this->ChosenEntryProxy = NULL;
    this->ChosenExitProxy = NULL;
    this->SearchRadius = 1000.00f;
    this->InitialWaitDuration = 30.00f;
    this->SWATSeenLandmarkWaitDuration = 5.00f;
    this->EntryAnim = NULL;
    this->ExitAnim = NULL;
    this->LoopEntryAnim = NULL;
    this->LoopExitAnim = NULL;
}

