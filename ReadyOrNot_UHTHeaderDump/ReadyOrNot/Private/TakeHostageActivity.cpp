#include "TakeHostageActivity.h"

class AActor;
class AReadyOrNotCharacter;

void UTakeHostageActivity::TickTurnState(float DeltaTime, float Uptime) {
}

void UTakeHostageActivity::TickTakingState(float DeltaTime, float Uptime) {
}

void UTakeHostageActivity::TickMoveToState(float DeltaTime, float Uptime) {
}

void UTakeHostageActivity::TickEndHostageTakeState(float DeltaTime, float Uptime) {
}

void UTakeHostageActivity::TickBeginHostageTakeState(float DeltaTime, float Uptime) {
}

bool UTakeHostageActivity::ShouldTurn() const {
    return false;
}

void UTakeHostageActivity::OnTakeDamage(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* DamagedCharacter, AActor* DamageCauser, float Damage, float HealthRemaining) {
}

void UTakeHostageActivity::OnStunned(AReadyOrNotCharacter* StunnedCharacter, float Duration, EStunType StunType, AActor* DamageCauser) {
}

void UTakeHostageActivity::OnSensedCharacter(AReadyOrNotCharacter* SensedCharacter) {
}

void UTakeHostageActivity::OnHostageTakeTurnComplete_Slave(AActor* Actor) {
}

void UTakeHostageActivity::OnHostageTakeTurnComplete_Driver(AActor* Actor) {
}

void UTakeHostageActivity::OnHostageTakeStartComplete_Slave(AActor* Actor) {
}

void UTakeHostageActivity::OnHostageTakeStartComplete_Driver(AActor* Actor) {
}

void UTakeHostageActivity::OnHostageTakeKillComplete_Slave(AActor* Actor) {
}

void UTakeHostageActivity::OnHostageTakeKillComplete_Driver(AActor* Actor) {
}

void UTakeHostageActivity::OnHostageTakeEndComplete_Slave(AActor* Actor) {
}

void UTakeHostageActivity::OnHostageTakeEndComplete_Driver(AActor* Actor) {
}

void UTakeHostageActivity::OnHostageKilled(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* KilledCharacter) {
}

void UTakeHostageActivity::OnHeardYell(AReadyOrNotCharacter* Shouter, bool bLOS) {
}

void UTakeHostageActivity::EnterTurnState() {
}

void UTakeHostageActivity::EnterTakingState() {
}

void UTakeHostageActivity::EnterMoveToState() {
}

void UTakeHostageActivity::EnterEndHostageTakeState() {
}

void UTakeHostageActivity::EnterBeginHostageTakeState() {
}

void UTakeHostageActivity::EndTakingState() {
}

bool UTakeHostageActivity::CanStartHostageTake() const {
    return false;
}

bool UTakeHostageActivity::CanIdle() const {
    return false;
}

bool UTakeHostageActivity::CanEndHostageTake() const {
    return false;
}

UTakeHostageActivity::UTakeHostageActivity() {
    this->Hostage = NULL;
    this->TimeToSurrenderHostage = 30.00f;
    this->LastEnemySensed = NULL;
}

