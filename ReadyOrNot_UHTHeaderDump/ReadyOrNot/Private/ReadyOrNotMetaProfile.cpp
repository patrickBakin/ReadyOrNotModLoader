#include "ReadyOrNotMetaProfile.h"

class UReadyOrNotMetaProfile;

void UReadyOrNotMetaProfile::SaveProfile() {
}

bool UReadyOrNotMetaProfile::IsProfileNameAllowed(const FString& ProfileName) {
    return false;
}

bool UReadyOrNotMetaProfile::DoesSingleplayerProfileExist(const FString& ProfileName) {
    return false;
}

void UReadyOrNotMetaProfile::DeleteSingleplayerProfile(const FString& Profile) {
}

UReadyOrNotMetaProfile* UReadyOrNotMetaProfile::CreateDefaultSavegame(const FString& LoadSlotName) {
    return NULL;
}

UReadyOrNotMetaProfile::UReadyOrNotMetaProfile() {
    this->SaveSlotName = TEXT("MetaProfile");
    this->UserIndex = 0;
    this->CurrentProfile = TEXT("NullProfile");
}

