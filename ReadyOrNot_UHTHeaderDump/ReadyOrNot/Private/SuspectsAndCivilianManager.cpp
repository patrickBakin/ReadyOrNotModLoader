#include "SuspectsAndCivilianManager.h"

class ACyberneticCharacter;
class UWorld;
class ASuspectsAndCivilianManager;

void ASuspectsAndCivilianManager::Server_PlaySharedBarkOrStartConversation_Implementation(const FString& SpeechRow, ACyberneticCharacter* Speaker, float Cooldown) {
}

int32 ASuspectsAndCivilianManager::GetNumActiveSuspects() const {
    return 0;
}

int32 ASuspectsAndCivilianManager::GetNumActiveCivilians() const {
    return 0;
}

ASuspectsAndCivilianManager* ASuspectsAndCivilianManager::Get(UWorld* World) {
    return NULL;
}

ASuspectsAndCivilianManager::ASuspectsAndCivilianManager() {
    this->TimeSinceLastInvestigation = 340282346638528859811704183484516925440.00f;
    this->SuspectPushCooldown = 0.00f;
    this->SuspectInvestigationCooldown = 0.00f;
    this->SuspectFlankCooldown = 0.00f;
}

