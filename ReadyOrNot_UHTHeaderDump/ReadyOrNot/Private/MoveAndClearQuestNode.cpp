#include "MoveAndClearQuestNode.h"

class AActor;

void UMoveAndClearQuestNode::OnSWATBeginOverlap(AActor* VolumeActor, AActor* OverlappingActor) {
}

UMoveAndClearQuestNode::UMoveAndClearQuestNode() {
    this->SWATNeededToPass = 2;
    this->ClearTriggerVolume = NULL;
}

