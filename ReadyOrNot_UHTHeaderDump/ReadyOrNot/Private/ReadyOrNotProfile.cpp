#include "ReadyOrNotProfile.h"
#include "Templates/SubclassOf.h"

class UReadyOrNotProfile;

void UReadyOrNotProfile::SaveProfile() {
}

void UReadyOrNotProfile::SaveLevelStats(FBasicLevelStats InStats, bool& NewBestRating, bool& NewBestTime) {
}

void UReadyOrNotProfile::ResetProfile() {
}

void UReadyOrNotProfile::LoadLevelStats(FBasicLevelStats& OutStats, ECOOPMode Mode, const FString& MapName) {
}

UReadyOrNotProfile* UReadyOrNotProfile::CreateDefaultSavegame(TSubclassOf<UReadyOrNotProfile> ProfileClass, const FString& LoadSlotName) {
    return NULL;
}

UReadyOrNotProfile::UReadyOrNotProfile() {
    this->SaveSlotName = TEXT("UnspecifiedProfile");
    this->UserIndex = 0;
    this->Cash = 0.00f;
}

