#include "DoorwayWithoutDoor.h"
#include "DoorwayComponent.h"

class UDoorPointComponent;

bool ADoorwayWithoutDoor::IsPointInFrontOfDoorway(FVector Vector) const {
    return false;
}

TArray<UDoorPointComponent*> ADoorwayWithoutDoor::GetFrontStackupPoints() {
    return TArray<UDoorPointComponent*>();
}

FVector ADoorwayWithoutDoor::GetFrontPIEMidLocation() {
    return FVector{};
}

FVector ADoorwayWithoutDoor::GetFrontPIEEndLocation() {
    return FVector{};
}

UDoorPointComponent* ADoorwayWithoutDoor::GetFrontMidpoint() {
    return NULL;
}

UDoorPointComponent* ADoorwayWithoutDoor::GetFrontGrenadeThrowPoint() {
    return NULL;
}

UDoorPointComponent* ADoorwayWithoutDoor::GetFrontGrenadeLaunchPoint() {
    return NULL;
}

FVector ADoorwayWithoutDoor::GetFrontDoorInteractionPoint() {
    return FVector{};
}

TArray<UDoorPointComponent*> ADoorwayWithoutDoor::GetFrontClearPoints() {
    return TArray<UDoorPointComponent*>();
}

TArray<UDoorPointComponent*> ADoorwayWithoutDoor::GetBackStackupPoints() {
    return TArray<UDoorPointComponent*>();
}

FVector ADoorwayWithoutDoor::GetBackPIEMidLocation() {
    return FVector{};
}

FVector ADoorwayWithoutDoor::GetBackPIEEndLocation() {
    return FVector{};
}

UDoorPointComponent* ADoorwayWithoutDoor::GetBackMidpoint() {
    return NULL;
}

UDoorPointComponent* ADoorwayWithoutDoor::GetBackGrenadeThrowPoint() {
    return NULL;
}

UDoorPointComponent* ADoorwayWithoutDoor::GetBackGrenadeLaunchPoint() {
    return NULL;
}

FVector ADoorwayWithoutDoor::GetBackDoorInteractionPoint() {
    return FVector{};
}

TArray<UDoorPointComponent*> ADoorwayWithoutDoor::GetBackClearPoints() {
    return TArray<UDoorPointComponent*>();
}

bool ADoorwayWithoutDoor::CanIssueMoveAndClear_Implementation(FHitResult TraceHit) {
    return false;
}

ADoorwayWithoutDoor::ADoorwayWithoutDoor() {
    this->Doorway = CreateDefaultSubobject<UDoorwayComponent>(TEXT("Doorway"));
}

