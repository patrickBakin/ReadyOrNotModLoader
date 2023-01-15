#include "IncriminationGM.h"

class AActor;
class AIncriminationClue;

void AIncriminationGM::OnEvidencePickedUp_Implementation(AActor* PickupActor) {
}

void AIncriminationGM::OnEvidenceDropped_Implementation(AActor* DropActor) {
}

void AIncriminationGM::OnClueFound_Implementation(AIncriminationClue* ClueActor, AActor* ClueFounder) {
}

bool AIncriminationGM::HasVisitedAllEvidenceSpawns() const {
    return false;
}

AIncriminationGM::AIncriminationGM() {
    this->MaxCluesToFind = 3;
    this->ChosenSpawnGroup_BlueTeam = NULL;
    this->ChosenSpawnGroup_RedTeam = NULL;
}

