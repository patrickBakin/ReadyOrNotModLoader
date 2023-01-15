#include "ConversationData.h"

FConversationData::FConversationData() {
    this->bUseVoiceLineFromSpeechTable = false;
    this->VoiceLineWav = NULL;
    this->Speaker = NULL;
    this->AdditionalDelayAfterVoiceLineBeforeNextSpeaker = 0.00f;
    this->TeamType = ETeamType::TT_NONE;
    this->MaxDistance = 0.00f;
    this->bRequireLineOfSight = false;
    this->bOptionalSpeaker = false;
    this->SkipXAfterOptionalSpeakerNotFound = 0;
}

