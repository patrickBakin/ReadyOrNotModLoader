#include "MissionPortal.h"
#include "Net/UnrealNetwork.h"
#include "InteractableComponent.h"

void AMissionPortal::SetSelectedMode(FName InMode) {
}

void AMissionPortal::SetSelectedMission(const FString& InMissionURL) {
}

void AMissionPortal::OnRep_MissionURL() {
}

bool AMissionPortal::IsMissionStarting(bool& bStarting, float& Countdown) {
    return false;
}

bool AMissionPortal::IsLevelUnlocked(const FString& InUrl, bool& OutbUnlocked, float& OutScoreRequired, FString& OutLockedURl) {
    return false;
}

bool AMissionPortal::IsGameModeSelectable(ECOOPMode InMode) {
    return false;
}

bool AMissionPortal::GetSelectedModeName(FString& OutName) {
    return false;
}

bool AMissionPortal::GetSelectedMode(FString& OutMode) {
    return false;
}

void AMissionPortal::GetSelectedMission(FString& OutMissionURL) {
}

bool AMissionPortal::GetPlayersReady(int32& Ready, int32& Total) {
    return false;
}

bool AMissionPortal::GetAutostartCountdown(float& Countdown) {
    return false;
}

bool AMissionPortal::DoesLevelExistInBuild(const FString& InUrl) {
    return false;
}

void AMissionPortal::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMissionPortal, bUseCountdown);
    DOREPLIFETIME(AMissionPortal, LobbyAutoStartCountdown);
    DOREPLIFETIME(AMissionPortal, MinPlayersForAutostart);
    DOREPLIFETIME(AMissionPortal, MissionURL);
    DOREPLIFETIME(AMissionPortal, ModeURL);
}

AMissionPortal::AMissionPortal() {
    this->InteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("Interactable Component"));
    this->Profile = NULL;
    this->WhiteboardText = NULL;
    this->bUseCountdown = false;
    this->LobbyAutoStartCountdown = 300.00f;
    this->MinPlayersForAutostart = 0.00f;
}

