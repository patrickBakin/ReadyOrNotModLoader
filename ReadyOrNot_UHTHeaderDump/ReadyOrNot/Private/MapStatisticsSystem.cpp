#include "MapStatisticsSystem.h"

void AMapStatisticsSystem::StartRecording(const FString& InLevelName, const FString& InGameMode) {
}

bool AMapStatisticsSystem::IsRecording() const {
    return false;
}

FString AMapStatisticsSystem::GetRecordingStatus() const {
    return TEXT("");
}

FGuid AMapStatisticsSystem::GetGameId() const {
    return FGuid{};
}

void AMapStatisticsSystem::EndLevel() {
}

AMapStatisticsSystem::AMapStatisticsSystem() {
}

