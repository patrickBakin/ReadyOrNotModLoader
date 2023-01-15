#include "Conversation.h"

class ACyberneticCharacter;

void UConversation::TryGetSpeakers_Implementation() {
}

bool UConversation::RequirementsMet_Implementation() {
    return false;
}

void UConversation::ReplyToConversation() {
}

void UConversation::GoToSpecificConversationIdAndContinueConversation(int32 Idx) {
}

void UConversation::GiveWorldBuildingActivityByTag(FName SpeakerId, FName Tag) {
}

ACyberneticCharacter* UConversation::GetSpeakerForId(FName ID) {
    return NULL;
}

ACyberneticCharacter* UConversation::GetSpeakerForConversationIdx(int32 Idx) {
    return NULL;
}

FConversationData UConversation::GetConversationData() {
    return FConversationData{};
}

void UConversation::ContinueConversation_Implementation() {
}

void UConversation::BuildConversation_Implementation(FName ID) {
}

void UConversation::BeginConversation_Implementation(ACyberneticCharacter* ConversationStarter, FName ID) {
}

UConversation::UConversation() {
}

