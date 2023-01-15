#include "ThreatAwarenessActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

class ADoor;

void AThreatAwarenessActor::ThisCalculateExits() {
}

void AThreatAwarenessActor::RemoveAnyVisibleExits() {
}

bool AThreatAwarenessActor::IsFrontDoorThreat() const {
    return false;
}

bool AThreatAwarenessActor::IsDoorThreat() const {
    return false;
}

bool AThreatAwarenessActor::HasSpecificExitDoor(ADoor* Door) const {
    return false;
}

bool AThreatAwarenessActor::HasExit() const {
    return false;
}

bool AThreatAwarenessActor::GetUniqueExtis(TArray<ADoor*>& OutDoors) const {
    return false;
}

EThreatLevel AThreatAwarenessActor::GetThreatLevel() const {
    return EThreatLevel::TL_None;
}

bool AThreatAwarenessActor::GetRandomExitDoor(ADoor*& Door) const {
    return false;
}

ADoor* AThreatAwarenessActor::GetAttachedDoor() const {
    return NULL;
}

void AThreatAwarenessActor::GenerateLookAtPoints() {
}

AThreatAwarenessActor::AThreatAwarenessActor() {
    this->DefaultScene = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultScene"));
    this->ThreatLevel = EThreatLevel::TL_Low;
    this->DoorThreat = NULL;
    this->bFrontDoorThreat = false;
}

