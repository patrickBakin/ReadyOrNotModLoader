#include "PlayDeadActivity.h"

class AActor;
class AReadyOrNotCharacter;

void UPlayDeadActivity::OnStunned(AReadyOrNotCharacter* StunnedCharacter, float Duration, EStunType StunType, AActor* DamageCauser) {
}

void UPlayDeadActivity::OnHeardYell(AReadyOrNotCharacter* Shouter, bool bLOS) {
}

void UPlayDeadActivity::OnDamaged(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* DamagedCharacter, AActor* DamageCauser, float Damage, float HealthRemaining) {
}

UPlayDeadActivity::UPlayDeadActivity() {
}

