#include "ObjectivePoint.h"
#include "Net/UnrealNetwork.h"
#include "MapActorComponent.h"
#include "ObjectiveMarkerComponent.h"

void AObjectivePoint::ToggleObjectiveMarkerVisibility() {
}

void AObjectivePoint::ShowObjectiveMarker() {
}

void AObjectivePoint::InitSettings(FSlateBrush Icon, FText Text, float ShowMarkerAtDistance) {
}

void AObjectivePoint::HideObjectiveMarker() {
}

void AObjectivePoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AObjectivePoint, ObjectiveMarkerComponent);
    DOREPLIFETIME(AObjectivePoint, MapActorComponent);
}

AObjectivePoint::AObjectivePoint() {
    this->TiedToActor = NULL;
    this->ObjectiveMarkerComponent = CreateDefaultSubobject<UObjectiveMarkerComponent>(TEXT("Objective Marker Component"));
    this->MapActorComponent = CreateDefaultSubobject<UMapActorComponent>(TEXT("Map Actor Component"));
}

