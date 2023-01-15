#include "TugOfWarButton.h"

class AActor;
class ACharacter;
class APlayerCharacter;
class APlayerState;

void ATugOfWarButton::OnInfluencerStunned(APlayerCharacter* StunnedCharacter, float Duration, EStunType StunType, AActor* DamageCauser) {
}

void ATugOfWarButton::OnInfluencerKilled(AActor* Causer, ACharacter* InstigatorCharacter, ACharacter* KilledCharacter, const FDamageEvent& DamageEvent, APlayerState* LastPlayerState) {
}

void ATugOfWarButton::OnInfluencerArrested(APlayerCharacter* ArrestedCharacter, APlayerCharacter* InstigatorCharacter) {
}

ATugOfWarButton::ATugOfWarButton() {
    this->OnlyTeamUse = ETeamType::TT_NONE;
    this->Mover = NULL;
    this->CurrentUser = NULL;
}

