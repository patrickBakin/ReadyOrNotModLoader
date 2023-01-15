#include "EvidenceExtractionDevice_Incrim.h"
#include "MapActorComponent.h"
#include "ObjectiveMarkerComponent.h"

AEvidenceExtractionDevice_Incrim::AEvidenceExtractionDevice_Incrim() {
    this->ObjectiveMarkerComponent = CreateDefaultSubobject<UObjectiveMarkerComponent>(TEXT("Objective Marker Component"));
    this->ObjectiveMarkerComponent_WayPoint = CreateDefaultSubobject<UObjectiveMarkerComponent>(TEXT("Objective Marker Component Way Point"));
    this->MapActorComponent = CreateDefaultSubobject<UMapActorComponent>(TEXT("Map Actor Component"));
}

