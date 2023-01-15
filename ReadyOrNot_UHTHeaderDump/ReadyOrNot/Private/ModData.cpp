#include "ModData.h"

bool UModData::IsSubscribed() const {
    return false;
}

bool UModData::IsInstalled() const {
    return false;
}

int32 UModData::GetTotalRatings() const {
    return 0;
}

int32 UModData::GetSubscriptions() const {
    return 0;
}

FString UModData::GetResourceID() const {
    return TEXT("");
}

FString UModData::GetRatingDisplayText() const {
    return TEXT("");
}

int32 UModData::GetPositiveRatings() const {
    return 0;
}

int32 UModData::GetPositiveRatingPercent() const {
    return 0;
}

int32 UModData::GetPopularityRank() const {
    return 0;
}

int32 UModData::GetNegativeRatings() const {
    return 0;
}

FString UModData::GetModURL() const {
    return TEXT("");
}

FString UModData::GetModName() const {
    return TEXT("");
}

FString UModData::GetModAuthor() const {
    return TEXT("");
}

FDateTime UModData::GetLastUpdated() const {
    return FDateTime{};
}

int32 UModData::GetGalleryImageCount() const {
    return 0;
}

int32 UModData::GetDownloadSize() const {
    return 0;
}

int32 UModData::GetDownloads() const {
    return 0;
}

FText UModData::GetDescription() const {
    return FText::GetEmpty();
}

UModData::UModData() {
}

