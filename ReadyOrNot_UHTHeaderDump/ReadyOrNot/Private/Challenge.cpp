#include "Challenge.h"

class UReadyOrNotProfile;

void UChallenge::UpdateFromProfile(UReadyOrNotProfile* Profile) {
}

void UChallenge::ResetChallengeProgress() {
}



void UChallenge::IncrementChallengeProgress(int32 IncrementBy) {
}

void UChallenge::DecrementChallengeProgress(int32 DecrementBy) {
}

UChallenge::UChallenge() {
    this->ChallengeProgressCurrent = 0;
    this->ChallengeProgressMax = 0;
    this->bHiddenChallenge = false;
    this->bChallengeComplete = false;
    this->bLevelSpecificChallenge = false;
}

