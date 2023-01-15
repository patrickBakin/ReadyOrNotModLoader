#include "MainMenuGM.h"

void AMainMenuGM::ShowMainMenuMsg() {
}

void AMainMenuGM::OnLobbySuccess() {
}

void AMainMenuGM::OnLobbyFailed() {
}

void AMainMenuGM::OnFindSessionSuccess(const TArray<FBlueprintSessionResult>& Results) {
}

void AMainMenuGM::OnFindSessionFailed(const TArray<FBlueprintSessionResult>& Results) {
}

void AMainMenuGM::OnDestroySessionBeforeStartingLobby() {
}

void AMainMenuGM::OnBanStatusChecked(const FString& SteamId, bool bIsBanned, const FString& BanReason, bool bIsMySteamId) {
}

void AMainMenuGM::GoToLobby(bool bOnlineMode, bool bFriendsOnly) {
}

void AMainMenuGM::FindOnlineSession(bool bNewSearch, bool bPVPSession) {
}

void AMainMenuGM::FindNextSessionList() {
}


void AMainMenuGM::CancelSessionSearch() {
}

AMainMenuGM::AMainMenuGM() {
    this->MainMenuMusic = NULL;
    this->MainMenuAmbience = NULL;
    this->AuthenticationMenu = NULL;
    this->MainMenu = NULL;
}

