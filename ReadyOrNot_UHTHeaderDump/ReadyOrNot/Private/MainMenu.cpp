#include "MainMenu.h"

bool UMainMenu::IsLoggedIn() const {
    return false;
}

FText UMainMenu::GetVersion() const {
    return FText::GetEmpty();
}

FText UMainMenu::GetPublicLobbyCooldown() const {
    return FText::GetEmpty();
}

FText UMainMenu::GetBackEndConnectionStatus(ELoginState LoginState) const {
    return FText::GetEmpty();
}

bool UMainMenu::CanPlayPublicLobby() const {
    return false;
}

bool UMainMenu::CanFindSession(bool bCOOP) const {
    return false;
}

UMainMenu::UMainMenu() : UUserWidget(FObjectInitializer::Get()) {
    this->VersionPrefix = TEXT("Ready or Not Early Access");
    this->BackgroundCanvas = NULL;
    this->PlayBtn = NULL;
    this->FindCOOPSessionBtn = NULL;
    this->FindCOOPSessionCancelBtn = NULL;
    this->FindPVPSessionBtn = NULL;
    this->FindPVPSessionCancelBtn = NULL;
    this->OptionsBtn = NULL;
    this->BugsBtn = NULL;
    this->QuitBtn = NULL;
    this->PlaySinglePlayerBtn = NULL;
    this->PlayPublicLobbyBtn = NULL;
    this->PlayFriendsOnlyBtn = NULL;
    this->Txt_BackEndConnection = NULL;
    this->Txt_PublicLobbyCooldown = NULL;
    this->bEnableFindSessionCOOPButton = false;
    this->bEnableFindSessionPVPButton = false;
}

