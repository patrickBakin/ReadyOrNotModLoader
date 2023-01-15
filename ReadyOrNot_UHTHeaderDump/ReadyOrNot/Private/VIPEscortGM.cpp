#include "VIPEscortGM.h"

class ACharacter;
class AReadyOrNotCharacter;
class APlayerCharacter;

void AVIPEscortGM::VIPKilled(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* KilledCharacter) {
}

void AVIPEscortGM::VIPFreed(ACharacter* Freed, ACharacter* Freer) {
}

bool AVIPEscortGM::IsVIPDead() {
    return false;
}

bool AVIPEscortGM::IsVIPArrested() {
    return false;
}

bool AVIPEscortGM::IsVIPAlive() {
    return false;
}

APlayerCharacter* AVIPEscortGM::GetVIPCharacter() const {
    return NULL;
}

ETeamType AVIPEscortGM::GetCurrentVIPTeam() const {
    return ETeamType::TT_NONE;
}

AVIPEscortGM::AVIPEscortGM() {
    this->VIPPlayer = NULL;
    this->ChosenVIPSpawn = NULL;
    this->VIPCharacterClass = NULL;
    this->VIPSpawnTag = TEXT("VIP_SPAWN");
    this->TimeToDeliverVIP = 240.00f;
    this->HostageHoldTime = 120.00f;
}

