#include "CaptureTheFlagGM.h"

class AReadyOrNotCharacter;
class ACTF_FlagSpawnPoint;
class ACTF_Flag;
class APlayerCharacter;

void ACaptureTheFlagGM::OnFlagBearerKilled(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* KilledCharacter) {
}

void ACaptureTheFlagGM::DropFlag() {
}

ACTF_FlagSpawnPoint* ACaptureTheFlagGM::ChooseFlagSpawnPoint() {
    return NULL;
}

void ACaptureTheFlagGM::CaptureFlag(ACTF_Flag* CapturedFlag, APlayerCharacter* NewFlagBearer) {
}

ACaptureTheFlagGM::ACaptureTheFlagGM() {
    this->FlagClassToSpawn = NULL;
    this->Flag = NULL;
}

