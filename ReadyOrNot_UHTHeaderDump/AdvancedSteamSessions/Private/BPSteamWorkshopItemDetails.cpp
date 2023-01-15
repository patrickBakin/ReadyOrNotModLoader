#include "BPSteamWorkshopItemDetails.h"

FBPSteamWorkshopItemDetails::FBPSteamWorkshopItemDetails() {
    this->ResultOfRequest = FBPSteamResult::K_EResultInvalid;
    this->FileType = FBPWorkshopFileType::k_EWorkshopFileTypeCommunity;
    this->CreatorAppID = 0;
    this->ConsumerAppID = 0;
    this->VotesUp = 0;
    this->VotesDown = 0;
    this->CalculatedScore = 0.00f;
    this->bBanned = false;
    this->bAcceptedForUse = false;
    this->bTagsTruncated = false;
}

