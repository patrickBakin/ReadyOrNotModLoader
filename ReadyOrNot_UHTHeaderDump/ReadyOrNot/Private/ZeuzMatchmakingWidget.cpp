#include "ZeuzMatchmakingWidget.h"

void UZeuzMatchmakingWidget::TryConnectServer(const FString& ConnectIp) {
}

void UZeuzMatchmakingWidget::StopPartyMatchmaking() {
}

void UZeuzMatchmakingWidget::StopMatchmaking() {
}

void UZeuzMatchmakingWidget::StartPartyMatchmaking() {
}

void UZeuzMatchmakingWidget::StartMatchmaking(const FString& Region) {
}

void UZeuzMatchmakingWidget::ResetMatchmaking() {
}

void UZeuzMatchmakingWidget::OnZeuzMatchmakingUpdate(const FZeuzMatchMakingStatus& Status, const FString& Error) {
}

void UZeuzMatchmakingWidget::OnZeuzMatchmakingCreate(const FZeuzMatchMakingStatus& Status, const FString& Error) {
}

void UZeuzMatchmakingWidget::MatchmakingUpdate() {
}

UZeuzMatchmakingWidget::UZeuzMatchmakingWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MatchmakingStatus = EMatchmakingStatus::MS_None;
}

