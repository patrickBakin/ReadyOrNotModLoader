#include "BuildingTrigger.h"

class AActor;

void ABuildingTrigger::OnBuildingExit_Implementation(AActor* OverlappedActor, AActor* OtherActor) {
}

void ABuildingTrigger::OnBuildingEnter_Implementation(AActor* OverlappedActor, AActor* OtherActor) {
}

bool ABuildingTrigger::IsActorOnFloor(AActor* Actor, int32 FloorNumber) const {
    return false;
}

int32 ABuildingTrigger::GetFloorNumberFromActorLocation(AActor* Actor) const {
    return 0;
}

FVector ABuildingTrigger::GetFloorLocation(int32 FloorNumber) const {
    return FVector{};
}

void ABuildingTrigger::GenerateFloors() {
}

ABuildingTrigger::ABuildingTrigger() {
    this->NumberOfFloors = 0;
    this->bAuto = true;
    this->bUniformFloorSpacing = true;
    this->SpacingBetweenFloors = 0.00f;
}

