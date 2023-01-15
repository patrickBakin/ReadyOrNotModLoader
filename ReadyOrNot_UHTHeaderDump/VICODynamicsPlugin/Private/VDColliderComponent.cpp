#include "VDColliderComponent.h"

UVDColliderComponent::UVDColliderComponent() {
    this->SimulationInstance = NULL;
    this->bAddAllComponents = true;
    this->bIgnoreConvexShapes = true;
}

