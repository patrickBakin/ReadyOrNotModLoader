#include "BaseQuestNode.h"

class APlayerCharacter;

void UBaseQuestNode::StartQuestNodeAction() {
}

APlayerCharacter* UBaseQuestNode::GetOwningPlayer() {
    return NULL;
}

bool UBaseQuestNode::GetInProgress() const {
    return false;
}

UBaseQuestNode::UBaseQuestNode() {
    this->QuestManager = NULL;
    this->StartDelay = 0.25f;
    this->StartQuestMessageActor = NULL;
    this->OwningPlayer = NULL;
}

