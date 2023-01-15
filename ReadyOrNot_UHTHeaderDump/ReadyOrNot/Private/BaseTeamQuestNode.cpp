#include "BaseTeamQuestNode.h"

class ASWATManager;
class USwatCommandWidget;

void UBaseTeamQuestNode::UpdateSWATCommands(USwatCommandWidget* Widget, TArray<FSwatCommand>& SwatCommands) {
}

ASWATManager* UBaseTeamQuestNode::GetSWATManager() {
    return NULL;
}

UBaseTeamQuestNode::UBaseTeamQuestNode() {
    this->bEnabledAllSwatCommands = false;
    this->SWATManager = NULL;
}

