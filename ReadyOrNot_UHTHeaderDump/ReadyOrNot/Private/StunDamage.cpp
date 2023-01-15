#include "StunDamage.h"

class AActor;
class AController;
class AReadyOrNotCharacter;

void UStunDamage::ScriptedStunEvent(AReadyOrNotCharacter* Victim, float& Damage, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser) const {
}

UStunDamage::UStunDamage() {
    this->bProjectileStun = false;
    this->StunShake = NULL;
    this->HitMontage_3P = NULL;
    this->AppliedSpeed = 0.00f;
    this->MaxMovementSpeedWhenStunned = 1.00f;
    this->DoorDamageMultiplier = 1.00f;
    this->bDamageAllDoorPiecesAtOnce = false;
    this->bCanPushDoorWithForce = false;
    this->DoorPushScale = 1.00f;
    this->ImpactSound = NULL;
    this->StunType = EStunType::ST_None;
    this->bPlayAudioWhenHit = false;
    this->StunSoundEffect = NULL;
    this->bCauseHealthDamage = false;
    this->bCausesSuppression = false;
    this->bBreaksDestructibles = true;
    this->SuppressionAmount = 0.00f;
    this->SuppressionCameraShake = NULL;
    this->bMustBeLookingAtDamageCauser = false;
    this->bStunLocksAim = false;
    this->StunSpeedMultiplier = 1.00f;
    this->WeaponDownLengthOnStun = 2.00f;
    this->bNonLethal = false;
    this->LessThanLethalAmount = 1.00f;
    this->AdditionalUpcloseDamageIncrease = 0.00f;
    this->AdditionalHeadDamageIncrease = 0.00f;
    this->bSwatAIIsAbuse = false;
    this->bChildAIIsAbuse = false;
    this->bCompliantIsAbuse = false;
    this->bArrestedIsAbuse = false;
}

