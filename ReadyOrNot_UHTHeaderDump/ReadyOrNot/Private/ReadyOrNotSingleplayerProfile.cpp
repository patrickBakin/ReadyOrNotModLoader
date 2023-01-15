#include "ReadyOrNotSingleplayerProfile.h"

class UReadyOrNotSingleplayerProfile;

UReadyOrNotSingleplayerProfile* UReadyOrNotSingleplayerProfile::CreateNewSingleplayerProfile(const FString& SaveName) {
    return NULL;
}

UReadyOrNotSingleplayerProfile::UReadyOrNotSingleplayerProfile() {
    this->CompletionCount = 0;
}

