#include "IncriminationGS.h"
#include "Net/UnrealNetwork.h"

class AIncriminationClue;
class APlayerCharacter;

void AIncriminationGS::OnRep_OnPreviousActiveClueChanged() {
}

void AIncriminationGS::OnRep_OnIntelStateChanged() {
}

void AIncriminationGS::OnRep_OnIntelSearchAreaChosen() {
}

void AIncriminationGS::OnRep_OnIntelBuildingChosen() {
}

void AIncriminationGS::OnRep_OnCluesChanged() {
}

void AIncriminationGS::OnRep_OnActiveClueChanged() {
}

AIncriminationClue* AIncriminationGS::GetClue(int32 ClueNumber, bool& bSuccess, bool bMustBeFound) {
    return NULL;
}

TArray<AIncriminationClue*> AIncriminationGS::GetAllCluesOfNumber(int32 ClueNumber) {
    return TArray<AIncriminationClue*>();
}

bool AIncriminationGS::DoesPlayerPossessAnyClue(APlayerCharacter* PlayerCharacter) {
    return false;
}

bool AIncriminationGS::AnyLowerCluesFound(int32 ClueNumber) {
    return false;
}

bool AIncriminationGS::AnyHigherCluesFound(int32 ClueNumber) {
    return false;
}

void AIncriminationGS::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIncriminationGS, ChosenEvidenceSpawn);
    DOREPLIFETIME(AIncriminationGS, ChosenEvidenceActor);
    DOREPLIFETIME(AIncriminationGS, ChosenExtractionDevice);
    DOREPLIFETIME(AIncriminationGS, Clues);
    DOREPLIFETIME(AIncriminationGS, ClueSpawnPoints);
    DOREPLIFETIME(AIncriminationGS, ActiveClue);
    DOREPLIFETIME(AIncriminationGS, PreviousActiveClue);
    DOREPLIFETIME(AIncriminationGS, ChosenEvidenceSearchArea);
    DOREPLIFETIME(AIncriminationGS, ChosenEvidenceBuilding);
    DOREPLIFETIME(AIncriminationGS, NonMainIntelSearchZones);
    DOREPLIFETIME(AIncriminationGS, CurrentExtractionDevice);
    DOREPLIFETIME(AIncriminationGS, PickupTeam);
    DOREPLIFETIME(AIncriminationGS, IntelState);
    DOREPLIFETIME(AIncriminationGS, bIntelExtracted);
}

AIncriminationGS::AIncriminationGS() {
    this->ChosenEvidenceSpawn = NULL;
    this->ChosenEvidenceActor = NULL;
    this->ChosenExtractionDevice = NULL;
    this->ActiveClue = NULL;
    this->PreviousActiveClue = NULL;
    this->ChosenEvidenceSearchArea = NULL;
    this->ChosenEvidenceBuilding = NULL;
    this->CurrentExtractionDevice = NULL;
    this->PickupTeam = ETeamType::TT_NONE;
    this->IntelState = EEvidenceActorState::Unclaimed;
    this->bIntelExtracted = false;
}

