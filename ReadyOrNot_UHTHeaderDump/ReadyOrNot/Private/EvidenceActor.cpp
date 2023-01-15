#include "EvidenceActor.h"
#include "Net/UnrealNetwork.h"
#include "ScoringComponent.h"

void AEvidenceActor::UpdateEvidenceCollection_COOP(float DeltaTime) {
}

void AEvidenceActor::StartExtractingEvidence() {
}

void AEvidenceActor::OnRep_EvidenceStateChanged() {
}

FString AEvidenceActor::GetEvidenceName() const {
    return TEXT("");
}

void AEvidenceActor::FinishExtractingEvidence() {
}

void AEvidenceActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEvidenceActor, bEvidenceExtracted);
    DOREPLIFETIME(AEvidenceActor, PreviousEvidenceState);
    DOREPLIFETIME(AEvidenceActor, EvidenceState);
    DOREPLIFETIME(AEvidenceActor, bIsBeingCollected);
    DOREPLIFETIME(AEvidenceActor, CurrentCollectionTime);
    DOREPLIFETIME(AEvidenceActor, MaxCollectionTime);
}

AEvidenceActor::AEvidenceActor() {
    this->ScoringComponent = CreateDefaultSubobject<UScoringComponent>(TEXT("Scoring Component"));
    this->EvidenceName = TEXT("Evidence");
    this->bEvidenceExtracted = false;
    this->PreviousEvidenceState = EEvidenceActorState::Unclaimed;
    this->EvidenceState = EEvidenceActorState::Unclaimed;
    this->bIsBeingCollected = false;
    this->CurrentCollectionTime = 0.00f;
    this->MaxCollectionTime = 2.00f;
    this->bInteractHeld = false;
}

