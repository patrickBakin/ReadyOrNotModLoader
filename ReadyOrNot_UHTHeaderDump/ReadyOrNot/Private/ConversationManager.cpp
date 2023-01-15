#include "ConversationManager.h"
#include "Templates/SubclassOf.h"

class ACyberneticCharacter;
class UConversation;

UConversation* AConversationManager::TryPlayConversation(FName ConversationId, ACyberneticCharacter* ConversationStarter) {
    return NULL;
}

UConversation* AConversationManager::PlayPrebuiltConversation(TSubclassOf<UConversation> Conversation, ACyberneticCharacter* ConversationStarter, FName ConversationId) {
    return NULL;
}

void AConversationManager::PlayConversationInst(UConversation* Conversation, ACyberneticCharacter* ConversationStarter) {
}

AConversationManager::AConversationManager() {
}

