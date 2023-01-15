#include "PVPTriggerBox.h"
#include "Net/UnrealNetwork.h"
#include "ObjectiveMarkerComponent.h"

class AActor;
class APlayerCharacter;

void APVPTriggerBox::ToggleObjectiveMarker() {
}

void APVPTriggerBox::StartTimerEvent() {
}

void APVPTriggerBox::ShowObjectiveMarker() {
}

void APVPTriggerBox::ResumeTimerEvent() {
}

void APVPTriggerBox::PauseTimerEvent() {
}

void APVPTriggerBox::OnTimerExpired_Implementation() {
}

void APVPTriggerBox::OnRep_CharactersInTriggerBoxUpdated_Implementation() {
}

void APVPTriggerBox::OnEndOverlap_Implementation(AActor* OverlappedActor, AActor* OtherActor) {
}

void APVPTriggerBox::OnBeginOverlap_Implementation(AActor* OverlappedActor, AActor* OtherActor) {
}

bool APVPTriggerBox::IsPlayerOnAcceptedTeam(APlayerCharacter* Player) const {
    return false;
}

bool APVPTriggerBox::IsActorInTriggerBox(AActor* InActor) const {
    return false;
}

void APVPTriggerBox::HideObjectiveMarker() {
}

float APVPTriggerBox::GetLastElapsedTime() const {
    return 0.0f;
}

float APVPTriggerBox::GetCurrentElapsedTime() const {
    return 0.0f;
}

bool APVPTriggerBox::DoesActorHaveAnyAcceptedTags(AActor* OtherActor) const {
    return false;
}

void APVPTriggerBox::CancelTimerEvent() {
}

void APVPTriggerBox::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APVPTriggerBox, CharactersInTriggerBox);
    DOREPLIFETIME(APVPTriggerBox, TimeElapsed);
    DOREPLIFETIME(APVPTriggerBox, PreviousTimeElapsed);
    DOREPLIFETIME(APVPTriggerBox, bEntered);
    DOREPLIFETIME(APVPTriggerBox, TimeNeededToStay_Editor);
    DOREPLIFETIME(APVPTriggerBox, TimeNeededToStay);
    DOREPLIFETIME(APVPTriggerBox, TimeNeededToStay_Active);
    DOREPLIFETIME(APVPTriggerBox, bLogDebugInfo);
}

APVPTriggerBox::APVPTriggerBox() {
    this->TextRender = NULL;
    this->ObjectiveMarkerComponent = CreateDefaultSubobject<UObjectiveMarkerComponent>(TEXT("Objective Marker Component"));
    this->TimeElapsed = 0.00f;
    this->PreviousTimeElapsed = 0.00f;
    this->bEntered = false;
    this->TimeNeededToStay_Editor = 3.00f;
    this->TimeNeededToStay = 30.00f;
    this->TimeNeededToStay_Active = 3.00f;
    this->OnlyAcceptTeams.AddDefaulted(2);
    this->bLogDebugInfo = false;
}

