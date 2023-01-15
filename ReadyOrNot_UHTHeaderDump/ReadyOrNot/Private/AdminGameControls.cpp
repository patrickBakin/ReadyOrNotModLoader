#include "AdminGameControls.h"

class APlayerState;

void UAdminGameControls::KickPlayer(APlayerState* KickingPlayerState, FText reason) {
}

bool UAdminGameControls::IsAdmin() {
    return false;
}

void UAdminGameControls::GetKickablePlayers(TArray<APlayerState*>& KickablePlayers) {
}

UAdminGameControls::UAdminGameControls() : UUserWidget(FObjectInitializer::Get()) {
}

