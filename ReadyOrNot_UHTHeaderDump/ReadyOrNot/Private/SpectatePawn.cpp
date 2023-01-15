#include "SpectatePawn.h"
#include "Net/UnrealNetwork.h"

class APlayerCharacter;
class USpectatorCharacterHUD;

void ASpectatePawn::SpectatePreviousPlayer() {
}

void ASpectatePawn::SpectateNextPlayer() {
}

void ASpectatePawn::SetViewTarget(APlayerCharacter* InCharacter) {
}

void ASpectatePawn::SetSpectatorCharacterWidget(USpectatorCharacterHUD* NewHud) {
}

void ASpectatePawn::OnTeamChatPressed_Implementation() {
}

void ASpectatePawn::OnChatPressed_Implementation() {
}

ETeamType ASpectatePawn::GetTeam() {
    return ETeamType::TT_NONE;
}

void ASpectatePawn::EscapeMenu() {
}

void ASpectatePawn::CleanUpOldPlayer_Implementation() {
}

void ASpectatePawn::CenterPrint_Implementation(FName Type, float Duration, APlayerCharacter* Other) {
}

void ASpectatePawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASpectatePawn, Killer);
    DOREPLIFETIME(ASpectatePawn, KilledCharacter);
}

ASpectatePawn::ASpectatePawn() {
    this->bDeadSpectatePawn = false;
    this->bBlendWithViewTarget = false;
    this->bPendingCenterprint = false;
    this->PendingCenterprintDuration = 3.00f;
    this->PendingCenterprintOther = NULL;
    this->HeadcamMaterial = NULL;
    this->HeadcamMaterialInstance = NULL;
    this->SpectateWidget = NULL;
    this->SpectatorHUD = NULL;
    this->bShouldShowViewTargetHUD = false;
    this->CurrentViewTarget = NULL;
    this->PotentialViewTargetCount = 0;
    this->bHideWidgets = false;
    this->Killer = NULL;
    this->KilledCharacter = NULL;
}

