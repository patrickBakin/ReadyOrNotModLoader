#include "RChatMessage.h"

FRChatMessage::FRChatMessage() {
    this->SenderPlayerState = NULL;
    this->AssociatedTeam = ETeamType::TT_NONE;
    this->bKillfeed = false;
    this->bCommand = false;
    this->TargetPlayerController = NULL;
    this->TargetTeam = ETeamType::TT_NONE;
}

