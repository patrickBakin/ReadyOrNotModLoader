#include "CommitSuicideActivity.h"

class AActor;
class AReadyOrNotCharacter;

void UCommitSuicideActivity::OnStunned(AReadyOrNotCharacter* StunnedCharacter, float Duration, EStunType StunType, AActor* DamageCauser) {
}

void UCommitSuicideActivity::OnMeleeHitTaken(AReadyOrNotCharacter* InstigatorCharacter) {
}

void UCommitSuicideActivity::OnHeardYell(AReadyOrNotCharacter* Shouter, bool bLOS) {
}

void UCommitSuicideActivity::OnDamaged(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* DamagedCharacter, AActor* DamageCauser, float Damage, float HealthRemaining) {
}

UCommitSuicideActivity::UCommitSuicideActivity() {
}

