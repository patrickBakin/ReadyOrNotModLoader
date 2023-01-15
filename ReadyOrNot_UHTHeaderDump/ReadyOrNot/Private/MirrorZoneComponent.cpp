#include "MirrorZoneComponent.h"

class AActor;
class UMirrorPortalComponent;

UMirrorPortalComponent* UMirrorZoneComponent::GetFurthestMirrorPortalFrom(AActor* Actor) {
    return NULL;
}

UMirrorZoneComponent::UMirrorZoneComponent() {
    this->bMustBeCrouching = true;
}

