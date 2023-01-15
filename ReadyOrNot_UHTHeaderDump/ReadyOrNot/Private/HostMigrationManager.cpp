#include "HostMigrationManager.h"

void UHostMigrationManager::SaveState() {
}

void UHostMigrationManager::ReturnToMainMenu() {
}

void UHostMigrationManager::OnMigrationSessionFoundSuccess(const TArray<FBlueprintSessionResult>& Results) {
}

void UHostMigrationManager::OnMigrationSessionFoundFailed(const TArray<FBlueprintSessionResult>& Results) {
}

void UHostMigrationManager::OnLobbySuccess() {
}

void UHostMigrationManager::FindMigrationSession() {
}

void UHostMigrationManager::CreateMigrationSession() {
}

UHostMigrationManager::UHostMigrationManager() {
    this->NextHost = NULL;
    this->ExpectedPlayerCount = 0;
}

