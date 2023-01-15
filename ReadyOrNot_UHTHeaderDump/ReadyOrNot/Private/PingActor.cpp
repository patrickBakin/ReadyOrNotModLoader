#include "PingActor.h"
#include "Net/UnrealNetwork.h"
#include "MapActorComponent.h"
#include "ObjectiveMarkerComponent.h"

class AActor;

void APingActor::ToggleObjectiveMarkerVisibility() const {
}

void APingActor::ShowObjectiveMarker() const {
}

void APingActor::Setup(AActor* InActor) {
}

void APingActor::OnRep_SetPingText() {
}

void APingActor::OnRep_SetIconBrush() {
}

void APingActor::HideObjectiveMarker() const {
}

void APingActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APingActor, PingedActor);
    DOREPLIFETIME(APingActor, IconBrush);
    DOREPLIFETIME(APingActor, PingText);
    DOREPLIFETIME(APingActor, ObjectiveMarkerComponent);
    DOREPLIFETIME(APingActor, MapActorComponent);
}

APingActor::APingActor() {
    this->PingedActor = NULL;
    this->ObjectiveMarkerComponent = CreateDefaultSubobject<UObjectiveMarkerComponent>(TEXT("Objective Marker Component"));
    this->MapActorComponent = CreateDefaultSubobject<UMapActorComponent>(TEXT("Map Actor Component"));
}

