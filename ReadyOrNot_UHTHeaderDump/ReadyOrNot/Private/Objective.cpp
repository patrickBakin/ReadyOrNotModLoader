#include "Objective.h"
#include "Net/UnrealNetwork.h"
#include "ScoringComponent.h"


void AObjective::OnObjectiveFailed_Implementation() {
}

void AObjective::OnObjectiveCreated_Implementation() {
}

void AObjective::OnObjectiveCompleted_Implementation() {
}

void AObjective::ObjectiveFailed() {
}

void AObjective::ObjectiveCompleted() {
}

bool AObjective::IsObjectiveInProgress() const {
    return false;
}

bool AObjective::IsObjectiveFailed() const {
    return false;
}

bool AObjective::IsObjectiveCompleted() const {
    return false;
}

EObjectiveStatus AObjective::GetObjectiveStatus() const {
    return EObjectiveStatus::Objective_InProgress;
}

void AObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AObjective, ObjectiveStatus);
}

AObjective::AObjective() {
    this->ScoringComponent = CreateDefaultSubobject<UScoringComponent>(TEXT("Scoring Component"));
    this->ObjectiveCompleteAudio = NULL;
    this->ObjectiveFailedAudio = NULL;
    this->LockedToMode = ECOOPMode::CM_None;
    this->bFailureEndsMission = false;
    this->bHiddenObjective = false;
    this->ObjectiveStatus = EObjectiveStatus::Objective_InProgress;
}

