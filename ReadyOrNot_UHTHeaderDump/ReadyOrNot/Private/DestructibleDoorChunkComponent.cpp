#include "DestructibleDoorChunkComponent.h"

UDestructibleDoorChunkComponent::UDestructibleDoorChunkComponent() {
    this->bIsDoorHandle = false;
    this->bIsHinge = false;
    this->Health = 1500.00f;
    this->bCannotKickIfDestroyed = false;
}

