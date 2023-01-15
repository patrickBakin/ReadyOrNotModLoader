#include "DoorRam.h"

class ADoor;
class APlayerCharacter;

FHitResult ADoorRam::TryGetHitPosition() const {
    return FHitResult{};
}

void ADoorRam::Server_StrikePlayer_Implementation(APlayerCharacter* TargetPlayer) {
}
bool ADoorRam::Server_StrikePlayer_Validate(APlayerCharacter* TargetPlayer) {
    return true;
}

void ADoorRam::Server_StrikeDoor_Implementation(ADoor* TargetDoor) {
}
bool ADoorRam::Server_StrikeDoor_Validate(ADoor* TargetDoor) {
    return true;
}

void ADoorRam::OnBatteringRamHit() {
}

bool ADoorRam::CanHitActor(const FHitResult& TestHit) const {
    return false;
}

ADoorRam::ADoorRam() {
    this->MaxHitDistance = 50.00f;
    this->RamDamageTypeDefault = NULL;
    this->RamDamageTypeCrumble = NULL;
    this->RamDamageTypePlayer = NULL;
    this->StrikePlayerDamage = 200.00f;
}

