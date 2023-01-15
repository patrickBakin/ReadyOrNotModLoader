#include "IssueCommandQuestNode.h"

void UIssueCommandQuestNode::OnIssuedCommand(ESwatCommand Command, ETeamType Team) {
}

UIssueCommandQuestNode::UIssueCommandQuestNode() {
    this->SwatCommand = ESwatCommand::SC_None;
    this->TeamType = ETeamType::TT_NONE;
    this->bHasIssueCommand = false;
}

