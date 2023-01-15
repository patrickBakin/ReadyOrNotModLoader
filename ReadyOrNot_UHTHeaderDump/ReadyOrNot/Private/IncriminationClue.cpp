#include "IncriminationClue.h"
#include "Net/UnrealNetwork.h"
#include "MapActorComponent.h"

class AIncriminationClueSpawnPoint;

void AIncriminationClue::RevealNextClue() {
}

void AIncriminationClue::OnRep_OnClueStateChanged() {
}

void AIncriminationClue::OnRep_OnClueFound() {
}

void AIncriminationClue::OnClueFound_Implementation() {
}

bool AIncriminationClue::IsClueFound() const {
    return false;
}

void AIncriminationClue::Init(AIncriminationClueSpawnPoint* OwningSpawn, uint8 InClueNumber, const FText& InClueName, const FText& InClueFoundMessage, float InShowObjectiveMarkerIn) {
}

void AIncriminationClue::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIncriminationClue, ClueNumber);
    DOREPLIFETIME(AIncriminationClue, ShowObjectiveMarkerIn);
    DOREPLIFETIME(AIncriminationClue, NextClue);
    DOREPLIFETIME(AIncriminationClue, ClueName);
    DOREPLIFETIME(AIncriminationClue, ClueFoundMessage);
    DOREPLIFETIME(AIncriminationClue, SpawnPointOwner);
    DOREPLIFETIME(AIncriminationClue, bClueFound);
    DOREPLIFETIME(AIncriminationClue, bClueTimerExpired);
    DOREPLIFETIME(AIncriminationClue, ClueState);
}

AIncriminationClue::AIncriminationClue() {
    this->MapActorComponent = CreateDefaultSubobject<UMapActorComponent>(TEXT("Map Actor Component"));
    this->ClueNumber = 1;
    this->ShowObjectiveMarkerIn = 120.00f;
    this->NextClue = NULL;
    this->SpawnPointOwner = NULL;
    this->bClueFound = false;
    this->bClueTimerExpired = false;
    this->ClueState = EClueState::Unclaimed;
}

